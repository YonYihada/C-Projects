#include<stdio.h>
int main() { //signed by zlq-ucb - school project
    //calculating time spent based on time in and time out
    //inputs
    char v;
    int hourIn, minuteIn, hourOut, minuteOut, totalTimeSpent;
    //calculations
    float totalMinIn, totalMinOut, minutesSpent, hoursSpent, timeSpent, totalHours;
    //output
    float fare;

    //difference in price depending on vehicle type
    const float
    carFirstRate = 0, carSecondRate = 1.50,
    truckFirstRate = 1, truckSecondRate = 2.30,
    busFirstRate = 2, busSecondRate = 2.70;

    //inputs - C = car, B = bus, T = truck
    printf("C = car, B = bus, T = truck\n");
    printf("Type of Vehicle? ");
    scanf("%s", &v);
    printf("Hour vehicle entered lot (0-24): ");
    scanf("%d", &hourIn);
    printf("Minute vehicle entered lot (0-60): ");
    scanf("%d", &minuteIn);
    printf("Hour vehicle left lot (0-24): ");
    scanf("%d", &hourOut);
    printf("Minute vehicle left lot (0-60): ");
    scanf("%d", &minuteOut);

    //convert hours to minutes and add minutes
    totalMinIn = (hourIn * 60) + minuteIn;
    totalMinOut = (hourOut * 60) + minuteOut;

    //calculate how much minutes spent then convert to hours
    totalTimeSpent = totalMinOut - totalMinIn; //int
    timeSpent = totalMinOut - totalMinIn; //float (idk how else to do this)
    totalHours = timeSpent/60;
    hoursSpent = totalTimeSpent/60;
    minutesSpent = totalTimeSpent%60;

    switch(v) {
        case 'c':
        case 'C':
            printf("you drive a Car!\n");
            if (totalHours <= 3) {
                fare = totalHours * carFirstRate;
            } else {
                fare = totalHours * carSecondRate;
            }
            break;
        case 'b':
        case 'B':
            printf("you drive a Bus!\n");
            if (totalHours <= 2) {
                fare = totalHours * busFirstRate;
            } else {
                fare = totalHours * busSecondRate;
            }
            break;
        case 't':
        case 'T':
            printf("you drive a Truck!\n");
            if (totalHours <= 1) {
                fare = totalHours * truckFirstRate;
            } else {
                fare = totalHours * truckSecondRate;
            }
            break;
    }
    printf("-------------------------------------\n");
    printf("TIME-IN: \t\t %d : %02d\n", hourIn, minuteIn);
    printf("TIME-OUT: \t\t %d : %02d\n", hourOut, minuteOut);
    printf("\t\t\t ------------\n");
    printf("PARKING TIME: \t\t %.0f : %02.0f\n", hoursSpent, minutesSpent);
    printf("ROUNDED TOTAL: \t\t %.2f hour(s)\n", totalHours); //tbh i got no clue what this actually is supposed to mean
    printf("\t\t\t ------------\n");
    printf("TOTAL CHARGE: \t\t $%.2f\n", fare);
    printf("-------------------------------------\n");
}
