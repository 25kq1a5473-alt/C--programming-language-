#include<stdio.h>
void main(){
int s=0,l=10,u=20;
while (l<=u-1){
s=s+l;
printf("%d\n",s);
l++;

}
printf("%d",s);
}