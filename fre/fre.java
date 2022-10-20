
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt(); 
            int ans=g.frequency(arr,n,k);  
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int frequency(int arr[],int n,int k)
        {
        
			int max_frequency = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n and k is an integer.
			//modified the variable 'max_frequency' containing program's output in integer format.
		    return max_frequency;
        }
}