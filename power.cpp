#include<stdio.h>
#include<math.h>
int main()
{
	
	int x,y;
	printf("Enter x :");
	scanf("%d",&x);
	
	printf("Enter y :");
	scanf("%d",&y);
	
	double result = pow(x,y);
	printf("%.2lf",result);
}
