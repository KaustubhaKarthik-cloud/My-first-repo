#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int getuserchoice();
int getcomputerchoice();
void checkwinner(int userchoice, int computerchoice);

int main(){


srand(time(NULL));

printf("WELCOME TO *** ROCK PAPER SCISSOR *** GAME!!\n");
     Sleep(1000);
     printf("LETS GET STARTED!!\n");
    int userchoice =  getuserchoice();
int computerchoice = getcomputerchoice();

         switch(userchoice){

         case 1:
            printf("You have choosen ROCK\n");
            break;
        case 2:
           printf("You have choosen PAPER\n");
           break;
        case 3:
            printf("You have choosen SCISSOR\n");
            break;
         }

        switch(computerchoice){

         case 1:
            printf("Computer has choosen ROCK\n");
            break;
        case 2:
           printf("Computer has choosen PAPER\n");
           break;
        case 3:
            printf("Computer has choosen SCISSOR\n");
            break;
         }
              checkwinner(userchoice, computerchoice);
    return 0;
}


int getuserchoice(){
     return (rand() % 3) + 1;
}
int getcomputerchoice(){
       int choice;
     do{
      printf("choose an option\n");
      printf("1.ROCK\n");
     printf("2.PAPER\n");
     printf("3.SCISSOR\n");
        printf("Enter an option(1-3): ");
        scanf("%d", &choice);
     }while(choice < 1 || choice > 3);

return choice;
}
void checkwinner(int userchoice, int computerchoice){
     if(userchoice == 1 && computerchoice == 3 || userchoice == 2 && computerchoice == 1 || userchoice == 3 && computerchoice == 2){
       printf("YOU GOT LUCKY LIL BRO\n");
     }else{
        printf("HAHAHA IMAGINE LOSING TO A PROGRAM BROOO\n");
     }
      
}



