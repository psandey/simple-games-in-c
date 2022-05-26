// ------> Random Number Generator Game 🎰; 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,ng=1;
    srand(time(0));
    number=rand()%151+1;
    
    do
    {
        printf("\nGuess the number between 1 to 151 \n");
        scanf("%d",&guess);

        if(guess>number)
        printf("Lower Your Guess\n");

        else if(guess<number)
        printf("Guess more than last input\n");
        
        else
        printf("Booyah!! You got it \nYou took %d attempts",ng);
        
        ng++;
    
    } while (guess!=number);
    
    return 0;
}