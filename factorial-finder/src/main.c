#include <stdio.h>


long long int factorial(long long int number){

    for (long long int index = number; index > 1; index--){
        number = number * (index - 1);
    }
    return number;

}

int main(){
    long long int number;
    printf("Please enter the number you want evaluated as a factorial: ");
    scanf("%lli", &number);
    printf("The factorial of the number you entered is: %lli\n", factorial(number));

}