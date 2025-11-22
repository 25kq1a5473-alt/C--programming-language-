#include<stdio.h>
void main(){
int l,u;
printf("enter l,n");
scanf("%d %d",&l,&u);
while (l<=u-1){
printf("%d ",l);
l++;
}
printf("%d",l);
}