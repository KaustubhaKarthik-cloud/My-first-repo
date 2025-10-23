#include<stdio.h>
#include<string.h>
int main()
{
int choice;
float kilograms;
float pounds;
 printf("WEIGHT CONVERSITION CALCULATOR\n");
 printf("1. kilograms to pounds\n");
 printf("2.pounds to kilograms\n");
 printf("Enter ur choice (1 or 2):\n ");
 scanf("%d",& choice);

 if(choice == 1){
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);
    pounds = kilograms * 2.20462;
    printf("%.2f kilograms is equal to %.2f pounds\n",kilograms,pounds);
 }else if(choice == 2){
    printf("Enter the weight in pounds: ");
    scanf("%f",&pounds);
    kilograms = pounds/2.20462;
    printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilograms);  
 }else{
    printf("Inavalid input.");
 }
 if(choice == 1 && kilograms >= 100){
    printf("you are obese");
 }else if(kilograms >= 50 && kilograms < 100){
    printf("you are ok la");
 }else if(kilograms >= 0 && kilograms < 50){
    printf("YOU SKINNY GUY EAT SOMETHING!!");
 }
return 0;
}