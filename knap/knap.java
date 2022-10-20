
	
	public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
        int n = sc.nextInt(); 
        int []arr1= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
        int []arr2= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
        Solution g=new Solution();
        int W = sc.nextInt(); 
        double ans=g.knapsack(arr1,arr2,n,W);
        System.out.println(String.format("%.2f",ans));
	}
}
class Solution
{
	public static double knapsack(int weights[],int values[],int n,int W)
        {
        
			double maxi_value = 12.34;
        //Write your code here without removing the existing code.
	//the variable 'weights' and 'values' contains array of integers of size n.
	//modified the double maxi_value containing the output of the program up to 2 places of decimal.
		    return maxi_value;
        }
}