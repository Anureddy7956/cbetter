#include<stdio.h>
int main(){
int num1,num2,sum;
float average;
char name[20];
printf("\nEnter your name: ");
scanf("%s",name);

printf("\nEnter two numbers: ",num1,num2);
scanf("%d %d",&num1,&num2);

sum= num1+num2;
average = sum / 2;

printf("\n Hey here,%s!\n",name);
printf("\n You entered the integers: %d and %d\n",num1,num2);
printf("The sum of the numbers which you have entered is %d\n",sum);
printf("The total average is %1f",average);
}
