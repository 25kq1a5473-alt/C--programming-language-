#include<stdio.h>
void main (){
 int i,max;
  int a[5]={1,2,3,4};
   for(i=0;i<5;i++)
    max=a[0];
     for(i=0;i<5;i++){
       if(a[i]>max)
         max=a[i];
         
         printf("%d ",max);
      }
     }