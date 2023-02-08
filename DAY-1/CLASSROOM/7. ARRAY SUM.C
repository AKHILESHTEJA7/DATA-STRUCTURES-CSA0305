#include<stdio.h>
#include<conio.h>
int main(){
int SUM=0,i,array[5]={10,20,30,40,50};
clrscr();
for(i=0;i<5;i++){
printf("array is %d %d\n",i,array[i]);}
for(i=0;i<5;i++){
SUM=SUM+array[i];}
printf("total sum of the array is %d",SUM);
getch();
return 0;
}