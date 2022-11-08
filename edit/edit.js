var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
var res= minimum_distance(x[0],x[1]);
console.log(res);
});

function minimum_distance(str1,str2)
    {   
    let minimum_value=-1;
    //Write your code here without removing the existing code
	//the variables string 'str1' and 'str2' contains the input values in the string format
	//modified the variable 'minimum_value' contain the output of the program.
    return minimum_value;
    };
    