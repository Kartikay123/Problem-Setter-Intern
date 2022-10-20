

public class Solution
{
	public  int peak_element(int []arr,int n)
        {
        
			int index_element = 0;
            
			//Write your code here without removing the exising code
	        //the variable 'arr' contains array of integers and 'n' is the size of the integer array contains the input values.
	        //modified the variable 'index_element' contain the output of the program in integer format.
		    return index_element;
		   
           
        }
         public static void Main(string[] args)
        {
	        int n;
            n =Int32.Parse(Console.ReadLine());
            int[] arr = new int[n];
            string[] s = Console.ReadLine().Split(' ');

            for (int i= 0;i< n;i++)
            {
                arr[i] = Int32.Parse(s[i]);
            }
            Solution g= new Solution();
            
            int ans=g.peak_element(arr,n);
             Console.WriteLine(ans);
            
           
        }
}