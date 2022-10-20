var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let n= Number(x[0]);
let m= Number(x[1]);
let arr1 = JSON.parse(x[2]);
let arr2 = JSON.parse(x[3]);
var res= median_array(arr1,arr2,n,m);
console.log(parseFloat(res).toFixed(2));
});



function median_array(arr1,arr2,n,m)
{
   
    var median_value=12.425;
    //Write your code here without removing the exising code
    //the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the double median_value contain the output of the program upto 2 place of decimal.
    return median_value;
}

