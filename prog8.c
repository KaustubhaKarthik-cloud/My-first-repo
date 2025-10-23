#include<stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){


  int choice;
  float balance;

printf("\n***WELCOME TO THE BANK***\n");

do{
   printf("\nselect the options\n");
   printf("1. check balance\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
   printf("4. Exist\n");
   printf("\nEnter your choice(1-4): ");
   scanf("%d", &choice);

   switch(choice){
         case 1:
        checkbalance(balance);
            break;
         case 2:
         balance = balance + deposit();
            break;   
         case 3:
         balance = balance - withdraw(balance);
           break;
        case 4:
        printf("Thank You for using the Bank\n");
          break;
          default:
          printf("Enter no. between (1-4)");
   }
}while(choice != 4);



    return 0;
}

void checkbalance(float balance){
    printf("Your current Balance is: $%.2f\n", balance);
}
float deposit(){
    float amount;
   printf("Enter the amount you want to deposit: $ ");
   scanf("%f", &amount);

   if(amount < 0){
    printf("Invalid Amount\n");
    return 0.0f;
   }else{
    printf("Succesfully deposited $%.2f amount to your account\n", amount);
    return amount;
   }
}
float withdraw(float balance){
 float amount;
 printf("Enter the amount you want to withdraw: $");
 scanf("%f", &amount);

 if(amount < 0){
    printf("Invalid withdraw amount\n");
    return 0.0f;
 }else if(amount > balance){
     printf("\nINSUFFICIENT FUNDS!!.You cant withdraw amount more than your balance. Your balance is %.2f\n", balance);
 } else{
    printf("Succesfully withdrew %.2f\n", amount);
    return amount;
 }
}