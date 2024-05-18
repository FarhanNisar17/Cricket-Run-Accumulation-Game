
 #include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
        printf("\n");
       printf("Guess  what you think will happen on the next ball!\n");
       printf("----------------------------\n");
       int  b;
       printf("Enter '1' to start and '2' to exit:\n");
       scanf("%d", &b);

   if (b==1){ 
   
    int number, guess, runs;
    int sum =0;
    srand(time(0));
    number= rand()%6+1;


    printf("Guess the outcome of ball? \n");
        scanf("%d", &guess);

       do{ 
                
       if(guess!=number)
       {
       printf("You guessed wrong!, it was %d \n", number);
       printf("Guess Again:\n");
       sum += number ;
       number= rand()%6+1;
       scanf("%d", &guess);
       
       }
       if(guess == number){
              printf("You got it! \n");
               printf("Accumulated runs are : %d", sum);
       }
         }while (guess != number);
            } 
            else if (b=2){
      printf("Thank You for your time");
                }  
return 0;
 } 
