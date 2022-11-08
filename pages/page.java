
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt(); 
            int ans=g.minimum_pages(arr,n,k);  
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int minimum_pages(int arr[],int n,int k)
        {
        
			int allocated_value = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n and k is an integer.
			//modified the variable 'allocated_value' contain the output of the program in integer format.
		    return allocated_value;
        }
}