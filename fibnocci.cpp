#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,x;
	printf("enter the number of terms :");
	scanf("%d",&n);
	printf("fibnacci series");
	for(i=1;i<=n;i++)
{
   printf("%d\n",t1);
   x=t1+t2;
   t1=t2;
   t2=x;
}
return 0;
}
