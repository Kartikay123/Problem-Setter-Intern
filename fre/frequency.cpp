
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int frequency(std::vector<int>&arr,int n,int k)
{
    int max_frequency= -1;
    //Write your code here without removing the existing code
    //the variable 'arr' contains array of integers of size n an k is an integer.
	//modified the variable 'max_frequency' contain the output of the program in integer format.
    return max_frequency;
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
    int k;
    std::cin>>k;
    int ans = ob.frequency(v,n,k);
    std::cout << ans << std::endl;

    
    return 0;
}