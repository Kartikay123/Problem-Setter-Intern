
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int major_element(int arr[],int n)
 {
    int maximum_times =-1;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n.
    //modified the variable 'maximum_times' contain the output of the program in integer format.
    return maximum_times;
 }


//Backend Code
int main()
{
    int *arr;
    char str[100000];

    int n;
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
    printf("%d",major_element(arr, n));
    return 0;
}