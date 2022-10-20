
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int first_repeat(int arr[],int n)
{
   
    int repeat_element = -1;
    // Write your code here without removing the existing code
    // the variables arr contains the array of integer  n is the size of an array.
    // modified the variable repeat_element contain the output of the program in integer format..
	return repeat_element;
}


//Backend Code
int main()
{
    int *arr;
    char str[10000];

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
    int ans = first_repeat(arr, n);
    printf("%d", ans);

    return 0;
}

