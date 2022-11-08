
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int* rotate_array(int arr[],int n,int k)
{
    static int k_step_rotation[100000];
    //Write your code here without removing the exising code
	//the variable 'arr' contains array of integers of size n and integer k.
	//modified the array 'k_step_rotation' return the output of the program.
    return k_step_rotation;
}


//Backend Code
int main()
{
    int *arr;
    char str[100000];

    int n,k;
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
    scanf("%d",&k);
    int *ans=rotate_array(arr,n,k);
    for (int i = 0; i<n; i++)
    {
        
        printf("%d ",*(ans+i));
    }

    return 0;
}

