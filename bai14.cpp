#include <stdio.h>
int day_in_month(int m, int y) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 2:
            return 28 + ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
        default:
            return 30;
    }
}
void tmr(int d, int m, int y) {
    if (d == day_in_month(m, y)) { // Nếu là ngày cuối tháng
        d = 1;
        if (m == 12) { // Cuối năm
            m = 1;
            y++;
        } else m++;
    } else d++;
    printf("Ngay mai: %d/%d/%d\n", d, m, y);
}
void ytd(int d, int m, int y) {
    if (d == 1) { // Nếu là ngày đầu tháng
        if (m == 1) { // Đầu năm
            m = 12;
            y--;
        } else {
            m--;
        }
        d = day_in_month(m, y); // Ngày cuối tháng trước
    } else {
        d--;
    }
    printf("Ngay hom qua: %d/%d/%d\n", d, m, y);
}
int main() {
    int d, m, y;
    printf("Nhap vao ngay thang nam: ");
    scanf("%d %d %d", &d, &m, &y);
    ytd(d, m, y);
    tmr(d, m, y);
}
