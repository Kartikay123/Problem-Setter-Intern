
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int find_min_diff(int arr[],int n,int k)
{
    int  chocolate_distribution = -1;
	//Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and an integer k.
	//modified the integer variable 'chocolate_distribution' and return it.
	return chocolate_distribution;
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
   	int k;
    scanf("%d",&k);
    int ans=find_min_diff(arr,n,k);
    printf("%d",ans);
    return 0;
}

