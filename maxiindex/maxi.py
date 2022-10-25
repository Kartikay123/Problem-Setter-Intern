# Starter Code
class Solution:
    def max_differnce(self, arr, n):
        maximum_index = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer and n is the size of an array.
        # modified the variable maximum_index contain the output of the program in integer format.
        return maximum_index


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.max_differnce(arr, n)
    print(ans)

