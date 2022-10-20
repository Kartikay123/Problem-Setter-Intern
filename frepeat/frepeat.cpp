
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int first_repeat(std::vector<int>&arr,int n)
{
    int index_small = -1;
    // Write your code here without removing the existing code
    // the variables arr contains the array of integer  n is the size of an array.
    // modified the variable repeat_element contain the output of the program in integer format..
	return repeat_element;
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
    int ans = ob.first_repeat(v, n);
    std::cout << ans << std::endl;

    
    return 0;
}