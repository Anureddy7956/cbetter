#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter the numbers rows and columns: ");
    scanf("%d %d",&rows,&columns);
    //loop to print hollow rectangle
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(i==1 || i==rows || j==1 || j==columns){
                printf("*");
            }
                else{
                    printf(" ");                        
                }
        }
        printf("\n");
    }
return 0;
}