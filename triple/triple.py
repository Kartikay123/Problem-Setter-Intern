# Starter Code
class Solution:
    def triple_sum(self, arr, n,k):
        value = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array and k is an integer.
        # modified the variable value  which contain the output of the program.
        return value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k = int(input())
    ans = x.triple_sum(arr, n,k)
    print(ans)

