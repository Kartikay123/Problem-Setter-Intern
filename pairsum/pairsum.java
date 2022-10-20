
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int k = sc.nextInt(); 
            int ans=g.count_pair(arr,n,k);  
            System.out.println(ans);
             
          
	}
}
class Solution
{
	public static int count_pair(int arr[],int n,int k)
        {
            int counter = 0;
			//Write your code here without removing the existing code
	        //the variable 'arr' contains array of integers of size n and an integer k.
	        //modified the integer variable 'counter' and return it.
			return counter;
        }
}