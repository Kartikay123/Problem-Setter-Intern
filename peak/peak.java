
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            int ans=g.peak_element(arr,n);
            System.out.println(ans);
          
	}
}
class Solution
{
	public static int peak_element(int arr[],int n)
        {
        
			int index_element = -1;
			//Write your code here without removing the existing code
			//the variable 'arr' contains array of integers of size n.
			//modified the variable 'index_element' contain the output of the program in integer format.
		    return index_element;
        }
}