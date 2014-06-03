//
//  farenheitToCelsius.c
//  prework
//
//  Created by Sean Reed on 6/2/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

#include <stdio.h>
// Print table of Farenheit to Celsius from -40F to 100F

double fToC(double f); // function to Convert farenheit to Celsius Temp
int main(int argc, const char * argv[])
{
    int farenheit;
    int const MINTEMP = 0;
    int const MAXTEMP = 212;

    printf("Farenheit Temp, Celsius Temp");
    
// Print table of Farenheit to Celsius from -40F to 100F
    for (farenheit =-40; farenheit <=212; farenheit++) {
        printf("Farenheit temp is %d and Celsius temp is %3.1f\n",farenheit,fToC((double)farenheit));
    }
    
// Print table of Farenheit to Celsius from 100F to 40F
    for (farenheit =100; farenheit <=40; farenheit--) {
        printf("Farenheit temp is %d and Celsius temp is %3.1f\n",farenheit,fToC((double)farenheit));
    }
    
// Print table of Farenheit to Celsius from MINTEMP to MAXTEMP
    for (farenheit =MINTEMP; farenheit <=MAXTEMP; farenheit++) {
        printf("Farenheit temp is %d and Celsius temp is %3.1f\n",farenheit,fToC((double)farenheit));
    }
    
    

    return 0;
}

// farenheit to celsius temperature converter
double fToC(double farenheit)
{
    return 5.0/9.0*(farenheit-32);
}