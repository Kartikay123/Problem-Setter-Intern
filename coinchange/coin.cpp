
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int count_ways(std::vector<int>&arr,int n,int sum)
{
    int minimum_coins= -1;
    //Write your code here without removing the existing code
    //the variable 'coins' contains array of integers of size n and an integer sum.
    //modified the variable 'minimum_coins' contain the output of the program in integer format.
    return minimum_coins;
}
};

//Backend Code
int main()
{
    
    int n,sum;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::cin >> sum;
    int ans = ob.count_ways(v,n,sum);
    std::cout << ans << std::endl;

    
    return 0;
}