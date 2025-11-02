#include<stdio.h>
#include<ctype.h>
int main(){

char questions[][100] = {"1. what is the square of 20?\n",
                         "2.what is the root of 9?\n",
                         "3. Is the earth flat?\n"};

 char options[][100] = {"A.400\nB.20\nC.1209\nD.124",
                        "A.5\nB.45\nC.83\nD.3",
                        "A.yes\nB.no\nC.maybe\nD.idk"};    
                        
char answerkey[] = {'A','D','B'};      

   int questioncount = sizeof(questions) / sizeof(questions[1]);

   char guess;
   int score = 0;

   printf("\n**WELCOME TO QUIZZ GAME**\n");

   for(int i = 0; i < questioncount; i++){
    printf("%s", questions[i]);
    printf("%s", options[i]);
    printf("\nEnter your choice: ");
    scanf(" %c", &guess);

    guess = toupper(guess);

 if(guess == answerkey[i]){
  printf("CORRECT!!\n");
     score++;
 }else{
    printf("INCOORECT!!\n");
 }
   }
 printf("Your score is %d out of %d\n",score,questioncount);
    return 0;
}