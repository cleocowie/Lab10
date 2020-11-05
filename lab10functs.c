// *** lab10functs.c*** //
/** labXX.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: 
* Purpose: 
* ===========================================================
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


bool isFirstHalfAlpha(char letter) {
    bool firstHalf;
    if ((letter<78) && (letter>64)) {
        firstHalf=true; 
    
    }
    if ((letter>96) && (letter<110)) {
        firstHalf=true;
    }
    
    else {
        firstHalf=false;
    }


    return firstHalf;
}
    



int typeOfChar(char letter2) {

    int num=tolower(letter2);
    int vowel;
    int alphabet=isalpha(letter2);

    
    switch (alphabet) {
        case 0:
            vowel=-1;
            break;

        default: 

            switch (num) {
            case 'a': 
            vowel=0;
            break;

            case 'e':
            vowel=0;
            break;

            case 'i':
            vowel=0;
            break;

            case 'o':
            vowel=0;
            break;

            case 'u':
            vowel=0;
            break;

            default: 
            vowel=1;
    }



    }
    return vowel;
}

bool isMagicChar(char letter3) {
    bool value;
    
    switch (letter3) {
        case '@':
            value=true;
            break;

        default:
            value=false;
            break;
    }
    return value;
}





