# Starter Code
class Solution:
    def find_min_diff(self,arr,n,k):
        chocolate_distribution=0
        # Write your code here without removing the existing code
        # the variable 'arr' contains array of integers of size n and k is an integer.
        # modified the chocolate_distribution 'counter' and return it.
        return chocolate_distribution


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k= int(input())
    ans=x.find_min_diff(arr,n,k)
    print(ans)
