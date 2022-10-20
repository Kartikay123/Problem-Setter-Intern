
class Solution:
    def frequency(self, arr, n,k):
        max_frequency = -1
        # Write your code here without removing the existing code
        # the variables arr contains the array of integer  n is the size of an array.
        # modified the variable max_frequency  which contain the output of the program
        return max_frequency


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k = int(input())
    ans = x.frequency(arr, n,k)
    print(ans)

