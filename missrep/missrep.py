# Starter Code
class Solution:
    def find_elements(self,arr,n):
        missing_repeat=[-1,-1]
        # Write your code here without removing the existing code
        # the variable 'arr' contains array of integers of size n.
        # modified the array 'missing_repeat' having missing and repeating element.
        return missing_repeat


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans=x.find_elements(arr,n)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
