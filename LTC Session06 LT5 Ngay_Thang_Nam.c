#include <stdio.h>

int main ()
{
    int month, year;
    
    printf("\nNhap vao thang kiem tra: ");
    
    scanf("%d", &month);
    
    printf("\nNhap vao nam kiem tra: ");
    
    scanf("%d", &year);

    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    
    int day_in_month;
    
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day_in_month = 31;
                break;
    
        case 4: case 6: case 9: case 11:
                day_in_month = 30;
                break;

        case 2:
                day_in_month = isLeapYear ? 29 : 28; 
                break;

        default:
                printf("\nThang nhap vao khong hop le!");
                return 1;
           
    }

        printf("\nThang %d cua nam %d co %d ngay", month, year, day_in_month);

        printf("\n\n");

    return 0;

}