
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		
			
			String str1=sc.nextLine();
            String str2=sc.nextLine();		
		    Solution g=new Solution();
			if(g.isPermutation(str1,str2))
            {
                System.out.println("True");
            }
            else
            {
                System.out.println("False");
            }
            
			
	}
}
class Solution
{
	public static boolean isPermutation(String str1,String str2)
        {
			boolean check_string=true;
            // Write your code here without removing the existing code
            // the variable 'str1' and 'str2' contains array of character.
            // modified the variable 'check_string' contain the output of the program in boolean format.
		    return check_string;
           
        }
}