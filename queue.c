#include <stdio.h>
int main()
{
	int n;
	printf("���������������");
	scanf("%d",&n);
	int i=1;
	printf("%d",i);
	for(i=1;i+2<=n;){
		printf(" ");
		i+=2;
		printf("%d",i);
	} 
	return 0;
}
