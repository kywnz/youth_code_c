/*Viết trò chơi bao - đá - kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo
thắng bao. Người dùng nhập vào một trong ba ký tự b (bao), d (đá), k (kéo); máy
tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    char c;
    int AI;
    srand(time(NULL));
    printf("Nhap vao ky tu (b-d-k) tuong ung bao da keo: ");
    scanf("%c%*c",&c);
    while(c=='b' || c=='k' || c=='d'){
    AI=rand()%3+1;//1 bao 2 da 3 keo
    switch(c){
        case 'b':{
            switch(AI){
            case 1:printf("ban HOA\n");break;
            case 2:printf("ban THUA\n");break;
            case 3:printf("ban THANG\n");break;
            }
        }break;
        case 'd':{
            switch(AI){
            case 1:printf("ban THANG\n");break;
            case 2:printf("ban HOA\n");break;
            case 3:printf("ban THUA\n");break;
            }
        }break;
        case 'k':{
            switch(AI){
            case 1:printf("ban THUA\n");break;
            case 2:printf("ban THANG\n");break;
            case 3:printf("ban HOA\n");break;
            }
        }break;
    }
    printf("Nhap vao ky tu (b-d-k) tuong ung bao da keo: ");
    scanf("%c%*c",&c);
    }
    return 0;
}