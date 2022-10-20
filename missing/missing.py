# Starter Code
class Solution:
    def find_missing(self, arr, n):
       missing_element =-1
       #Write your code here without removing the existing code
	   #the variable 'arr' contains array of integers of size n-1.
	   #modified the variable 'missing_element' contain the output of the program in integer format.
       return missing_element


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.find_missing(arr, n)
    print(ans)

