
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> rotate_array(std::vector<int> &arr, int n,int k)
    {
        vector<int> k_step_rotation(n);
        //Write your code here without removing the exising code
	    //the variable 'arr' contains array of integers of size n and integer k.
	    //modified the array 'k_step_rotation' return the output of the program.
        return k_step_rotation;
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
    std::vector<int> ans = ob.rotate_array(v, n,k);
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}