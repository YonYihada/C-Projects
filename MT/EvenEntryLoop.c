//loops till 999 is inputted
#include<stdio.h>
#define SENTINEL 999
int main() {
    int i;
    printf("Input 999 to stop program.\n");
    while(1) {
        printf("Input an even number: ");
        scanf("%d", &i);
        if(i == SENTINEL){
            break;
        }

        if(i % 2 == 0){
            printf("Good Job! \n");
        } else {
            printf("[ERROR] - Number is not even!\n");
        }
    }
}
