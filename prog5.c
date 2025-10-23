#include<stdio.h>
 int main(){
 
    int rows;
    int columns;
    char symbol = '\0';

    printf("Enter the no. of rows: ");
      scanf("%d", &rows);
     printf("Enter the no. of columns: ");
      scanf("%d", &columns);
     printf("Enter the symbol: ");
     scanf(" %c", &symbol);

     for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf(" %c", symbol);
        }
        printf("\n");
     }
    
      return 0;
 }








