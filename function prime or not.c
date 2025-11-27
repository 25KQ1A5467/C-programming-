#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   void prime(int);
   clrscr();
   printf("enter n value");
   scanf ("%d",&n);
   prime(n);
   getch();
}
void prime(int n)
{ 
    int i,c;
    i=1;
    c=0;
    while(i<=n)
    {
       if(n%i==0)
       c=c+1;
       i=i+1;
    }
    if(c==2)
       printf("Given number is prime");
    else
       printf("Given number is not prime");   
}
 
                                                                                                            












    