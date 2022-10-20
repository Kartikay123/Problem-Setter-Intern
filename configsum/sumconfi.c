
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


long long  max_sum(int arr[],int n)
{
    long long  maxi_value =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'maxi_value' contain the output of the program in integer format.
    return maxi_value;
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
    long long ans = max_sum(arr, n);
    printf("%lld", ans);

    return 0;
}

