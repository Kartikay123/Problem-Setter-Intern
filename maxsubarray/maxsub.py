# Starter Code
class Solution:
    def find_subarray(self, arr,n,k):
        subarray_sum=[0,0]
        # Write your code here without removing the existing code
        # the variable 'arr' contains array of integers of size n and k is an integer.
        # modified the array 'subarray_sum' having the subarray with k sum.
        return subarray_sum


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    k= int(input())
    x = Solution()
    ans=x.find_subarray(arr,n,k)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
