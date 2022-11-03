
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int n = sc.nextInt(); 
            int []ans=g.pair_sum(arr,n,k);  
            for(int i=0;i<2;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] pair_sum(int arr[],int n,int k)
        {
            int[] closest_sum = new int[2];
			// Write your code here without removing the existing code.
            // the variable 'arr' contains array of integers of size n and an integer k.
            // modified the array 'closest_sum' having pair sum close to k.
			return closest_sum;
        }
}