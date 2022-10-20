
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> find_intersection(std::vector<int> &arr1,std::vector<int> &arr2,std::vector<int> &arr3, int n1,int n2,int n3)
    {
        std::vector<int>common_elements;
        // Write your code here without removing the exising code
        // the variable 'arr1','arr2' and 'arr3' contains array of integers of size n1,n2,n3.
        //modified the array 'common_elements' as output of the program.
        return common_elements;
    }
};

// Backend Code
int main()
{

    int n1,n2,n3;
    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;
    std::string s1,s2,s3;
    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;

    std::istringstream iss1{std::regex_replace(s1, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v1 = {std::istream_iterator<int>{iss1}, std::istream_iterator<int>{}};
    std::istringstream iss2{std::regex_replace(s2, std::regex{R"(\[|\]|,)"}, " ")};

    std::vector<int> v2 = {std::istream_iterator<int>{iss2}, std::istream_iterator<int>{}};
    std::istringstream iss3{std::regex_replace(s3, std::regex{R"(\[|\]|,)"}, " ")};

    std::vector<int> v3 = {std::istream_iterator<int>{iss3}, std::istream_iterator<int>{}};
    Solution ob;
    std::vector<int> ans = ob.find_intersection(v1,v2,v3,n1,n2,n3);
    for (int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}