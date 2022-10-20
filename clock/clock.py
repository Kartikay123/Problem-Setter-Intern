# Starter Code
class Solution:
    def calculate_degree(self, hours, minutes):
        angle = 10.56
        # Write your code here without removing the existing code
        # 'hours' and 'minutes' are input variables in integer format.
        # modified the double 'angle' contain the output of the program.
        return angle


if __name__ == '__main__':
    n = int(input())
    m = int(input())
    x = Solution()
    ans = x.calculate_degree(n, m)
    print("%.5f" % ans)
