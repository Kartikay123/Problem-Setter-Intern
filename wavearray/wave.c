
// Starter Code
#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code


int* wave_array(int arr[],int n)
{
    static int lex_smallarray[100000];
    //Write your code here without removing the exising code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'lex_smallarray' contains the output of the program.
    return lex_smallarray;
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
   
    int *ans=wave_array(arr,n);
    for (int i = 0; i<n; i++)
    {
        
        printf("%d ",*(ans+i));
    }

    return 0;
}

