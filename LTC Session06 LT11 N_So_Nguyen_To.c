#include <stdio.h>
#include <math.h>

int main ()
{
    int x, count = 0, check_num = 2; 
    
    printf("\nNhap so phan tu la so nguyen to dau tien: ");
    
    scanf("%d", &x);
    
    printf("\n");

    while(count < x)
        {
            int isPrime = 1; 
            for(int i = 2; i <= sqrt(check_num); i++)
                {
                    if(check_num % i == 0)
                        {
                            isPrime = 0; 
                        }
                }
            if(isPrime) 
                {
                    count++;
                    printf("%d\t", check_num);
                }

            check_num++;
        }

        printf("\n\n"); 
    
    return 0;  
}