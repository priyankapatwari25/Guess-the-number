#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num , guess , nguesses = 1;
    srand(time(0));
    num = rand()%100 + 1; // Generates a random number between 1 and 100
    //printf("The number is %d\n",num);
    // keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d" , &guess);
        if(guess>num){
            printf("Lower number please !!\n");
        }
        else if(num > guess ){
            printf("Higher number please !!\n");
        }
        else{
            printf("You guess it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess != num);
    return 0;
}
