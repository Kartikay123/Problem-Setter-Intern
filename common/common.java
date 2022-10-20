public static void main(String[] args)
{
        Scanner sc=new Scanner(System.in);
        int n1 = sc.nextInt(); 
        int n2 = sc.nextInt(); 
        int n3 = sc.nextInt(); 
        int []arr1= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
        int []arr2= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
        int []arr3= Arrays.stream(sc.next().split("[,\\[\\]]")).filter(w-> !w.equals("")).mapToInt(Integer::parseInt).toArray();
        Solution g=new Solution();
        ArrayList<Integer>res=g.find_intersection(arr1,arr2,arr3,n1,n2,n3);  
        for(int i=0;i<res.size();i++)
        System.out.print(res.get(i) + " ");  
      
}
}
class Solution
{
	public static ArrayList<Integer>  find_intersection(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
    {
        ArrayList<Integer> common_elements = new ArrayList<>();
       	// Write your code here without removing the exising code
        // the variable 'arr1','arr2' and 'arr3' contains array of integers of size n1,n2,n3.
        //modified the array 'common_elements' as output of the program.
		return common_elements;
    }
}