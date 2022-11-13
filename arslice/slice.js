var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= arithmetic_slices(sub,b);
    console.log(res);
});




function arithmetic_slices(arr,n)
{
    var count_value=-1;
    //Write your code here without removing the existing code.
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'count_value' contain the output of the program in integer format.
    return count_value;
}

