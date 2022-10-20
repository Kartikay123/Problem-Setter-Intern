
	
	public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
            int n = sc.nextInt(); 
            int m= sc.nextInt(); 
		    Solution g=new Solution();
            double ans=g.calculate_degree(n,m);
            System.out.println(String.format("%.5f",ans));
          
	}
}
class Solution
{
	public static double calculate_degree(int hours,int minutes)
        {
            
			double angle = 6.4566;
            // Write your code here without removing the existing code
            // 'hours' and 'minutes' are input variables in integer format.
            // modified the double 'angle' contain the output of the program.
            return angle;
        }
}