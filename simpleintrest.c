#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,st,ci;
    printf("enter the principle:-\n");
    scanf("%f",&p);
    printf("enter the rate:-\n");
    scanf("%f",&r);
    printf("enter the time:-\n");
    scanf("%f",&t);
    st=(p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("simple intrest=%f\n compound intrest=%f",st,ci);
    return 0;
    
}