# Starter Code
class Solution:
    def calculate_price(self, arr, n):
        stock_price = [0]
        # Write your code here without removing the existing code.
        # the variable 'arr' contains array of integers of size n.
        # modified the array 'stock_price' contains the output of the program.
        return stock_price


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans = x.calculate_price(arr, n)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
