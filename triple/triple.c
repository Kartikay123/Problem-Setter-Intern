
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int triple_sum(int arr[],int n,int k)
{
    
    int value =-1;
    //Write your code here without removing the existing code.
	//the variable 'arr' contains array of integers of size n and k is an integer.
	//modified the variable 'value' contain the output of the program in integer format.
    return value;
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
    int k;
    scanf("%d",&k);
    int ans = triple_sum(arr, n,k);
    printf("%d", ans);

    return 0;
}

