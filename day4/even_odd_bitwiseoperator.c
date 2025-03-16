#include<stdio.h>
void evenodd(int N){
    printf("Enter the number: ",N);
    scanf("%d",&N);
    if(N&1){
        printf("odd\n");
    }
    else {
        printf("even\n");
    }
}
int main(){
    int N;
    evenodd(N);
    return 0;
}