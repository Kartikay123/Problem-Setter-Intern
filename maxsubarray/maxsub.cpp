
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> find_subarray(std::vector<int> &arr, int n, int k)
    {
        vector<int> subarray_sum(2);
        // Write your code here without removing the existing code
        // the variable 'arr' contains array of integers of size n and an integer k.
        // modified the array 'subarray_sum' having the subarray with k sum.
        return subarray_sum;
    }
};

// Backend Code
int main()
{

    int n, k;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::cin >> k;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::vector<int> ans = ob.find_subarray(v, n, k);
    for (int i = 0; i < 2; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}