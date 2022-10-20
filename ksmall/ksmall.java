
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt(); 
            int ans=g.smallest_value(arr,n,k);  
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int smallest_value(int arr[],int n,int k)
        {
        
			int k_value = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n and k is an integer.
			//modified the variable 'k_value' contain the output of the program in integer format.
		    return k_value;
        }
}