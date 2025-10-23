#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

int number = 0;
printf("Enter the number of grades: ");
scanf("%d", &number);

char *grades = malloc(number * sizeof(char));

if(grades == NULL){
    printf("Memory location failed!");
    return 1;
}

for(int i = 0; i < number; i++){
    printf("enter the grade %d: ", i + 1);
    scanf(" %c", &grades[i]);
    grades[i] = toupper(grades[i]);
}

for(int i = 0; i < number; i++){
    printf("%c ",grades[i]);
}


 free(grades);
 grades = NULL;
    return 0;
}