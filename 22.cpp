#include<stdio.h>
#include<conio.h>
int main()
{
int E,N,P,CC;
printf("program to find cyclomatic complexity:\n");
printf("enter the number of edges in the flow graph:");
scanf("%d",&E);
printf("enter the number of nodes in the flow graph:");
scanf("%d",&N);
printf("enter the number of predicate nodes in the flow chart:");
scanf("%d",&P);
CC=E-N+(2*P);
printf("the cyclomatic complexity of the flow graph is :%d",CC);
getch();
}
