#include<stdio.h>
int main()
{
    float _temp;
    float _celsius; 
    printf("\nEnter the temparature in celsius: ");
    scanf("%f",& _celsius);
    _temp=(_celsius * 9/5)+32;
    printf("\nFahrenheit temparature is :%1f", _temp);
    return 0;
}