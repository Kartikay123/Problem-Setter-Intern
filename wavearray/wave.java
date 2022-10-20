
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int []ans=g.wave_array(arr,n);  
            for(int i=0;i<n;i++)
            System.out.print(ans[i] + " ");  
          
	}
}
class Solution
{
	public static int[] wave_array(int arr[],int n)
        {
            int[] lex_smallarray = new int[n];
			///Write your code here without removing the exising code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'lex_smallarray' contains the output of the program.
			return lex_smallarray;
        }
}