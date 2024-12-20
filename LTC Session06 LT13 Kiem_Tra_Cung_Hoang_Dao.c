#include <stdio.h>

int main () 
{
    int day_of_birth, month_of_birth;

    printf("Nhap ngay sinh: ");
    
    scanf("%d", &day_of_birth);
    
    printf("Nhap thang sinh: ");
    
    scanf("%d", &month_of_birth);

    if ((month_of_birth == 3 && day_of_birth >= 21) || (month_of_birth == 4 && day_of_birth <= 20)) {
        printf("Cung hoang dao cua ban la: Bach Duong\n");
    } else if ((month_of_birth == 4 && day_of_birth >= 21) || (month_of_birth == 5 && day_of_birth <= 20)) {
        printf("Cung hoang dao cua ban la: Kim Nguu\n");
    } else if ((month_of_birth == 5 && day_of_birth >= 21) || (month_of_birth == 6 && day_of_birth <= 21)) {
        printf("Cung hoang dao cua ban la: Song Tu\n");
    } else if ((month_of_birth == 6 && day_of_birth >= 22) || (month_of_birth == 7 && day_of_birth <= 22)) {
        printf("Cung hoang dao cua ban la: Cu Giai\n");
    } else if ((month_of_birth == 7 && day_of_birth >= 23) || (month_of_birth == 8 && day_of_birth <= 22)) {
        printf("Cung hoang dao cua ban la: Su Tu\n");
    } else if ((month_of_birth == 8 && day_of_birth >= 23) || (month_of_birth == 9 && day_of_birth <= 22)) {
        printf("Cung hoang dao cua ban la: Xu Nu\n");
    } else if ((month_of_birth == 9 && day_of_birth >= 23) || (month_of_birth == 10 && day_of_birth <= 23)) {
        printf("Cung hoang dao cua ban la: Thien Binh\n");
    } else if ((month_of_birth == 10 && day_of_birth >= 24) || (month_of_birth == 11 && day_of_birth <= 22)) {
        printf("Cung hoang dao cua ban la: Bo Cap\n");
    } else if ((month_of_birth == 11 && day_of_birth >= 23) || (month_of_birth == 12 && day_of_birth <= 21)) {
        printf("Cung hoang dao cua ban la: Nhan Ma\n");
    } else if ((month_of_birth == 12 && day_of_birth >= 22) || (month_of_birth == 1 && day_of_birth <= 19)) {
        printf("Cung hoang dao cua ban la: Ma Ket\n");
    } else if ((month_of_birth == 1 && day_of_birth >= 20) || (month_of_birth == 2 && day_of_birth <= 18)) {
        printf("Cung hoang dao cua ban la: Bao Binh\n");
    } else if ((month_of_birth == 2 && day_of_birth >= 19) || (month_of_birth == 3 && day_of_birth <= 20)) {
        printf("Cung hoang dao cua ban la: Song Ngu\n");
    } else {
        printf("Ngay thang sinh khong hop le!\n");
    }

    return 0;
}
