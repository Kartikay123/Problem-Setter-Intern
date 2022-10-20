# Starter Code
class Solution:
    def median_array(self,arr1,arr2,n,m):
        median_value=10.9056
        #Write your code here without removing the exising code
	#the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	#modified the double median_value contain the output of the program upto 2 place of decimal.
        return median_value



if __name__ == '__main__':
        n = int(input())
        m = int(input())
        str1 = input()
        str2 = input()
        arr1 = [int(int(i)) for i in str1.strip('[]').split(',')]
        arr2 = [int(int(i)) for i in str2.strip('[]').split(',')]
        x = Solution()
        ans = x.median_array(arr1,arr2,n,m)
        print("%.2f" %ans)