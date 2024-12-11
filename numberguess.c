#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){ 

    int guessnum,attempts=0;
    printf("try guessing the number?(only b/w 1 to 100) less than 5 attempts to win ");
    scanf("%d",&guessnum);
    attempts++;
    srand(time(NULL));
    int randomnum = (rand()%100)+1;
    
    while(guessnum!=randomnum&&attempts<=4){

        if(guessnum<randomnum){
            printf("\nthe number is larger ");
            scanf("%d",&guessnum);
            attempts++;

        }

            
        
          else if(guessnum>randomnum){
               printf("the number is smaller ");
               scanf("%d",&guessnum);
               attempts++;
           }

               
               
            
    }
    if(guessnum!=randomnum&&attempts==5)
    printf("too many attempts u lost :( ");
    if(guessnum==randomnum)
    printf("yay u guessed the number right in %d attempts. ",attempts);
    
        

}

