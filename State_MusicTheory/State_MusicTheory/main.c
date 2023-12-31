//
//  main.c
//  State_MusicTheory
//
//  Created by George Peshkov on 7/29/23.
//

#include <stdio.h>

int main() {
    // variables to store chars used for musical notes.
    /* The reason for the dummy vari-
    able is that the user is expected to separate the two note names by a ‘‘carriage return’’ (or
    ‘‘enter’’) character, or even a blank space. As we are scanning characters, these have to be
    accounted for, so the dummy variable is used as a placeholder.
     */
    char note1, note2, dummy;
    // pitch classes, interval
    int pc1, pc2, interval;
    printf("Please enter two natural notes.\nFirst note: ");
    scanf("%c%c", &note1, &dummy);
    printf("Second note: ");
    scanf("%c",&note2);
    // translating from note to pitch class
    switch(note1){
        case 'C' : case 'c':
            pc1 = 0;
            break;
        case 'D' : case 'd':
            pc1 = 2;
            break;
        case 'E': case 'e':
            pc1 = 4;
            break;
        case 'F' : case 'f':
            pc1 = 5;
            break;
        case 'G' : case 'g':
            pc1 = 7;
            break;
        case 'A' : case 'a':
            pc1 = 9;
            break;
        case 'B' : case 'b':
            pc1 = 11;
            break;
        default:
            printf("error: %c is not a natural note\n", note1); return 1;
    }
    switch(note2){
        case 'C' : case 'c':
            pc2 = 0;
            break;
        case 'D' : case 'd':
            pc2 = 2;
            break;
        case 'E' : case 'e':
            pc2 = 4;
            break;
        case 'F' : case 'f':
            pc2 = 5;
            break;
        case 'G' : case 'g':
            pc2 = 7;
            break;
        case 'A' : case 'a':
            pc2 = 9;
            break;
        case 'B' : case 'b':
            pc2 = 11;
            break;
        default:
            printf("error: %c is not a natural note\n", note2); return 1;
    }
    // calculate the interval and keep it modulo 12
    interval = pc2 - pc1;
    if(interval < 0) interval += 12;
    else if(interval > 11) interval -= 12;
    /* print the number of semitones. the special case of unison (0) has to be handled correctly, so we use the conditional operator for this. */
    printf("%d semitones up or %d semitones down\n", interval, interval ? 12-interval : 0);
    // now we print out the interval name
    switch(interval){
        case 1:
            printf("minor 2nd or major 7th down\n");
            break;
        case 2:
            printf("major 2nd up or minor 7th down\n");
            break;
        case 3:
            printf("minor 3rd up or major 6th down\n");
            break;
        case 4:
            printf("major 3rd up or minor 6th down\n");
            break;
        case 5:
            printf("perfect 4th up or perfect 5th down\n");
            break;
        case 6:
            printf("augmented 4th \n");
            break;
        case 7:
            printf("perfect 5th up or perfect 4th down\n");
            break;
        case 8:
            printf("minor 6th up or major 3rd down\n");
            break;
        case 9:
            printf("major 6th up or minor 3rd down\n");
            break;
        case 10:
            printf("minor 7th up or major 2nd down\n");
            break;
        case 11:
            printf("major 7th up or minor 2nd down\n");
            break;
        default:
            printf("unison \n");
    }
    return 0;
}
