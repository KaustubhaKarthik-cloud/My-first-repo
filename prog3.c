#include<stdio.h>
int main(){

char temp;
double celsius;
double ferhanite;

printf("TEMPERATURE CONVERSION CALCULATOR\n");
printf("C. celsius to ferhanite\n");
printf("F. ferhanite to celsius\n");

printf("Is the temp in celsius(C) or ferhanite(F): ");
scanf(" %c", & temp);


if(temp == 'C'){
    printf("Enter the temp in celsius: ");
    scanf("%lf", &celsius);
    ferhanite = (celsius * 9/5) + 32;
    printf("%.2lf celsius is equal to %.2lf ferhanite\n",celsius,ferhanite);
}else if(temp == 'F'){
    printf("Enter the temp in ferhanite: ");
    scanf("%lf", &ferhanite);
    celsius = (ferhanite - 32) * 5/9;
     printf("%.2lf ferhanite is equal to %.2lf celsius\n",ferhanite,celsius);
}else{
    printf("Inavlid input\n");
}


    return 0;
}