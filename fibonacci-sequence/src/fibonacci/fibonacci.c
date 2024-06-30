#include <stdio.h>
#include "fibonacci.h"

void computeFibonacciNumbers(int numberOfFibonacciNumbers){
    int fibonacciNumbers[numberOfFibonacciNumbers];
    if (numberOfFibonacciNumbers == 0){
        return;
    }
    else if (numberOfFibonacciNumbers == 1)
    {
        printf("0\n");
    }
    else if (numberOfFibonacciNumbers == 2)
    {
        printf("0\n");
        printf("1\n");
    }
    
    else
    {
        fibonacciNumbers[0] = 0;
        fibonacciNumbers[1] = 1;

        for (int index = 2; index < numberOfFibonacciNumbers; index++){
            fibonacciNumbers[index] = fibonacciNumbers[index - 1] + fibonacciNumbers[index - 2];
        }
        for (int index = 0; index < numberOfFibonacciNumbers; index++){
            printf("%i\n",fibonacciNumbers[index]);
        }
    }
    return;
    
    
}