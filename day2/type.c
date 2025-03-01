#include <stdio.h>
#include<math.h>
int main(){
    int uin1,uin2,big;

    printf("Enter a number:");
    scanf("%d", &uin1);

    printf("Enter another number:");
    scanf("%d",&uin2);

    printf(" %s",( uin1 %2==0 )?"even\n":"odd\n");//conditional operator
    printf(" %s",( uin2 %2==0 )?"even\n":"odd\n");//conditional operator

    big=(uin1>uin2)?(uin1):(uin2);//conditional operator

    printf("The large number:%d",big);

    printf("\n");
    return 0;
}
