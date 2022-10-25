var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= maximum_profit(sub,b);
    console.log(res);
});




function maximum_profit(prices,n)
{
    var maxi_value =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'maxi_value' contain the output of the program in integer format.
    return maxi_value;
}

