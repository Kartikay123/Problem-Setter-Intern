
// Starter Code
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPermutation(std::string &str1,std::string &str2)
    {
        bool check_string=true;
        // Write your code here without removing the existing code
        // the variable 'str1' and 'str2' contains array of character.
        // modified the variable 'check_string ' contain the output of the program in boolean format.
        return check_string;
    }
};

// Backend Code
int main()
{
    std::string str1,str2;
    std::cin>>str1>>str2;
    Solution ob;
    if(ob.isPermutation(str1,str2))
    {
        std::cout<<"True";
    }
    else
    {
        std::cout<<"False";
    }

    return 0;
}