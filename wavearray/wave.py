# Starter Code
class Solution:
    def wave_array(self, arr, n):
        lex_smallarray=[0]
        # Write your code here without removing the exising code
        # the variable 'arr' contains array of integers of size n.
        # modified the array 'lex_smallarray' contains the output of the program.
        return lex_smallarray


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    ans=x.wave_array(arr, n)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
