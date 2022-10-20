
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
double median_array(std::vector<int>&arr1,std::vector<int>&arr2,int n,int m)
{
    double median_value =8;
    
    //Write your code here without removing the exising code
	//the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the double median_value contain the output of the program upto 2 place of decimal.

    return median_value;
}
};

int main()
{
    
    int n,m;
    std::cin>>n>>m;
    std::string s1,s2;
    std::cin >> s1>>s2;
    std::istringstream iss1{std::regex_replace(s1, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v1 = {std::istream_iterator<int>{iss1}, std::istream_iterator<int>{}};
    std::istringstream iss2{std::regex_replace(s2, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v2 = {std::istream_iterator<int>{iss2}, std::istream_iterator<int>{}};
    Solution ob;
    double ans = ob.median_array(v1,v2,n,m);
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << ans <<std::endl;
    return 0;
}