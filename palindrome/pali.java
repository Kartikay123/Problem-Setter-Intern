
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		
			
			String str1=sc.nextLine();
           
		    Solution g=new Solution();
			if(g.isPalindrome(str1))
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
            
			
	}
}
class Solution
{
	public static boolean isPalindrome(String str1)
        {
			boolean check_string=true;
            // Write your code here without removing the existing code.
            // the variable 'str1' contains the string as input.
            // modified the variable 'check_string' contain the output of the program in boolean format.
		    return check_string;
           
        }
}