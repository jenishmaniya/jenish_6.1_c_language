#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("\nEnter the value of A:");
scanf("%d",&a);
while(a>=1){
if(a%2!=0){
printf("%d\n",a);
}
a--;
}
getch();
}