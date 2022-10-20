
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimum_plateform(std::vector<int> &arr, std::vector<int> &dep, int n)
    {
        int mini_value = -1;
        //Write your code here without removing the existing code.
	    //the variable 'arr' and 'dep' contains array of integers of size n.
	    //modified the mini_value contain the output of the program in integer format.
        return mini_value;
    }
};

int main()
{

    int n;
    std::cin >> n;
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::istringstream iss1{std::regex_replace(s1, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v1 = {std::istream_iterator<int>{iss1}, std::istream_iterator<int>{}};
    std::istringstream iss2{std::regex_replace(s2, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v2 = {std::istream_iterator<int>{iss2}, std::istream_iterator<int>{}};
    Solution ob;
    int ans = ob.minimum_plateform(v1, v2, n);
    std::cout << ans << std::endl;
    return 0;
}