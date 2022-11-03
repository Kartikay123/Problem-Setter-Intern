
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int  find_min_diff(std::vector<int> &arr, int n, int k)
    {
        int chocolate_distribution = -1;
		//Write your code here without removing the existing code
	    //the variable 'arr' contains array of integers of size n and an integer k.
	    //modified the integer variable 'chocolate_distribution' and return it.
		return chocolate_distribution;
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
    int ans = ob.find_min_diff(v, n, k);
    std::cout<<ans<<std::endl;

    return 0;
}