# Starter Code
class Solution:
    def peak_element(self, arr, n):
        index_element = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable index_element  which contain the output of the program
        return index_element


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.peak_element(arr, n)
    print(ans)

