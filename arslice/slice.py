# Starter Code
class Solution:
    def arithmetic_slices(self, arr, n):
        count_value = -1
        # Write your code here without removing the existing code.
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable count_value  which contain the output of the program
        return count_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.arithmetic_slices(arr, n)
    print(ans)

