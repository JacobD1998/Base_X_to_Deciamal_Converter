#include <stdio.h>

int main(void) {
  int base, digits, decNumber = 0;

  printf("What base do you want to convert to decimal?:\n");
  scanf("%d", &base);

  printf("How many digits in your number?:\n");
  scanf("%d", &digits);

  printf("If your number contains a letter, enter the equivalent " 
    "number. (Enter 10 for A, 11 for B, etc)\n");

  //Create an array
  int number[digits];
  
  //Fill the array
  for (int i = 0; i < digits; i++){
    printf("Enter digit %d: ", i+1);
    scanf("%d", &number[i]);
    if (number[i] >= base){
      printf("Not a valid digit!!");
      i = digits + 1;
    }  
  }

  //Read the array to change decimal output
  int j = 0;
  while (j < digits){
    decNumber += number[j];
    decNumber *= base;
    j++;
  }

  decNumber /= base;

  printf("Your number in base 10 is %d.", decNumber);

}