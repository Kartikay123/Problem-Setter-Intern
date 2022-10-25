
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int max_differnce(std::vector<int>&arr,int n)
{
    int maximum_index = -1;
    // Write your code here without removing the existing code
    // the variables 'arr' contains the array of integer and n is the size of an array.
    // modified the variable maximum_index contain the output of the program in integer format..
	return maximum_index;
}
};

//Backend Code
int main()
{
    
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    int ans = ob.max_differnce(v, n);
    std::cout << ans << std::endl;

    
    return 0;
}