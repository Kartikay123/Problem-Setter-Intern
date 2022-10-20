
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int triple_sum(std::vector<int>&arr,int n,int k)
{
    int value= -1;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n and k is an integer.
	//modified the variable 'value' contain the output of the program in integer format.
    return value;
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
    int ans = ob.triple_sum(v, n,k);
    std::cout << ans << std::endl;

    
    return 0;
}