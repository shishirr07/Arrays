// The 20 numbers given by the user are the list of the marks obtained by class of 20 students. Write a program to count the Number of students belonging to each the following groups of marks: 0-9, 10-19, 20-29,...90-100
#include <stdio.h>
#define SIZE 20 
#define RANGES 11 
int main() {
    int scores[SIZE];
    int low, high, i;
    int range[RANGES] = {0};

printf("Enter 20 Scores. Please press 'Enter' after each score.");
        for(i = 0; i < SIZE; i++) {
            scanf("%d", &scores[i]);
            ++range[(int)(scores[i]/10)];
        }

    for(i = 0; i < RANGES; i++) {
        low = i * 10;
        if (i == 10) {
            high = 100;
        } 
            else {
            high = low + 9;
        }
        printf(" %d   %d to %d   %d\n", i+1, low, high, range[i]);
    }

    

    



}