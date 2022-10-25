
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code

int maximum_profit(int prices[],int n)
{
    int maxi_value =-1;
    //Write your code here without removing the existing code.
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
    int t=n-1;
    int i = 0;

    arr = (int *)malloc(t * sizeof(int));
    scanf("%s", str);
    char *token = strtok(str, "[");
    token = strtok(token, "]");
    token = strtok(token, ",");
    if (i < t)
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
    int ans = maximum_profit(arr, n);
    printf("%d", ans);

    return 0;
}