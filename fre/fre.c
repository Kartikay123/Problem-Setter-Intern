
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int frequency(int arr[],int n,int k)
{
    
    int max_frequency =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and k is an integer.
	//modified the variable 'max_frequency' containing program's output in integer format.
    return max_frequency;
}


//Backend Code
int main()
{
    int *arr;
    char str[100];

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
    int k;
    scanf("%d",&k);
    int ans = frequency(arr, n,k);
    printf("%d", ans);

    return 0;
}

