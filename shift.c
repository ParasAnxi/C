#include<stdio.h>
int main(){
int a, b;
printf("Enter int");
scanf("%d",&a);
a = a<<2;
b=a;
printf("\nThe left shifted data is = %d ",b);
return 0;
}