
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> calculate_price(std::vector<int> &arr, int n)
    {
        std::vector<int> stock_price(n);
        // Write your code here without removing the existing code
        // the variable 'arr' contains array of integers of size n.
        // modified the array 'stock_price' contains the output of the program.
        return stock_price;
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
    std::vector<int> ans = ob.calculate_price(v, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}