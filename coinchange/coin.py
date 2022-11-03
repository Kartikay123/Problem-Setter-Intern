# Starter Code
class Solution:
    def count_ways(self, coins,n,sum):
        minimum_coins = -1
        #Write your code here without removing the existing code
        #the variable 'coins' contains array of integers of size n and an integer sum.
        #modified the variable 'minimum_coins' contain the output of the program in integer format.
        return minimum_coins


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    sum = int(input())
    ans = x.count_ways(arr, n,sum)
    print(ans)

