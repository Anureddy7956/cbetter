#include<stdio.h>
int main()
{
    int matrix[5][5]={
        {1,2,3,6,8},
        {4,5,6,0,7},
        {7,8,9,6,3},
        {3,4,2,8,6},
        {9,4,1,6,9}
    };
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum += matrix[i][i];
    }
    printf("The sum of Diagonal elements is:%d\n",sum);
    return 0;
}