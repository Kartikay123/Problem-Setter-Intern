
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> pair_sum(std::vector<int> &arr, int n,int k)
    {
        std::vector<int> closest_sum(2);
        // Write your code here without removing the existing code
        // the variable 'arr' contains array of integers of size n and an integer k.
        // modified the array 'closest_sum' having pair sum close to k.
        return closest_sum;
    }
};

// Backend Code
int main()
{

    int n,k;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::cin>>k;
    std::vector<int> ans = ob.pair_sum(v, n,k);
    for (int i = 0; i < 2; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}