#include <stdio.h>
#include "validator.h"

//Main driver function for validation of the credit card that follows the Luhn Algorithm
void isCreditCardValid(int* creditCardNumber, int size){
    int newArray[size - 1];
    int checksum = 0;
    for (int index = 0; index < size - 1; index++){
        newArray[index] = creditCardNumber[size - 2 - index];
    }
    for (int index = 0; index < size - 1; index++){
        if (index % 2 == 0){
            newArray[index] = 2 * newArray[index];
            if (newArray[index] > 9){
                 newArray[index] = newArray[index] - 9;
            }
        }
        checksum += newArray[index];
    }

    if (10 - (checksum % 10) == creditCardNumber[size - 1]){
        printf("Valid credit card number.\n");
    }
    else {
        printf("Invalid credit card number.\n");
    }
}