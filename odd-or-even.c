//This is the simplest program in c
//program to find check odd or even 

#include<stdio.h>
void main () {
  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  if(num % 2){
    printf("%d is a even number. ", num);
  }else{
    printf("%d is a odd number. ", num);
  }
}



/*Output

--------------------------------
  Enter the number : 2
  2 is a even number 
________________________________
  Enter the number : 3
  3 is a odd number
--------------------------------

  */
