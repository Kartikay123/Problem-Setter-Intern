# Starter Code
class Solution:
    def find_intersection(self, arr1,arr2,arr3,n1,n2,n3):
        common_elements=[0]
        # Write your code here without removing the existing code.
        # the variable 'arr1','arr2' and 'arr3' contains array of integers of size n1,n2,n3.
        #modified the array 'common_elements' as output of the program.
        return common_elements


if __name__ == '__main__':
    n1 = int(input())
    n2 = int(input())
    n3 = int(input())
    str1 = input()
    str2 = input()
    str3 = input()
    arr1 = [int(int(i)) for i in str1.strip('[]').split(',')]
    arr2 = [int(int(i)) for i in str2.strip('[]').split(',')]
    arr3 = [int(int(i)) for i in str3.strip('[]').split(',')]
    x = Solution()
    ans=x.find_intersection(arr1,arr2,arr3,n1,n2,n3)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
