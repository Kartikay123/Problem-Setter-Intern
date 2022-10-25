
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int max_differnce(int arr[],int n)
{
   
    int maximum_index = -1;
    // Write your code here without removing the existing code
    // the variables arr contains the array of integer and n is the size of an array.
    // modified the variable maximum_index contain the output of the program in integer format..
	return maximum_index;
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
    int ans = max_differnce(arr, n);
    printf("%d", ans);

    return 0;
}

