# Starter Code
class Solution:
    def pair_sum(self,arr,n,k):
        closest_sum=[0,0]
        # Write your code here without removing the existing code
        # the variable 'arr' contains array of integers of size n and an integer k.
        # modified the array 'closest_sum' having pair sum close to k.
        return closest_sum


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    k = int(input())
    x = Solution()
    ans=x.pair_sum(arr,n,k)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
