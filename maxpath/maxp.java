
	
	public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
            int m= sc.nextInt(); 
			int []arr1= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
            int []arr2= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.max_sum(arr1,arr2,n,m);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int max_sum(int arr1[],int arr2[],int n,int m)
        {
            
			int max_path =-1;
            //Write your code here without removing the existing code.
	        //the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	        //modified the max_path contain the output of the program in integer format.
            return max_path;
        }
}