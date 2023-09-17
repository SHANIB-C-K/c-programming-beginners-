//This is the simplest program in c 
//Program to find sum of digit of a number 

#include<stdio.h>
void main () {
  int num, rem, sum = 0;
  printf("Enter the numbers : ");
  scanf("%d", &num);
  while(num != 0) {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }
  printf("Sum of digit = %d", sum);
}


/*Output

--------------------
  Enter the numbers : 12345
  Sum of digit = 15
--------------------

*/
