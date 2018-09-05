#include<stdio.h>
void main(){
int n,rem,rev=0,temp;
printf("enter your number=\n");
scanf("%d",&n);
temp=n;
while(n>0){
rem=n%10;
rev=rev+(rem*rem*rem);
n=n/10;


}
if(temp==rev)
printf("your number is armstrong\n");
else
printf("your number is not armstrong\n");

}
