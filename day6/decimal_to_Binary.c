//Print
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n];
    int reminder;
    int i=0;
    while(n){
        reminder=n%2;
        n=n/2;
        arr[i]=reminder;
        i++;
    }
    for(int j=i-1; j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}