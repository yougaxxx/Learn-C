#include <stdio.h>
int main()
{
	int a;
	printf("������һ����λ����");
	scanf("%d",&a);
	int gewei=a%10;
	int shiwei=a/10%10;
	int baiwei=a/100;
	printf("%d",gewei*100+shiwei*10+baiwei);
	return 0;
 } 
