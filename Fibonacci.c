//This is the simplest program in c
//Program to find Fibonacci series

#include<stdio.h>
void main () {
  int num, f, f0, f1, i=0;
  printf("Enter the number : ");
  scanf("%d", &num);
  f0 = 0;
  f1 = 1;
  i = 0;
  printf("FIBONACCI SEQUENCE OF THE FIRST %d TERMS \n", f0);
  while(i < num) {
    printf("%d\t", f0);
    f = f0 + f1;
    f0 = f1;
    f1 = f;
    i = i + 1;
  }
}


/*Output

---------------------------
  Enter the number : 5
  FIBONACCI SEQUENCE OF THE FIRST 5 TERMS
  0 1 1 2 3
---------------------------
