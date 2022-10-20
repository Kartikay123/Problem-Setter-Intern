
	
	public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
            int m= sc.nextInt(); 
			int []arr1= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
            int []arr2= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            double ans=g.median_array(arr1,arr2,n,m);
            System.out.println(String.format("%.2f",ans));
          
	}
}
class Solution
{
	public static double median_array(int arr1[],int arr2[],int n,int m)
        {
            
			double median_value = 12.34;
	        //Write your code here without removing the exising code
	        //the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	        //modified the double median_value contain the output of the program upto 2 place of decimal.
		    return median_value;
        }
}