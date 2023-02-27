#include<stdio.h>
int search(int key,int a[],int len)
{
	int ret=-1;
	int i;
	for(i=0;i<len;i++)
	{
		if(key==a[i])
		{
			ret=i;
			break;
		}
	}
	return ret;
}
int main()
{
	int a[]={7,3,8,10,5,4,28,43};
	int r=search(8,a,sizeof(a)/sizeof(a[0]));
	printf("%d\n",r);
	return 0;
}
