#include<stdio.h>
  void main(){
    void printnum(int);
    int n;
     printf("enter a number");
     scanf("%d",&n);
     printnum(n);
     }
     void printnum(int n){
        if(n%2==0){
         printf("even");}
         else{
         printf("odd");}
         
         
         }