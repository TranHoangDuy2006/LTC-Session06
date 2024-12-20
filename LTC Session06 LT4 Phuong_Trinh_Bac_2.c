#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("\n");
    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    printf("\n");
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("\n");
    printf("Nhap vao he so c: ");
    scanf("%f", &c);

    if(a == 0)
    {
        printf("\n");
        printf("He so a khong hop le! Vui long nhap lai!");
            return 0;
    }

    delta = b * b - 4 * a * (c);
        if(delta > 0)
        {
            x1 = ((-b) + sqrt(delta)) / (2 * a);
            x2 = ((-b) - sqrt(delta)) / (2 * a);

            printf("\n");
            printf("Phuong trinh co 2 nghiem phan biet la: x1 = %.1f, x2 = %.1f", x1, x2);
        }
          else if(delta == 0)
          {
                x1 = (-b) / (2 * a);

                printf("\n");
                printf("Phuong trinh co 1 nghiem kep la: x1 = %.1f", x1);
          }
                else
                {
                    printf("\n");
                    printf("Phuong trinh vo nghiem!"); 
                }

    return 0;
}