
using System;
public class Solution
{
	public  double median_array(int []arr1,int []arr2,int n,int m)
        {
        
			double median_value = 4.56;
            
	//Write your code here without removing the exising code
	//the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the double median_value contain the output of the program upto 2 place of decimal.

		    return median_value;
		   
           
        }
         public static void Main(string[] args)
        {
	        int n,m;
            n =Int32.Parse(Console.ReadLine());
            m=Int32.Parse(Console.ReadLine());
            int[] arr1 = new int[n];
            int[] arr2 = new int[m];
            string[] s1 = Console.ReadLine().Split(' ');
            for (int i=0;i< n;i++)
            {
                arr1[i] = Int32.Parse(s1[i]);
            }
            string[] s2 = Console.ReadLine().Split(' ');
            for (int i=0;i<m;i++)
            {
                arr2[i] = Int32.Parse(s2[i]);
            }
            Solution g= new Solution();
            
            double ans=g.median_array(arr1,arr2,n,m);
             Console.WriteLine(ans);
            
           
        }
}