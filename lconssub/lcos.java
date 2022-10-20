
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.longest_consecutive(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int longest_consecutive(int arr[],int n)
        {
        
			int maxi_length = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n.
			//modified the variable 'maxi_length' contain the output of the program in integer format.
		    return maxi_length;
        }
}