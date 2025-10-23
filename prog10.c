#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
 char name[50];
 int age;
 float gpa;
 bool isfulltime;
}Student;

void studentdetails(Student student);

int main(){

 Student student1 = {"Spongebob", 30, 2.9, true};
 Student student2 = {"Patrick", 38, 4.6, false};
 Student student3 = {"Squidward", 42, 3.9, true};
 Student student4 = {0};

strcpy (student4.name, "Sandy");
student4.age = 27;
student4.gpa = 4.9;
student4.isfulltime = true;

studentdetails(student1);
studentdetails(student2);
studentdetails(student3);
studentdetails(student4);

    return 0;
}

void studentdetails(Student student){
     printf("NAME:%s\n", student.name);
 printf("AGE:%d\n", student.age);
 printf("GPA:%.2f\n", student.gpa);
 printf("IS FULL TIME:%s\n", (student.isfulltime) ? "Yes":"No");
 printf("\n");
}

