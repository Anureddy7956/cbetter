#include<stdio.h>
int sum(int range);
int main(){
    int result=sum(70);
    printf("%d\n",result);
    return 0;
} 
int sum(int range){
    if(range > 0){
        return range+sum(range-1);
    }
    else
    {
        return 0;
    }
}


