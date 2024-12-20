#include <stdio.h>
#include <math.h>

int main ()
{
    int x;
    
    int songuyento = 1;
    
    printf("\nNhap vao so nguyen x: ");
    
    scanf("%d", &x);

    if(x <= 1)
    {
        printf("\n%d khong phai la so nguyen to!", x);

        printf("\n\n");
        
        return 1;
    }

    for( int i = 2; i < sqrt(x); i++)
    {
        if( x % i == 0)
        {
            songuyento = 0;
            
            break;
        }

    }
    if (songuyento) 
    {
        printf("\n");
        
        printf("%d la so nguyen to!", x);
    }
        else
        {
            printf("\n");
            
            printf("%d khong phai la so nguyen to!");
        }
    
    printf("\n\n");
    
    return 0;
}
