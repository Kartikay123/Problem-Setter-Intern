var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let b1= Number(x[2]);
let b2= Number(x[3]);

var res= rangeSum(sub,b,b1,b2);
    console.log(res);
});




function rangeSum(arr,n,lower,upper)
{
    var count_sum =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and lower and upper is an integer.
	//modified the variable 'count_sum' contain the output of the program in integer format.
    return count_sum;
}

