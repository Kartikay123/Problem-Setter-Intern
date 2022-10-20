# Starter Code
class Solution:
    def rearrange(self, arr, n):
        alternate_array=[0]
        # Write your code here without removing the exising code
        # the variable 'arr' contains array of integers of size n.
        # modified the array 'alternate_array' having alternate positive and negative numbers.
        return alternate_array


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans=x.rearrange(arr, n)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
