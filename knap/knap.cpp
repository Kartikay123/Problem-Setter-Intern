
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
double knapsack(std::vector<int>&arr1,std::vector<int>&arr2,int n,int W)
{
    double maxi_value =12.21;
    //Write your code here without removing the existing code.
	//the variable 'weights' and 'values' contains array of integers of size n.
	//modified the double maxi_value containing the output of the program up to 2 places of decimal.
    return maxi_value;
}
};

int main()
{
    
     int n,W;
    std::cin>>n;
    std::string s1,s2;
    std::cin >> s1>>s2;
    std::istringstream iss1{std::regex_replace(s1, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v1 = {std::istream_iterator<int>{iss1}, std::istream_iterator<int>{}};
    std::istringstream iss2{std::regex_replace(s2, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v2 = {std::istream_iterator<int>{iss2}, std::istream_iterator<int>{}};
    std::cin>>W;
    Solution ob;
    double ans = ob.knapsack(v1,v2,n,W);
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << ans <<std::endl;
    return 0;
}