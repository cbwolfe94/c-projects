/* 
Program for a credit card validator. A command line arugment specifies the 
credit card number to be checked. This program assumes that the last digit of the 
credit card number is a check digit.
 */



#include <stdio.h>
#include <string.h>
#include "validator.h"

int main(int argc, char *argv[]){
    int size = strlen(argv[1]);
    int creditCardNumber[size];

    for (int index = 0; index < size; index++){
        creditCardNumber[index] = argv[1][index] - '0';
    }
    
    isCreditCardValid(creditCardNumber, size);
    return 0;
}