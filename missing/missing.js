var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= find_missing(sub,b);
    console.log(res);
});




function find_missing(arr, n)
{
    var missing_element =-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n-1.
	//modified the variable 'missing_element' contain the output of the program in integer format.
    return missing_element;
}

