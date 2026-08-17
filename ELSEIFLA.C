#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int mark;
printf("Enter your mark");
scanf("%d",&mark);
if(mark >=90 )
printf("SSS+");
else if(mark >=80)
printf("SSS");
else if(mark >=70)
printf("A+");
else if(mark >=60)
printf("A");
else if(mark >=50)
printf("B");
else if(mark >=40)
printf("C");
else
printf("D");
{
if(mark >=33 )
{
printf("\npass");
printf("\n\tcongratulations");
}
else
{
printf("\nfail");
printf("\n\tbetter luck next time");
}
}
printf("\n\tthank you");
getch();
}