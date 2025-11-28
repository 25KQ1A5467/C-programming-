#include <stdio.h>
#include <conio.h>

void main()
{
    int a=0, b=0, c=0, iv=0, ch, nv;
    char name[20];

    printf("Enter pooling booth officer name:");
    gets(name);

    printf("Enter number of voters:");
    scanf("%d", &nv);

    printf("Each party initial votes:");
    printf("\n A - %d  B - %d  C - %d", a, b, c);

    getch();
    clrscr();

    while(nv > 0)
    {
        printf("\n 1 A   2 B   3 C");
        printf("\nEnter your vote:");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: 
            a++;
             nv--;
              break;
            case 2: 
            b++; 
            nv--; 
            break;
            case 3: 
            c++; 
            nv--; 
            break;
            default:
             iv++; 
             nv--;
        }

        clrscr();
    }

    printf("\n A - %d   B - %d   C - %d", a, b, c);
    printf("\n Invalid Votes - %d", iv);

    // ---------------- Final Result Added ----------------
    if(a > b && a > c)
        printf("\nFinal Result: Party A Wins!");
    else if(b > a && b > c)
        printf("\nFinal Result: Party B Wins!");
    else if(c > a && c > b)
        printf("\nFinal Result: Party C Wins!");
    else
        printf("\nFinal Result: It's a Tie!");
    // ----------------------------------------------------

    getch();
}