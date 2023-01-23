
#include<stdio.h>

int naturalNO(int lowerlimit, int upperlimit)
{
    if (lowerlimit > upperlimit)
    {
        return 0;
    }
    else
    {
        printf("%d", lowerlimit);
        naturalNO(lowerlimit + 1, upperlimit);
    }
}

int main()
{
    int x, y;
    printf("Enter the lower limit = ");
    scanf("%d", &x);
    printf("Enter the upper limit = ");
    scanf("%d", &y);
    naturalNo(x, y);

    return 0;
}