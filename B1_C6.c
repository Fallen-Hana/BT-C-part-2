#include <stdio.h>
#include <math.h>

void nghiem(int a, int b, int c, int d, int e, int f)
{
    int D, Dx, Dy;
    float x, y;
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    if (D == 0)
    {
        if (Dx == Dy)
        {
            printf("phuong trinh co vo so nghiem");
        }
        else
        {
            printf("phuong trinh vo nghiem");
        }
    }
    else
    {
        x = (float)(Dx * 1.0 / D);
        y = (float)(Dy * 1.0 / D);
        printf("x= %2f\n", x);
        printf("y= %2f", y);
    }
}
int main()
{
    int a, b, c, d, e, f;
    puts("nhap a= ");
    scanf("%d", &a);
    puts("nhap b= ");
    scanf("%d", &b);
    puts("nhap c= ");
    scanf("%d", &c);
    puts("nhap d= ");
    scanf("%d", &d);
    puts("nhap e= ");
    scanf("%d", &e);
    puts("nhap f= ");
    scanf("%d", &f);
    printf("%d*x+%d*y=%d\n", a, b, c);
    printf("%d*x+%d*y=%d\n", d, e, f);
    nghiem(a, b, c, d, e, f);
    return 0;
}