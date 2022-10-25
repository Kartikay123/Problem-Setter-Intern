
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int []ans=g.find_elements(arr,n);  
            for(int i=0;i<2;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] find_elements(int arr[],int n)
        {
            int[] missing_repeat = new int[2];
			// Write your code here without removing the existing code
            // the variable 'arr' contains array of integers of size n.
            // modified the array 'missing_repeat' having missing and repeating element.
			return missing_repeat;
        }
}