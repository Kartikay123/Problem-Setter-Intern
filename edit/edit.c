#include <stdio.h>
//#include<stdio.h>
#include <stdlib.h>

// #include <stdio.h>
#include <string.h>
// Starter Code
int  minimum_distance(char str1[100000],char str2[100000])
{
    int  minimum_value=-1;
    //Write your code here without removing the existing code
	//the variable 'str1' and 'str2' contains array of character.
	//modified the variable 'minimum_value ' contain the output of the program.
    return minimum_value ;
}


//Backend Code
int main()
{
    char str1[100000],str2[100000];
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]%*c",str2);
    int ans= minimum_distance(str1,str2);
    printf("%d",ans);
 
    return 0;
}