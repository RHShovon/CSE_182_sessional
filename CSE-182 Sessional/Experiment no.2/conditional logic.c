// conditional logic
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);

    max=(a>b)?a:b;
    printf("Max number=%d",max);

    return 0;
}
