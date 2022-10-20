# Starter Code
class Solution:
    def smallest_positive(self, arr, n):
        missing_number = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable missing_number  which contain the output of the program.
        return missing_number


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.smallest_positive(arr, n)
    print(ans)

