
// Starter Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    std::vector<int> wave_array(std::vector<int> &arr, int n)
    {
        std::vector<int> lex_smallarray(n);
        //Write your code here without removing the exising code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'lex_smallarray' contains the output of the program.
        return lex_smallarray;
    }
};

// Backend Code
int main()
{

    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::istringstream iss{std::regex_replace(s, std::regex{R"(\[|\]|,)"}, " ")};
    std::vector<int> v = {std::istream_iterator<int>{iss}, std::istream_iterator<int>{}};
    Solution ob;
    std::vector<int> ans = ob.wave_array(v, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}