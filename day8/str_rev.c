//Printing the alphabets in a reverse order by using string reverse function
#include<stdio.h>
int main(){
    char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char temp;
    int length=0;

    while(str[length]!='\0')
    {
        length++;
    }
    printf("The length of the string is:%d\n",length);

    for(int i=0; i<(length-1)/2 ;i++)
    {
        temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
    printf("String is:%s\n",str);
    return 0;
}