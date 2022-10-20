# Starter Code
class Solution:
    def longest_consecutive(self, arr, n):
        maxi_length = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable maxi_length  which contain the output of the program
        return maxi_length


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.longest_consecutive(arr, n)
    print(ans)

