#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   void evenodd(int);
   clrscr();
   printf("enter a value");
   scanf ("%d",&a);
   evenodd(a);
   getch();
}
void evenodd(int a)
{ 
    if(a%2==0)
       printf("Given number is even");
    else
       printf("Given number is odd");   
}
 
                                                                                                            












    