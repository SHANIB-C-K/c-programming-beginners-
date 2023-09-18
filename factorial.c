//This is the simplest program in c
//program to find factorial of a given number 

#include <stdio.h>
int factorial(int i){
    if(i<=1){
        return 1;
    }else{
        return i * factorial(i-1);
    }
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    
    return 0;
}



/* Output

---------------------------------
  Enter the number : 5
  Factorial of 5 is 120
---------------------------------

 */
