var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= max_sum(sub,b);
    console.log(res);
});




function max_sum(arr, n)
{
    var maxi_value=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'maxi_value' contain the output of the program in integer format.
    return maxi_value;
}

