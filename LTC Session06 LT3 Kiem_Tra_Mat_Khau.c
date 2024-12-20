#include <stdio.h>

int main () 
{
    char password = '1';   
    
    char input;           

    again:
    
    printf("\nVui long nhap mat khau ( 1 so ): ");
    
    scanf(" %c", &input);

    if (input == password) 
    {
        printf("\nMat khau dung, ban da dang nhap thanh cong!");
        
        printf("\n\n");
    }  
        else 
        {
            printf("\nMat khau sai, vui long thu lai!");
            
            printf("\n");

            goto again;
        }

    return 0;
}
