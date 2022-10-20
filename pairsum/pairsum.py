# Starter Code
class Solution:
    def count_pair(self,arr,n,k):
        counter=0
        # Write your code here without removing the existing code
        # the variable 'arr' contains array of integers of size n and k is an integer.
        # modified the variable 'counter' and return it.
        return counter


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k= int(input())
    ans=x.count_pair(arr,n,k)
    print(ans)
