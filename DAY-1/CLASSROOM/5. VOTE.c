#include<stdio.h>
#include<conio.h>
int main(){
int num;
printf("enter your age : ");
scanf("%d",&num);
if (num>=18)
printf("Eligible for vote");
else
printf("Not eligible for vote");
getch();
return 0;
}