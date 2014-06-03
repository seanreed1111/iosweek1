//
//  fizzbuzz-final.c
//  prework
//
//  Created by Sean Reed on 6/2/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int number = 1;
    
    while (number <= 100) {
        if (number % 15 == 0){
            printf("%s\n","fizzbuzz");
        }
        else if (number % 3 == 0){
            printf("%s\n","fizz");
        }
        else if (number % 5 == 0){
            printf("%s\n","buzz");
            
        }
        else {
            printf("%d\n",number);
        }
        
        
        number++;
    }
    
    return 0;
}
