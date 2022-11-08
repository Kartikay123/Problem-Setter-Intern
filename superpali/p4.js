var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
var res= super_palindrome(x[0],x[1]);
console.log(res);
});

function super_palindrome(s1,s2)
{   
    var super_palindrome_number=-1;
    //Write your code here without removing the existing code
	//the variables string 's1' and 's2' contains the input values in the string format.
	//modified the variable 'super_palindrome_number' contain the output of the program.
    return super_palindrome_number;
};
    