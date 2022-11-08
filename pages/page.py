# Starter Code
class Solution:
    def minimum_pages(self,arr,n,k):
        allocated_value = -1
        # Write your code here without removing the existing code.
        # the variables arr contains the array of integer  n is the size of an array and k is an integer.
        # modified the variable allocated_value  which contain the output of the program.
        return allocated_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k = int(input())
    ans = x.minimum_pages(arr,n,k)
    print(ans)

