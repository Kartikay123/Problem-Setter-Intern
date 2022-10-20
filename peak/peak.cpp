
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int peak_element(vector<int>&arr,int n)
{
    int index_element= 0;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n.
	//modified the variable 'index_element' contain the output of the program in integer format.

    return index_element;
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
    int ans = ob.peak_element(v, n);
    std::cout << ans << std::endl;

    
    return 0;
}