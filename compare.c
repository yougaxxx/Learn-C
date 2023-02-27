#include <stdio.h>

int main(){
	int a,b;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	int max=a;
	if(a<b)
	{
		max=b;
	}
	printf("较大的那个数是 %d",max);
	return 0;
}
