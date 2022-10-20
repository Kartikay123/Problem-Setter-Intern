
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.find_missing(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int find_missing(int arr[],int n)
        {
        
			int missing_element =-1;
            //Write your code here without removing the existing code
	        //the variable 'arr' contains array of integers of size n-1.
	        //modified the variable 'missing_element' contain the output of the program in integer format.
            return missing_element;
        }
}