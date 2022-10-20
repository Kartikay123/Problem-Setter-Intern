var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let b1= Number(x[2]);
var res= triple_sum(sub,b,b1);
    console.log(res);
});




function triple_sum(arr,n,k)
{
    var value=-1;
    //Write your code here without removing the existing code.
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'value' contain the output of the program in integer format.
    return value;
}

