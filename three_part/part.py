# Starter Code
class Solution:
    def threeEqualParts(self,arr,n):
        binary_value=[0,0]
        # Write your code here without removing the existing code
        # the variable 'arr' contains array of integers of size n.
        # modified the array 'binary_value' as output of the program.
        return binary_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans=x.threeEqualParts(arr,n)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
