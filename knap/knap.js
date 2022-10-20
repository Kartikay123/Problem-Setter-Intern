var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let n= Number(x[0]);
let arr1 = JSON.parse(x[1]);
let arr2 = JSON.parse(x[2]);
let W= Number(x[3]);
var res= knapsack(arr1,arr2,n,W);
    console.log(parseFloat(res).toFixed(2));
});

function knapsack(weights,values,n,W)
{
    var maxi_value=12.45;
 //Write your code here without removing the existing code.
	//the variable 'weights' and 'values' contains array of integers of size n.
	//modified the double maxi_value containing the output of the program up to 2 places of decimal.
    return maxi_value;
}

