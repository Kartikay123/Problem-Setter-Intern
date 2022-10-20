
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int* find_subarray(int arr[],int n,int k)
{
    static int subarray_sum[2];
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and an integer k.
	//modified the array 'subarray_sum' having the subarray with k sum.
    return subarray_sum;
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
    int *ans=find_subarray(arr,n,k);
    for (int i = 0; i<2; i++)
    {
        
        printf("%d ",*(ans+i));
    }

    return 0;
}

