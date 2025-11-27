#include<stdio.h>
void printsum(int);

  void main(){
    
    int n;
     printf("enter a number");
     scanf("%d",&n);
     printsum(n);}
    void printsum(int n){
      int i,s=0;
      for(i=0;i<=n;i++)
        s=s+i;
        printf("%d",s);}