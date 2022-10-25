# Starter Code
class Solution:
    def trapping_water(self, heights, n):
        maximum_amount = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable maximum_amount  which contain the output of the program.
        return maximum_amount

if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.trapping_water(arr, n)
    print(ans)

