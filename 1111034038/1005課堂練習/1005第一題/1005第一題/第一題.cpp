// Fig. 3.10: fig03_10.c
// Analysis of examination results 
#include <stdio.h>

// function main begins program execution 
int main(void)
{//��J-1�ᰱ���J��ơA�åB����~�Z �A�q�L��v�j��ε���80% �A�L�X"����!" 
   // initialize variables in definitions 
    unsigned int passes = 0; // number of passes   
    unsigned int failures = 0; // number of failures 
    unsigned int student = 0; // student counter
    unsigned int jump = 0;
    float bonus = 0;
    int result; // one exam result 

    // process 10 students using counter-controlled loop 
    while (jump==0) {

        // prompt user for input and obtain value from user 
        printf("Enter result ( 1=pass,2=fail,-1=End): ");
        scanf_s("%d", &result);

        if (result == -1)
            jump++;
        // if result 1, increment passes 
        if (result == 1) {
            passes++;
            student++;
        }
        // end if 
        if (result == 2) { // otherwise, increment failures 
            failures++;
            student++;
        }

        // end else 
        // increment student counter  
    } // end while 

    // termination phase; display number of passes and failures 
    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);
    bonus = float(passes) / student ;
    printf("�q�L�v %.2f%%\n", bonus*100);
    // if more than eight students passed, print "Bonus to instructor!" 
    if (bonus > 80) {
        puts("����!");
    } // end if 
} // end function main 