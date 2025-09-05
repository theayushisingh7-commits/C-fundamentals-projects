#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,random;
    int score=0;
    srand(time(NULL));
    printf("Hey👋👋\n");
    printf("🤗🤗 Welcome to the my Numbers Guessing game!!! 🤗🤗\n");
    random = rand()%100+1;
    do{
        printf("Please enter your Guess number between { 1 to 100 }:\n");
        scanf("%d",&guess);
        score++;
        if(guess<random){
            printf(" larger number\n");
        }
        else if(guess>random){
            printf("Guess a smaller number\n");
        }
        else{
            printf("You are successfully guessed the number %d\n",score);
        }
    }while(guess!=random);
    printf("Thanks for playing\n");

}