#include <stdio.h>

int main() 
{
    int number;  
    
    int sum = 0; 
    
    int count = 0; 

    printf("Nhap vao 5 so nguyen:\n");

    while (count < 5) 
    {
        printf("Nhap so thu %d: ", count + 1);
        
        scanf("%d", &number);
        
        count++;

        if (number % 2 != 0) 
        { 
            sum += number;      
        }
    }

    printf("Tong cua cac so le la: %d\n", sum);

    return 0;
}
