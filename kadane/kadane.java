
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            long ans=g.max_subarray(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static long max_subarray(int arr[],int n)
        {
        
			long maxi_value = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n.
			//modified the variable 'maxi_value' contain the output of the program in integer format.
		    return maxi_value;
        }
}