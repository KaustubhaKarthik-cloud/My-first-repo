#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

int number = 0;
printf("Enter the number of players: ");
scanf("%d", &number);

int *scores = calloc(number,sizeof(int));

if(scores == NULL){
    printf("Memory location failed!");
    return 1;
}

for(int i = 0; i < number; i++){
    printf("enter the score %d: ", i + 1);
    scanf(" %d", &scores[i]);
}

for(int i = 0; i < number; i++){
    printf("%d ",scores[i]);
}


 free(scores);
 scores = NULL;
    return 0;
}