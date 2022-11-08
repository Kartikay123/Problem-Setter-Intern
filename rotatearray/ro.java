
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt();
            int []ans=g.rotate_array(arr,n,k);  
            for(int i=0;i<n;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] rotate_array(int arr[],int n,int k)
        {
            int[] k_step_rotation = new int[n];
			//Write your code here without removing the exising code
	        //the variable 'arr' contains array of integers of size n and integer k.
	        //modified the array 'k_step_rotation' return the output of the program.
			return k_step_rotation;
        }
}