var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let b1= Number(x[2]);
var res= maximum_profit(sub,b,k);
    console.log(res);
});




function maximum_profit(prices,n,k)
{
    var maxi_value=-1;
    //Write your code here without removing the existing code
	//the variable 'prices' contains array of integers of size n.
	//modified the variable 'maxi_value' contain the output of the program in integer format.
    return maxi_value;
}

