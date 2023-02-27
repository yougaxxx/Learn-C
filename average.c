#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    double c=(a+b)/2.0;
    printf("%d和%d的平均值是：%.1f",a,b,c);
    return 0;

}