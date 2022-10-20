
	
	public static void main(String[] args)
    {
			Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
			int []arr= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
		    Solution g=new Solution();
            ArrayList<Integer>res=g.calculate_price(arr,n);  
            for(int i=0;i<res.size();i++)
            System.out.print(res.get(i) + " "); 
          
	}
}
class Solution
{
	public static ArrayList<Integer> calculate_price(int arr[],int n)
        {
            ArrayList<Integer> stock_price = new ArrayList<>();
            // Write your code here without removing the existing code.
            // the variable 'arr' contains array of integers of size n.
            // modified the array 'stock_price' contains the output of the program.
            return stock_price;
        }
}