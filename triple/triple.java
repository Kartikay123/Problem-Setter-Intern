
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt(); 
            int ans=g.triple_sum(arr,n,k);  
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int triple_sum(int arr[],int n,int k)
        {
        
			int value = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n and k is an integer.
			//modified the variable 'value' contain the output of the program in integer format.
		    return value;
        }
}