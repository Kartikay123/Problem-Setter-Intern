# Starter Code
class Solution:
    def max_sum(self,arr1,arr2,n,m):
        max_path=-1
        #Write your code here without removing the exising code
	    #the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	    #modified the integer resultant_size contain the output of the program.
        return max_path

if __name__ == '__main__':
        n = int(input())
        m = int(input())
        str1 = input()
        str2 = input()
        arr1 = [int(int(i)) for i in str1.strip('[]').split(',')]
        arr2 = [int(int(i)) for i in str2.strip('[]').split(',')]
        x = Solution()
        ans = x.max_sum(arr1,arr2,n,m)
        print(ans)