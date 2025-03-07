#include<stdio.h>

char uppercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch-'a'+'A';
    }
    return ch;
}
int main(){
    char input;
    printf("Enter the lowercase letter: ");
    scanf("%c",&input);
    
    char result = uppercase(input);//calling the function

    if(result!=input)
    {
        printf("Upper case letter:%c\n",result);
    }
    else
    {
        printf("Invaild input \n");
    }
    return 0;
}