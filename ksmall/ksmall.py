# Starter Code
class Solution:
    def smallest_value(self, arr, n,k):
        k_value = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array and k is an integer.
        # modified the variable k_value  which contain the output of the program
        return k_value


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k = int(input())
    ans = x.smallest_value(arr, n,k)
    print(ans)

