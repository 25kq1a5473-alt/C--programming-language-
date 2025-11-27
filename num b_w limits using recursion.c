#include<stdio.h>
#include<stdlib.h>
void main(){
 int l,u;
 void printnum(int,int);
 scanf("%d%d",&l,&u);
 printnum(l,u);
 
}
void printnum(int l,int u){

printf("%d\n",l++);
if(l>u)
exit(0);
printnum(l,u);
 }