# Starter Code
class Solution:
    def rangeSum(self, arr, n,k):
        count_sum =-1
        #Write your code here without removing the existing code.
	    #the variable 'arr' contains array of integers of size n and lower and upper is an integer.
	    #modified the variable 'count_sum' contain the output of the program in integer format.
        return count_sum


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k1= int(input())
    k2= int(input())
    ans = x.rangeSum(arr,n,k1,k2)
    print(ans)

