
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code
// for(int i=0;i<n;i++)

double knapsack(int weights[],int values[],int n,int W)
{
    
    double maxi_value =12.23;
    //Write your code here without removing the existing code
	//the variable 'weights' and 'values' contains array of integers of size n.
	//modified the double maxi_value containing the output of the program up to 2 places of decimal.
    return maxi_value;
}


//Backend Code
int main()
{
    
    int *arr1;
    int *arr2;
    char str1[100];
    char str2[100];
    int n;
    scanf("%d", &n);
    int i = 0,j=0;
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n* sizeof(int));
    scanf("%s", str1);
    scanf("%s", str2);
    char *token1 = strtok(str1, "[");
    token1 = strtok(token1, "]");
    token1 = strtok(token1, ",");
    if (i < n)
    {
        while (token1 != NULL)
        {
            char *temp = token1;
            int x = atoi(temp);
            *(arr1 + i) = x;
            token1 = strtok(NULL, ",");
            i++;
        }
    }
    

    char *token2 = strtok(str2, "[");
    token2 = strtok(token2, "]");
    token2 = strtok(token2, ",");
    if (j < n)
    {
        while (token2 != NULL)
        {
            char *tem = token2;
            int y= atoi(tem);
            *(arr2 + j) = y;
            token2 = strtok(NULL, ",");
            j++;
        }
    }
    int W;
    scanf("%d", &W);
    double ans = knapsack(arr1,arr2,n,W);
    printf("%.2f",ans);
    return 0;
}