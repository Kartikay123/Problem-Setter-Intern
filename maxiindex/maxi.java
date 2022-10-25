
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.max_differnce(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int max_differnce(int arr[],int n)
        {
        
			int maximum_index = -1;
            // Write your code here without removing the existing code
            // the variables arr contains the array of integer and n is the size of an array.
            // modified the variable maximum_index contain the output of the program in integer format.
		    return maximum_index;
        }
}