﻿
#include <stdio.h>
#include <math.h>  

int main(void)
{//改為輸入本金、利率、年數，印出 歷年的本利和 
    double p;
    double r;
    double y;
    printf("輸入本金: ");
    scanf_s("%lf", &p);
    printf("輸入利率: ");
    scanf_s("%lf", &r);
    printf("輸入年數: ");
    scanf_s("%lf", &y);

    for (int i = 1; i <= y; i++) {

        double amount = p * pow(1.0 + r, i);

        printf("%4u%21.2f\n", i, amount);
    }
}