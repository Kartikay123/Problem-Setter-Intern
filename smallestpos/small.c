
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code

int positive_value(int arr[],int n)
{
    int smallest_value =-1;
    //Write your code here without removing the existing code.
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'smallest_value' contain the output of the program in integer format.
    return smallest_value;
}


//Backend Code
//Backend Code
int main()
{
    int *arr;
    char str[1000000];

    int n;
    scanf("%d", &n);
    int i = 0;

    arr = (int *)malloc(n * sizeof(int));

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
    int ans = positive_value(arr, n);
    printf("%d", ans);

    return 0;
}

