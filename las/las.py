# Starter Code
class Solution:
    def longest_alternate_subs(self, arr, n):
        maximum_length = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable maximum_length  which contain the output of the program.
        return maximum_length


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.longest_alternate_subs(arr, n)
    print(ans)

