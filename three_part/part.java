
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int []ans=g.threeEqualParts(arr,n);  
            for(int i=0;i<2;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] threeEqualParts(int arr[],int n)
        {
            int[] binary_value = new int[2];
			//Write your code here without removing the existing code
	        //the variable 'arr' contains array of integers of size n and an integer k.
	        //modified the array 'binary_value' having the subarray with k sum.
			return binary_value;
        }
}