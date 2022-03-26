#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int a[100];
    float A, B;
    int dem1 = 0;
    int Sa = 0;
    int dem2 = 0;
    int Sd = 0;
    printf("nhap n= ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
        if (a[i] < 0)
        {
            dem1++;
            Sa += a[i];
            A = Sa * 1.0 / dem1;
        }
        else
        {
            dem2++;
            Sd += a[i];
            B = Sd * 1.0 / dem2;
        }
    }
    printf("\ntrung binh cong cua so duong la: %f\n", B);
    printf("trung binh cong cua so am la %f", A);
}