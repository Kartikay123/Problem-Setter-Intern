
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int []ans=g.sort_array(arr,n);  
            for(int i=0;i<n;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] sort_array(int arr[],int n)
        {
            int[] sorted_array = new int[n];
			//Write your code here without removing the exising code
	        //the variable 'arr' contains array of integers of size n.
	        //modified the array 'alternate_array' having alternate positive and negative numbers.
			return sorted_array;
        }
}