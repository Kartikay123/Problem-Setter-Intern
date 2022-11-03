
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int count_ways(int coins[],int n,int sum)
 {
    int minimum_coins =-1;
    //Write your code here without removing the existing code
    //the variable 'coins' contains array of integers of size n and an integer sum.
    //modified the variable 'minimum_coins' contain the output of the program in integer format.
    return minimum_coins;
 }


//Backend Code
int main()
{
    int *arr;
    char str[100000];

    int n,sum;
    scanf("%d", &n);
    int i = 0;

    arr = (int *)malloc(n * sizeof(int));
    int b[100];

    scanf("%s", str);
    char *token = strtok(str, "[");
    token = strtok(token, "]");
    token = strtok(token, ",");
    if (i < n)
    {
        while (token != NULL)
        {
            char *temp = token;
            int x = atoi(temp);
            *(arr + i) = x;
            token = strtok(NULL,",");
            i++;
        }
    }
    scanf("%d",&sum);
    printf("%d",find_minimum(arr, n,sum));
    return 0;
}