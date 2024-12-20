#include <stdio.h>
#include <math.h>

int main() 
{
    int numOrg, num1, num2, num3, sum;

    printf("\nCac so Armstrong co 3 chu so la:");
    
    for (numOrg = 100; numOrg <= 999; numOrg++) 
    {
        num1 = numOrg / 100;         
        
        num2 = (numOrg / 10) % 10;   
        
        num3 = numOrg % 10;          

        sum = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);

        if (sum == numOrg) 
        {
            printf("\n\n%d", numOrg);
        }
    }

    printf("\n\n");

    return 0;
}
