# Starter Code
class Solution:
    def major_element(self, arr, n):
        maximum_times = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable maximum_times  which contain the output of the program.
        return maximum_times


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.major_element(arr, n)
    print(ans)

