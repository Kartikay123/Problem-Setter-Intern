# Starter Code
class Solution:
    def minimum_jumps(self, arr, n):
        minimum_value = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable minimum_value  which contain the output of the program.
        return minimum_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.minimum_jumps(arr, n)
    print(ans)

