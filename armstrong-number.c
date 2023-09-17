//This is a simplest program in c
//Program to find the Armstrong number in c

#include<stdio.h>
void main () {
  int num, num1, rem, arm;
  printf("Enter the number : ");
  scanf("%d", &num);
  num1 = num;
  while (num1 != 0) {
    rem = num1 % 10;
    arm += rem * rem * rem;
    num1 /= 10;
  }
  if (arm == num) {
    printf("%d is an Armstrong number.", num);
  }else {
    printf("%d is not a Armstrong number. ", num);
}


/*Output

------------------------------
  Enter the number : 1
  1 is an Armstrong number.
______________________________
  Enter the number : 5 
  5 is not a Armstrong number.
------------------------------

  */
