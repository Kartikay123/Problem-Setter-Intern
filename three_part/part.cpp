
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> threeEqualParts(std::vector<int> &arr, int n)
    {
        vector<int> binary_value(2);
        //Write your code here without removing the existing code.
	    //the variable 'arr' contains array of integers of size n.
	    //modified the array 'binary_value' return the output of the program.
        return binary_value;
    }
};

// Backend Code
int main()
{

    int n, k;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::vector<int> ans = ob.threeEqualParts(v, n);
    for (int i = 0; i < 2; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}