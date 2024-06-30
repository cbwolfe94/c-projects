#include <stdio.h>
#include "fibonacci.h"

int numberOfFibonacciNumbers;
int main(){
   
    printf("Enter the number of Fibonacci numbers your want calculated: ");
    scanf("%i", &numberOfFibonacciNumbers);
    computeFibonacciNumbers(numberOfFibonacciNumbers);
    return 0;
}