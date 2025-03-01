#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,attempts,guess=0;
    srand(time(0));

    number=rand()%100+1;

    printf("--^_^--Hello! Welcome to Number Guessing Game--^_^--\n");
    printf("^_^ I have a random number from 1 to 100 Try to guess it ^_^\n");

    do{
        printf("Enter the number which you have guessed: ");
        scanf("%d",&guess);
        attempts++;

        if(guess>number){
            printf("The number that you have entered is Too high Try again!! :( \n");
        }
        else if(guess<number){
            printf("The number which you have entered is Too low Try again!! :( \n");            
        }
        else{
            printf("--- :) Hooray,you did it you guessed the correct number %d---\n",number);
            printf("It took you %d attempts to guess correctly :).\n",attempts);
            }
        } while(guess!=number);
        return 0;
}