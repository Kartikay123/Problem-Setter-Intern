# Starter Code
class Solution:
    def sort_array(self, arr, n):
        sorted_array=[0]
        # Write your code here without removing the exising code
        # the variable 'arr' contains array of integers of size n.
        #modified the array 'sorted_array' in sorted order of 0,1,2.
        return sorted_array


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans=x.sort_array(arr, n)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
