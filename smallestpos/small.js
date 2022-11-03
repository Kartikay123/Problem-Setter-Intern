var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= positive_value(sub,b);
    console.log(res);
});




function positive_value(arr, n)
{
    var smallest_value =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n-1.
	//modified the variable 'smallest_value' contain the output of the program in integer format.
    return smallest_value;
}

