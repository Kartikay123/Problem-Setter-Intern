
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int rangeSum(int arr[],int n,int lower,int upper)
{
    
    int count_sum =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and lower and upper is an integer.
	//modified the variable 'count_sum' contain the output of the program in integer format.
    return count_sum;
}


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
    int k1,k2;
    scanf("%d",&k1);
    scanf("%d",&k2);
    int ans = rangeSum(arr,n,k1,k2);
    printf("%d", ans);

    return 0;
}

