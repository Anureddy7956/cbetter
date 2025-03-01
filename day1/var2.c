#include<stdio.h>
int main()
{
    float n1;
    float n2;
    char operator;

    while(1){
    printf("\nEnter the operator(+,-,*,/) or 'q' to quit: ");
    scanf(" %c",&operator);

    if(operator=='q'){
        printf("Exit\t");
        break;
        } 
       
    printf("\nEnter the number1: ");
    scanf("%f",&n1);

    printf("\nEnter the number2: ");
    scanf("%f",&n2);
  
    if(operator=='+') {
        printf("%f + %f = %1f\n",n1,n2,n1+n2);
    }
    else if(operator=='-'){
        printf("%f - %f = %1f\n",n1,n2,n1-n2);
    }
    else if(operator=='*'){
        printf("%f * %f =%1f\n",n1,n2,n1*n2);
    }
    else if(operator=='/'){
        printf("%f / %f = %1f\n",n1,n2,n1/n2);
    }
}
    return 0;
}