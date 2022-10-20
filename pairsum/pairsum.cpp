
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count_pair(std::vector<int> &arr, int n, int k)
    {
        int counter = 0;
		//Write your code here without removing the existing code
	    //the variable 'arr' contains array of integers of size n and an integer k.
	    //modified the integer variable 'counter' and return it.
		return counter;
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
    int ans = ob.count_pair(v, n, k);
    std::cout<<ans<<std::endl;

    return 0;
}