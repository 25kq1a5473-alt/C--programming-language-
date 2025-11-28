#include<stdio.h>
#include<conio.h>
 void main(){
   int items,quantity,sum=0,bill,cost,ch;
   printf("****welcome to shopping mart****\n");
   printf("here are the items:\n");
   printf("1.chocoltes-5rupees\n  2.cookies-20rupees\n 3.cocacola-100rupees\n 4.pepsi-100rupees\n 5.books-50ruppes\n");
   printf("enter the item you want:\n");
   scanf("%d",&items);
   printf("enter quantity you want:\n");
   scanf("%d",&quantity);
    
    switch(items){
        case 1: cost=5;
                 break;
        case 2: cost=20;
                 break;  
        case 3: cost= 100;
                 break;   
        case 4: cost=100;
               break; 
        case 5:cost=50;
                 break;                          
          }
        sum = quantity* cost;
        printf("your bill is : %d\n",sum);
        
     printf("*****thankyou******");
     }
     
     