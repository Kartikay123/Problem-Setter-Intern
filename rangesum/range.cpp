
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int rangeSum(std::vector<int>&arr,int n,int lower, int upper)
{
    int count_sum =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and lower and upper is an integer.
	//modified the variable 'count_sum' contain the output of the program in integer format.
    return count_sum;
}
};

//Backend Code
int main()
{
    
    int n,k1,k2;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::cin>>k1>>k2;
    int ans = ob.rangeSum(v,n,k1,k2);
    std::cout << ans << std::endl;
    return 0;
}