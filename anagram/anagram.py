# Starter Code
class Solution:
    def isAnagram(self, str1, str2):
        check_string=1
        # Write your code here without removing the existing code
        # the variable 'str1' and 'str2' contains array of character.
        # modified the variable 'check_string' contain the output of the program in boolean format.
        return check_string


if __name__ == '__main__':
    s1 = input()
    s2 = input()
    x = Solution()
    if(x.isAnagram(s1, s2)):
        print("YES")
    else:
        print("NO")
