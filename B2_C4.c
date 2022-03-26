#include <stdio.h>

int main()
{
    x = 11, y = 6;
    int mid = (x - 1) / 2;

    for (int a = 0; a < y; a++) 
    {
        for (int b = 0; b < x; b++) 
        {
            if (a == y - 1) 
            {
                printf(" * ");
                continue;
            }

            if (b <= (mid - a) || b >= (mid + a)) 
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}