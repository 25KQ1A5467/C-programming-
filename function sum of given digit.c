#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   void sum(int);
   clrscr();
   printf("enter n value:\n");
   scanf ("%d",&n);
   sum(n);
   getch();
}
void sum(int n)
{ 
    int s,r;
    s=0;
    while(n!=0)
    {
       r=n%10;
       s=s+r;
       n=n/10;
    }   
       printf("sum of a given number is:%d\n",s);
        
     getch();
}
 
                                                                                                            












    