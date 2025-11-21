#include<stdio.h>
int main()
{
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("one");
		break;
		case 2:
		printf("Two");
		break;
		case 3:
		printf("Three");
		break;
		case 4:
		printf("four");
		break;
		case 5:
		printf("five");
		break;
		
		default:
		printf("num out of limit");
	}
}