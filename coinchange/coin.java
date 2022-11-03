
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int sum = sc.nextInt(); 
            int ans=g.count_ways(arr,n,sum);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int count_ways(int arr[],int n,int sum)
        {
        
			int minimum_coins = -1;
            //Write your code here without removing the existing code
            //the variable 'coins' contains array of integers of size n and an integer sum.
            //modified the variable 'minimum_coins' contain the output of the program in integer format.
		    return minimum_coins;
        }
}