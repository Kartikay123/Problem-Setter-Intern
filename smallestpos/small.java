
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.positive_value(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int positive_value(int arr[],int n)
        {
        
			int smallest_value =-1;
            //Write your code here without removing the existing code
	        //the variable 'arr' contains array of integers of size n-1.
	        //modified the variable 'smallest_value' contain the output of the program in integer format.
            return smallest_value;
        }
}