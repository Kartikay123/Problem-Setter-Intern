
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int max_sum(std::vector<int> &arr1, std::vector<int> &arr2, int n, int m)
    {
        int max_path = -1;
        // Write your code here without removing the existing code.
        // the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
        // modified the max_path contain the output of the program in integer format.
        return max_path;
    }
};

int main()
{

    int n, m;
    std::cin >> n >> m;
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::istringstream iss1{std::regex_replace(s1, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v1 = {std::istream_iterator<int>{iss1}, std::istream_iterator<int>{}};
    std::istringstream iss2{std::regex_replace(s2, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v2 = {std::istream_iterator<int>{iss2}, std::istream_iterator<int>{}};
    Solution ob;
    int ans = ob.max_sum(v1, v2, n, m);
    std::cout << ans << std::endl;
    return 0;
}