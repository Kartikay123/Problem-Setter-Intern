
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt(); 
            int []ans=g.find_subarray(arr,n,k);  
            for(int i=0;i<2;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] find_subarray(int arr[],int n,int k)
        {
            int[] subarray_sum = new int[2];
			//Write your code here without removing the existing code
	        //the variable 'arr' contains array of integers of size n and an integer k.
	        //modified the array 'subarray_sum' having the subarray with k sum.
			return subarray_sum;
        }
}