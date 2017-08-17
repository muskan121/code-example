#include<stdio.h>
#include<stdlib.h>
int main() {
  int t1=0,t2=1,i,n,nextterm;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
   printf("%d",t1);
   nextterm=t1+t2;
   t1=t2;
   t2=nextterm;
 }
}
