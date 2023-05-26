#include<stdio.h>
#include<conio.h>
void main(){
int a;
int b;
int c;
clrscr();
printf("enter the starting year:");
scanf("%d",&a);
printf("enter the ending year:");
scanf("%d",&b);
c=a;
while(c<=b){
if(c%4==0){
printf("%d\n",c);
}
c++;
}
getch();
}