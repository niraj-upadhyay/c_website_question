//#include <stdio.h>
//int main()
//{
//    int n, i, count = 0, j, num;
//    printf("Enter the number = ");
//    scanf("%d", &num);
//    for (j = 6; j <= num; j++)
//    {
//        count = 0;
//        for (i = 1; i <= j; i++)
//        {
//            if (j % i == 0)
//            {
//                count++;
//            }
//        }
//        if (count == 2)
//        {
//            printf("%d\n", j);
//        }
//    }
//}

#include <stdio.h>
int main()
{
    int  i,q, j,p, count = 0;
    
    printf("Enter the lower limit = ");
    scanf("%d",&p);
    
    printf("Enter the upper limit = ");
	scanf("%d",&q);    
    
    for (j = p; j <= q; j++)
    {
        count = 0;
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", j);
        }
    }
}
