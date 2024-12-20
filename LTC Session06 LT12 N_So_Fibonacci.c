#include <stdio.h>

int main ()
{
    int N, nextFibo;
    int x = 0;
    int y = 1;
    
    printf("\nNhap vao N so Fibonacci: ");
    
    scanf("%d", &N);

    if(N < 0)
        {
            printf("Ban nhap so nho hon 0, vui long nhap lai!");
            
            return 0;
        }

    if(N == 1)
        {
            printf("\nSo dau tien trong day so Fibonacci la: 0");
            
            return 1;
        }
    if(N == 2)
        {
            printf("\nHai so dau tien trong day la: 0, 1");
            
            return 1;
        }
                 
    printf("\n");

    printf("%d so Fibonacci dau tien la: ", N);
    
    if(N > 2)
        {
            printf("0 1 ");
            
            for(int i = 3; i <= N; i++)
                {  
                    nextFibo = (x + y);     
                    x = y;
                    y = nextFibo;        
                    printf("%d ", nextFibo);           
                }

        }
    
    printf("\n\n");

    return 0;
}