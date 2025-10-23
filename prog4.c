#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void details(char name[], int age);
bool agecheck(int age); 

int main(){
char name[100] = "";
int age;

printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

printf("Enter your age: ");
scanf("%d", &age);
  
details(name,age);
agecheck(age);
return 0;
}

void details(char name[], int age){
    printf("Hello %s\n", name);
    printf("you are %d years old\n", age);
   if(agecheck(age)){
      printf("you are old enough to work here\n");
  }else{
    printf("you need to be 18 lil bro\n");
  }
}
bool agecheck(int age){
   
    return age >= 18;
}