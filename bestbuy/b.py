# Starter Code
class Solution:
    def maximum_profit(self, prices,n,k):
        maxi_value = -1
        # Write your code here without removing the existing code
        # the variables prices contains the array of integer  n is the size of an array and k is an integer.
        # modified the variable maxi_value  which contain the output of the program
        return maxi_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k = int(input())
    ans = x.maximum_profit(arr,n,k)
    print(ans)

