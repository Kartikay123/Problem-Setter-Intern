# Starter Code
class Solution:
    def rotate_array(self, arr, n,k):
        k_step_rotation=[0]
        #Write your code here without removing the exising code
	    #the variable 'arr' contains array of integers of size n and integer k.
	    #modified the array 'k_step_rotation' return the output of the program.
        return k_step_rotation


if __name__ == '__main__':
    n = int(input())
    str = input()
    arr = [int(int(i)) for i in str.strip('[]').split(',')]
    x = Solution()
    k= int(input())
    ans=x.rotate_array(arr,n,k)
    for i in range(0, len(ans)):
        print(ans[i], end=" ")
