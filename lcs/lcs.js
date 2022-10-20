var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
var res= longest_subsequence(x[0],x[1]);
console.log(res);
});

function longest_subsequence(str1,str2)
    {   
    let longest_value=0;
    //Write your code here without removing the existing code
	//the variables string 'str1' and 'str2' contains the input values in the string format
	//modified the variable 'longest_value' contain the output of the program
    return longest_value;
    };
    