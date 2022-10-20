
// Starter Code
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
double calculate_degree(int hours,int minutes)
{
    double angle = 6.4566;
    // Write your code here without removing the existing code
    // 'hours' and 'minutes' are input variables in integer format.
    // modified the double 'angle' contain the output of the program.
    return angle;
}
};

int main()
{
    
    int n,m;
    std::cin>>n>>m;
    Solution ob;
    double ans = ob.calculate_degree(n,m);
    std::cout << std::fixed;
    std::cout << std::setprecision(5) << ans <<std::endl;
    return 0;
}