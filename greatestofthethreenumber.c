#include<stdio.h>
int main()
{
    int a,b,c;
    printf("values to be consider");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
    printf("a is greater");
    else if(b>a&&b>c)
    printf("b is greater");
    else
    printf("c is greater");
    return 0;

}