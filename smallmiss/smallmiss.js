var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= smallest_positive(sub,b);
    console.log(res);
});




function smallest_positive(arr, n)
{
    var missing_number=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'missing_number' contain the output of the program in integer format.
    return missing_number;
}

