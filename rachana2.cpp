#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float percentage;
    printf("enter the values of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("sum=%d",sum);
    percentage=(sum/500)*100;
    printf("the percentage is %f %",percentage);
}
