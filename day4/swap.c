#include<stdio.h>
void ptr_swap(int *a,int *b){
    int temp = *a;//swaping the values
    *a = *b;
    *b = temp;
}
int main(){
    int x=66913,y=97400;
    ptr_swap(&x,&y);//function call
    printf("Swaped elements\n");
    printf("x=%d \n y=%d\n",*(&x),*(&y)); 
    return 0;
}