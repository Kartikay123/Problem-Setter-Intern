
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int find_minimum(std::vector<int>&arr,int n)
{
    int minimum_value= -1;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n.
	//modified the variable 'minimum_value' contain the output of the program in integer format.
    return minimum_value;
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
    int ans = ob.find_minimum(v, n);
    std::cout << ans << std::endl;

    
    return 0;
}