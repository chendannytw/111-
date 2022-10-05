// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

int main(void)
{//�אּ��J�����B�Q�v�B�~�ơA�L�X ���~�����Q�M 
    double principal; // starting principal
    double rate; // annual interest rate
    int year;
    printf("�п�J����:");
    scanf_s("%lf", &principal);
    printf("�п�J�Q�v:");
    scanf_s("%lf", &rate);
    printf("�п�J�~��:");
    scanf_s("%d", &year);
    // output table column heads
    printf("Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int count=0; count <= year; ++count) {

        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, count);

        // output one table row
        printf("%4u%21.2f\n", count, amount);
    }
}