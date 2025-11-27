#include<stdio.h>
#include<conio.h>
void main(){
  int nv,a=0,b=0,c=0,in,ch,iv=0;
   char name[20];
   printf("enter polling booth name:");
   gets(name);
   printf("enter no.of voters:");
   scanf("%d",&nv);
   printf("each party initial votes:\nA-%d B-%d C-%d\n",a,b,c);
   
   clrscr();
   while(nv>0){
   printf("1.A  2.B 3.C 4.in\n");
   printf("please cast your vote");
   scanf("%d",&ch);
   
      switch(ch){
             case 1: a++;
                      iv++;
                      nv--;
                       break;
             case 2: b++;
                     iv++; 
                     nv--; 
                     break;   
             case 3: c++;
                      iv++;
                      nv--;
             default: 
                        iv++; 
                        nv--;
                          }
                         }
            
              printf("A=%d B=%d C=%d ",a,b,c);  
              printf("invalid votes-%d",in);
                }       