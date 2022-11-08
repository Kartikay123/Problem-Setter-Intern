#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include <stdio.h>
#include <string.h>
// Starter Code
bool isPalindrome(char str1[])
{
    bool check_string = true;
    // Write your code here without removing the existing code.
    // the variable 'str1' contains the string as input.
    // modified the variable 'check_string ' contain the output of the program in boolean format.
    return check_string;
}

// Backend Code
int main()
{
    char str1[10000];
    scanf("%s", &str1);
    
    if (isPalindrome(str1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}