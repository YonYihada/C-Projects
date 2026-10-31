#include<stdio.h>
int inputArray(int input ,int array[], int *count);
//i think this is how a database works

int main() {
    int array[10]; //capacity of 10 numbers
    int count = 0; //current amount of numbers in array
    int input;

    while(1) {

        printf("\nenter number into database: ");
        scanf("%d", &input);

        if(input == 999){ //secret password to reveal array and then end loop
            printf("\ncurrent values in the database:");
            for(int i = 0; i < count; i++){
                printf("\n%d", array[i]);
            }
            break;
        } else {
            if (count < 10) { //check if array is full
                inputArray(input, array, &count);
                printf("inputted %d into slot no.%d", array[count-1], count);
            }
        }
    }
}

int inputArray(int input ,int array[], int *count)
{
    array[*count] = input; //adds input to count(0) pos in array
    (*count)++; //increments count by 1

    //from what i understand the asterisk (*) is used to retrieve a value outside of the function
}
