var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= minimum_jumps(sub,b);
    console.log(res);
});




function minimum_jumps(arr, n)
{
    var minimum_value=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'minimum_value' contain the output of the program in integer format.
    return minimum_value;
}

