# Starter Code
class Solution:
    def positive_value(self, arr, n):
       smallest_value =-1
       #Write your code here without removing the existing code
	   #the variable 'arr' contains array of integers of size n-1.
	   #modified the variable 'smallest_value' contain the output of the program in integer format.
       return smallest_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.positive_value(arr, n)
    print(ans)

