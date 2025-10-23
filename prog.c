#include<stdio.h>
#include <math.h>
int main()
{
  double principal;
  int years;
  double rate;
  int timescompound;
  double total;

printf("COMPOUND INTEREST CALCULATOR\n");

printf("Enter the principal (p): ");
scanf("%lf",&principal);

printf("Enter the interest rate%(r): ");
scanf("%lf",&rate);
rate = rate/100;

printf("Enter the no. of years(y): ");
scanf("%d",&years);

printf("Enter the no. of times compounded in a year(a): ");
scanf("%d",&timescompound);

total = principal * pow(1 + rate/timescompound, timescompound * years) - principal;
printf("compound interest: %lf",total);
return 0;
}