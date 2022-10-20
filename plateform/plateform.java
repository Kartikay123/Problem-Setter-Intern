
	
	public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr1= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
            int []arr2= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.minimum_plateform(arr1,arr2,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int minimum_plateform(int arr[],int dep[],int n)
        {
			int mini_value =-1;
            //Write your code here without removing the existing code.
	        //the variable 'arr' and 'dep' contains array of integers of size n.
	        //modified the mini_value contain the output of the program in integer format.
            return mini_value;
        }
}