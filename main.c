#include<time.h>
#include <stdlib.h>
#include<stdio.h>
/*
I will store the food price options in an array.
Then i will ask for tax and tip amount.
After i will do some calculations to get the tax and tip amount then return the total bill amount to the user.
*/
int main() {
  float costs[] = {9.95, 4.55, 13.25, 22.35};
  srand(time(NULL));
  int r = rand() % 4;
  float meal = costs[r];
  float tax,tip,total;
  printf("Enter the tax amount:");
  scanf("%f", &tax);
  printf("Enter the tip amount:");
  scanf("%f", &tip);
  printf("Meal cost: $%.2f\n", meal);
  printf("Tax amount: $%.2f\n", (tax/100) * meal);
  printf("Tip amount: $%.2f\n", (tip/100) * meal);
  total = meal + (tax/100) * meal + (tip/100) * meal;
  printf("Total: %.2f\n", total);
  return 0;
}