#include<stdio.h>
void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
        printf("\n ");
    }  
}
int main(){
    int my_array[]={ 78 ,56 ,34 ,26 ,78 ,90 ,76 };
    int size = sizeof(my_array)/sizeof(my_array[0]);
    print_array(my_array,size);
    return 0;
}
