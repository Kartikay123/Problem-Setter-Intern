# Starter Code
class Solution:
    def knapsack(self,arr1,arr2,n,W):
        maxi_value=10.56
        #Write your code here without removing the existing code.
	#the variable 'weights' and 'values' contains array of integers of size n.
	#modified the double maxi_value containing the output of the program up to 2 places of decimal.
        return maxi_value



if __name__ == '__main__':
        n = int(input())
        str1 = input()
        str2 = input()
        arr1 = [int(int(i)) for i in str1.strip('[]').split(',')]
        arr2 = [int(int(i)) for i in str2.strip('[]').split(',')]
        W= int(input())
        x = Solution()
        ans = x.knapsack(arr1,arr2,n,W)
        print("%.2f" %ans)