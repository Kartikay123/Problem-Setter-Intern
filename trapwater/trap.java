
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            long ans=g.trapping_water(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static long trapping_water(int heights[],int n)
        {
        
			long maximum_amount = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n.
			//modified the variable 'maximum_amount' contain the output of the program in long format.
		    return maximum_amount;
        }
}