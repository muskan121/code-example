#include<stdio.h>
#include<stdlib.h>
int main() {
int i,n,factorial=1;
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
factorial = factorial*i;
printf("%d is factorial",factorial);
}
