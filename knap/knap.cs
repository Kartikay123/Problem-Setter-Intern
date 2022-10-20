
using System;
public class Solution
{
	public  double knapsack(int []arr1,int []arr2,int n,int W)
        {
        
			double maxi_value = 4.56;
            
	//Write your code here without removing the exising code
	//the variable 'arr1' and 'arr2' contains array of integers of size n.
	//modified the double maxi_value contain the output of the program upto 2 place of decimal.

		    return maxi_value;
		   
           
        }
         public static void Main(string[] args)
        {
	        int n,W;
            n =Int32.Parse(Console.ReadLine());
            
            int[] arr1 = new int[n];
            int[] arr2 = new int[n];
            string[] s1 = Console.ReadLine().Split(' ');
            for (int i=0;i< n;i++)
            {
                arr1[i] = Int32.Parse(s1[i]);
            }
            string[] s2 = Console.ReadLine().Split(' ');
            for (int i=0;i<n;i++)
            {
                arr2[i] = Int32.Parse(s2[i]);
            }
            W=Int32.Parse(Console.ReadLine());
            Solution g= new Solution();
            
            double ans=g.knapsack(arr1,arr2,n,W);
             Console.WriteLine(ans);
            
           
        }
}