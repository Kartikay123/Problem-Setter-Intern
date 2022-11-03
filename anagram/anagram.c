#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include <stdio.h>
#include <string.h>
// Starter Code
bool isAnagram(char str1[10000], char str2[10000])
{
    bool check_string = true;
    // Write your code here without removing the existing code
    // the variable 'str1' and 'str2' contains array of character.
    // modified the variable 'check_string ' contain the output of the program in boolean format.
    return check_string;
}

// Backend Code
int main()
{
    char str1[10000], str2[10000];
    scanf("%s", &str1);
    scanf("%s", &str2);
    if (isAnagram(str1, str2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}