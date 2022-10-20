# Starter Code
class Solution:
    def minimum_plateform(self,arr,dep,n):
        mini_value=-1
        #Write your code here without removing the exising code
	    #the variable 'arr' and 'dep' contains array of integers of size n.
	    #modified the integer mini_value contain the output of the program.
        return mini_value

if __name__ == '__main__':
        n = int(input())
        str1 = input()
        str2 = input()
        arr1 = [int(int(i)) for i in str1.strip('[]').split(',')]
        arr2 = [int(int(i)) for i in str2.strip('[]').split(',')]
        x = Solution()
        ans = x.minimum_plateform(arr1,arr2,n)
        print(ans)