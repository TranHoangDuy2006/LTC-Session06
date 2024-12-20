#include <stdio.h>

int main ()
{
    int number;
    
    int oddNum = 0;
    
    int evenNum = 0;
    
    int count = 0;

    printf("\nNhap vao 5 so: \n");
    
    while (count < 5) 
    {
        printf("\nNhap so thu %d: ", count + 1);
        
        scanf("%d", &number);
        
        count++;

        if(number % 2 == 0)
        {
            evenNum++;
        }
            else
            {
                oddNum++;
            }
    }    
        printf("\n");
        
        printf("\nSo phan tu la so chan la: %d", evenNum);
        
        printf("\nSo phan tu la so le la: %d", oddNum);

        printf("\n\n");

    return 0;

}