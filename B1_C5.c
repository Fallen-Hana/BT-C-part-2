#include<stdio.h>
#include<math.h>

int main()
{
    int a1,b1,c1, a2, b2, c2,dx,dy,d;
    float x,y;
    printf("a= "); scanf("%d",&a1);
    printf("b= "); scanf("%d",&b1);
    printf("c= "); scanf("%d",&c1);
    printf("d= "); scanf("%d",&a2);
    printf("e= "); scanf("%d",&b2);
    printf("f= "); scanf("%d",&c2);
    printf("he phuong trinh la: \n");
    printf("%dx+%dy=%d\n",a1,b1,c1);
    printf("%dx+%dy=%d \n",a2,b2,c2);
    d= a1*b2-a2*b1;
    dx= c1*b2-c2*b1;
    dy= a1*c2-a2*c1;
    if(d==0)
    {
        if(dx==dy)
        {
            printf("phuong trinh co vo so nghiem");
        }
        else{
            printf("phuong trinh vo nghiem");
        }
    }
    else {
        x= (dx*1.0/d);
        y=(dy*1.0/d);
        printf("x= %.2f \n",x);
        printf("y= %.2f",y);
    }
}