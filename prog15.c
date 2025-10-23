#include<stdio.h>
#include<stdlib.h>

int main(){

int number = 0;
printf("Enter the number of prices: ");
scanf("%d", &number);

float *prices = calloc(number,sizeof(float));

if(prices == NULL){
    printf("Memory location failed!");
    return 1;
}

for(int i = 0; i < number; i++){
    printf("enter the price %d: ", i + 1);
    scanf("%f", &prices[i]);
}

int newnumber = 0;
printf("Enter a new number of prices: ");
scanf("%d",&newnumber);

    float *temp = realloc(prices,newnumber * sizeof(float));

if(temp == NULL){
    printf("Reallocation of memory failed!");
}else{
prices = temp;
temp = NULL;

for(int i = number; i < newnumber; i++){
    printf("enter the price %d: ", i + 1);
    scanf("%f", &prices[i]);
}

for(int i = 0; i < newnumber; i++){
    printf("%.2f ",prices[i]);
}

}

 free(prices);
 prices = NULL;
    return 0;
}