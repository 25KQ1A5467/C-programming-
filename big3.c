#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a, b ,c values:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c)){
		printf("a is bigger number");
	}
	else if((b>a)&&(b>c)){
		printf("b is bigger number");
	}
	else{
		printf("c is bigger number");
	}
}