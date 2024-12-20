#include <stdio.h>

int main ()
{
    float initial_amount, interest_rate, total_amount, interest_amount;
    
    int month;

    printf("\nNhap so tien ban dau: ");
    
    scanf("%f", &initial_amount);
    
    printf("\nNhap lai suat thang: ");
    
    scanf("%f", &interest_rate);
    
    printf("\nNhap so thang gui tien: ");
    
    scanf("%d", &month);

    interest_rate = (interest_rate / 100.0);

    total_amount = initial_amount;

    for(int i = 0; i < month; i++)
        {
            total_amount = total_amount * (1 + interest_rate);
        }

    interest_amount = total_amount - initial_amount;

    printf("\nSo tien lai la: %.2f", interest_amount);

    printf("\n\nTong so tien nhan duoc la: %.2f", total_amount);

    printf("\n\n");

    return 0;

}

