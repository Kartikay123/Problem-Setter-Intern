# Starter Code
class Solution:
    def first_repeat(self, arr, n):
        repeat_element = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable repeat_element contain the output of the program in integer format.
        return repeat_element


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.first_repeat(arr, n)
    print(ans)

