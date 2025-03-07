#include<stdio.h>
#include<ctype.h>// to convert into uppercase

void toupper_case(char str[]){
    int i=0;
    while(str[i]!='\0'){
        str[i]=toupper(str[i]);//convert lower case letters to uppercase letters
        i++;
    }
}
int main(){
    char str[]="welcome to my repository";

    toupper_case(str);//calling the function 

    printf("Uppercase string: %s\n",str);

    return 0;
}
    

