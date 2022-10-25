# Starter Code
class Solution:
    def maximum_profit(self,prices, n):
       maxi_value =-1
       #Write your code here without removing the existing code
	   #the variable 'arr' contains array of integers of size n.
	   #modified the variable 'maxi_value' contain the output of the program in integer format.
       return maxi_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.maximum_profit(arr, n)
    print(ans)

