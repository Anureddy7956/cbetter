#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main(){
    int(*operation)(int,int);
    int choice, a,b;
    printf("Choose operation:\n 1.Addition:\n 2.Subration:\n");
    scanf("%d",&choice);
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    if (choice==1){
        operation=add;
    }
    else if(choice==2){
        operation=sub;
    }
    else{
        printf("Invalid choice");
        return 1;
    }
    printf("Result=%d\n",operation(a,b));

}
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}