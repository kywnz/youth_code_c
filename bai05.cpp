#include <stdio.h>
#include <math.h>

// Hàm tính diện tích tam giác từ 3 điểm
float S_tamgiac(float xA, float yA, float xB, float yB, float xC, float yC) {
    return fabs(0.5 * (xA*(yB - yC) + xB*(yC - yA) + xC*(yA - yB)));
}

int main() {
    float xA, yA, xB, yB, xC, yC, xM, yM;
    float S_ABC, S_ABM, S_BCM, S_CAM;
    float epsilon = 1e-6; // Ngưỡng sai số để so sánh float

    // Nhập tọa độ các điểm
    printf("Nhap vao toa do diem A(xA;yA): ");
    scanf("%f %f", &xA, &yA);
    printf("Nhap vao toa do diem B(xB;yB): ");
    scanf("%f %f", &xB, &yB);
    printf("Nhap vao toa do diem C(xC;yC): ");
    scanf("%f %f", &xC, &yC);
    printf("Nhap vao toa do diem M(xM;yM): ");
    scanf("%f %f", &xM, &yM);

    // Tính diện tích tam giác chính và các tam giác phụ
    S_ABC = S_tamgiac(xA, yA, xB, yB, xC, yC);
    S_ABM = S_tamgiac(xA, yA, xB, yB, xM, yM);
    S_BCM = S_tamgiac(xB, yB, xC, yC, xM, yM);
    S_CAM = S_tamgiac(xC, yC, xA, yA, xM, yM);

    float S_tong = S_ABM + S_BCM + S_CAM;

    // So sánh tổng diện tích các tam giác con với tam giác chính
    if (fabs(S_tong - S_ABC) < epsilon) {
        // Nếu 1 trong 3 tam giác phụ có diện tích gần bằng 0 -> nằm trên cạnh
        if (fabs(S_ABM) < epsilon || fabs(S_BCM) < epsilon || fabs(S_CAM) < epsilon)
            printf("M nam tren canh tam giac ABC.\n");
        else
            printf("M nam trong tam giac ABC.\n");
    } else {
        printf("M nam ngoai tam giac ABC.\n");
    }

    return 0;
}
