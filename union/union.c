
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int union_size(int arr1[],int arr2[],int n,int m)
{
    
    int resultant_size =-1;
    //Write your code here without removing the existing code.
	//the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the resultant_size contain the output of the program in integer format.
    return resultant_size;
}


//Backend Code
int main()
{
    
    int *arr1;
    int *arr2;
    char str1[1000000];
    char str2[1000000];
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
    int ans = union_size(arr1,arr2,n,m);
    printf("%d",ans);

    return 0;
}