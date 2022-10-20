
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
long long  trapping_water(std::vector<int>&arr,int n)
{
    long long maximum_amount= -1;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n.
	//modified the variable 'maximum_amount' contain the output of the program in integer format.
    return maximum_amount;
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
    long long  ans = ob.trapping_water(v, n);
    std::cout << ans << std::endl;

    
    return 0;
}