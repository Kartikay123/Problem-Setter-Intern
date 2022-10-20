
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int smallest_value(std::vector<int>&arr,int n,int k)
{
    int k_value= 0;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n and k is an integer.
	//modified the variable 'k_value' contain the output of the program in integer format.
    return k_value;
}
};

//Backend Code
int main()
{
    
    int n,k;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::cin >> k;
    int ans = ob.smallest_value(v, n,k);
    std::cout << ans << std::endl;

    
    return 0;
}