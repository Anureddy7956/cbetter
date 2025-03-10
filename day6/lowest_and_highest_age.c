//Printing highest and lowest age in the given array
#include<stdio.h>
int main(){
    int age[]={23,45,67,17,89,68,23,18,67,100};
    int length = sizeof(age) / sizeof(age[0]);
    int lowestage=age[0];

    for(int i=0; i<length;i++)
    {
        if(lowestage>age[i])
        {
            lowestage=age[i];
        }
    }
    printf("The lowest age in the given array is:%d\n",lowestage);

    int highestage=age[0];
    for(int i=0; i<length;i++)
    {
        if(highestage<age[i])
        {
            highestage=age[i];
        }
    }
    printf("The highest age in the given array is:%d\n",highestage);
    return 0;
}