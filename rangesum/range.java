
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k1 = sc.nextInt();
            int k2 = sc.nextInt();  
            int ans=g.rangeSum(arr,n,k1,k2);  
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int rangeSum(int arr[],int n,int lower,int upper)
        {
        
			int count_sum =-1;
            //Write your code here without removing the existing code.
	        //the variable 'arr' contains array of integers of size n and lower and upper is an integer.
	        //modified the variable 'count_sum' contain the output of the program in integer format.
            return count_sum;
        }
}