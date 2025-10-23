#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main(){

srand(time(0));

int guess = 0;
int tries = 0;
int min = 1;
int max = 100;
int answer = (rand() % (max - min + 1)) + min;

printf("*** NUMBER GUESSING GAME ***\n");
Sleep(1000);
printf("LETS GET STARTED\n");
do{
  printf("Guess a number between %d - %d:",min,max);
  scanf("%d", &guess);
  tries++;
   if(guess < answer){
    printf("TOO LOW!\n");
 }else if(guess > answer){
    printf("TOO HIGH!\n");
 }else{
    printf("CORRECT ANSWER BRO!!\n");
 }
}while(guess != answer);

     
printf("The answer is %d\n", answer);
printf("It took you %d tries\n", tries);
if(tries > 5){
    printf("Bro's IQ is TOO LOW, if it were WI-FI,you'd never get a connection\n");
}else{
    printf("DAMN YOU AT ASIAN LEVEL..FUYIOOH\n");
}

   return 0;

}