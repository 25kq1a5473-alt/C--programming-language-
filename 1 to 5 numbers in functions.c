#include<stdio.h>
#include<stdlib.h>
void main(){
 int i;
 void printnum(int);
 printnum(i);
}
void printnum(int i){
i=1;
printf("%d",i++);
if(i==6)
exit(0);
 }