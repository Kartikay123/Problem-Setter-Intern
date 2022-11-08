#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code
int  super_palindrome(char s1[100000],char s2[100000])
{
    int  super_palindrome_number= -1;
    //Write your code here without removing the existing code.
	//the variable 'str1' and 'str2' contains array of character.
	//modified the variable 'super_palindrome_number' contain the output of the program in expression.
    return super_palindrome_number ;
}


//Backend Code
int main()
{
    char str1[100000],str2[100000];
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]%*c",str2);
    int ans= super_palindrome(str1,str2);
    printf("%d",ans);
 
    return 0;
}