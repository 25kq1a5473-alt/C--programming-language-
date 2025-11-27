#include<stdio.h>
void main (){
int n,result;
int fact(int);
scanf("%d",&n);
if(n>0)
result=fact(n);
printf("factorial  is %d ",result);
}
 int fact(int n){
  int f,i;
  i=1;
  while(i<=n){
  f=f*i;
  i++;
  }
  return f;
  }