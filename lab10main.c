// *** lab10main.c *** //
/** labXX.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: 
* Purpose: 
* ===========================================================
*/

#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include "lab10functs.h"


int main () {

    char letter,letter2,letter3;
    scanf("%c %c %c",&letter, &letter2, &letter3);

    printf("Enter a single character to pass to isFirstHalfAlpha():\n");
    printf("%c\n",letter);
    
    if (isFirstHalfAlpha(letter)==true) {
        printf("A %c is in the first half of the alphabet.\n", letter);
    }
    
    else {
        printf("A %c is NOT in the first half of the alphabet.\n",letter);
    }

    printf("Enter a single character to pass to typeOfChar():\n");
    printf("%c\n",letter2);

        switch (typeOfChar(letter2)) {
            case 0:
                printf("A %c is a vowel.\n",letter2);
                break;
            case 1:
                printf("A %c is a consonant.\n",letter2);
                break;
            default:
                printf("A %c is neither a vowel nor a consonant.\n",letter2);
                break;


        }

    printf("Enter a single character to pass to isMagicChar():\n");
    printf("%c\n",letter3);

    if (isMagicChar(letter3)==true) {
        printf("A %c is the magic character @.\n", letter3);
    }

    else {
        printf("A %c is NOT the magic character @.\n", letter3);
    }
    
  return 0;
}












