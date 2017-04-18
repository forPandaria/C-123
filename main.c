#include<stdio.h>
#include<math.h>
int main() {
	int a,b,T,n;
	long long x,y,z,sum;
	   scanf("%d",&T);
		while(T--)
		{
			scanf("%d %d",&a,&b);
			n=a+b;
			x=pow(2,a);
			y=pow(2,b);
			z=pow(2,n);
			sum=x+y;
			while(sum%2==0)
			{
				sum/=2;
				z/=2;
			}
			printf("%lld/%lld\n",sum,z);
			printf("new tianjia");
		}
	return 0;
}
