# Starter Code
class Solution:
    def union_size(self,arr1,arr2,n,m):
        resultant_size=-1
        #Write your code here without removing the exising code
	    #the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	    #modified the integer resultant_size contain the output of the program.
        return resultant_size

if __name__ == '__main__':
        n = int(input())
        m = int(input())
        str1 = input()
        str2 = input()
        arr1 = [int(int(i)) for i in str1.strip('[]').split(',')]
        arr2 = [int(int(i)) for i in str2.strip('[]').split(',')]
        x = Solution()
        ans = x.union_size(arr1,arr2,n,m)
        print(ans)