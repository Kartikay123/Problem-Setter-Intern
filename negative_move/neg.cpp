
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> rearrange(std::vector<int> &arr, int n)
    {
        vector<int> alternate_array(n);
        // Write your code here without removing the exising code
        // the variable 'arr' contains array of integers of size n.
        //modified the array 'alternate_array' having alternate positive and negative numbers.
        return alternate_array;
    }
};

// Backend Code
int main()
{

    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::vector<int> ans = ob.rearrange(v, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}