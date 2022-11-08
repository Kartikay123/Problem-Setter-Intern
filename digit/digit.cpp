
// Starter Code
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isdigit(std::string &str1)
    {
        bool check_digit=true;
        // Write your code here without removing the existing code
        // the variable 'str1' contains the string as input.
        // modified the variable 'check_digit ' contain the output of the program in boolean format.
        return check_digit;
    }
};

// Backend Code
int main()
{
    std::string str1;
    std::cin>>str1;
    Solution ob;
    if(ob.isdigit(str1))
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }

    return 0;
}