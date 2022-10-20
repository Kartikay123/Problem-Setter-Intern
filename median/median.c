
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


double median_array(int arr1[],int arr2[],int n,int m)
{
    
    double median_value =6;
    
    //Write your code here without removing the exising code
	//the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the double median_value contain the output of the program upto 2 place of decimal.

    return median_value;
}


//Backend Code
int main()
{
    
    int *arr1;
    int *arr2;
    char str1[100];
    char str2[100];
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    int i = 0,j=0;
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(m * sizeof(int));
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
    if (j < m)
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
    double ans = median_array(arr1,arr2,n,m);
    printf("%.2f",ans);

    return 0;
}