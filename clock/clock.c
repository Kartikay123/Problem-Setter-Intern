
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code

double calculate_degree(int hours, int minutes)
{

    double angle = 6.4566;
    // Write your code here without removing the existing code
    // 'hours' and 'minutes' are input variables in integer format.
    // modified the double 'angle' contain the output of the program.
    return angle;
}

// Backend Code
int main()
{
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
   
    double ans = calculate_degree(n, m);
    printf("%.5f", ans);

    return 0;
}