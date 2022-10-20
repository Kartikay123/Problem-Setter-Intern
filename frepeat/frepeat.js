var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= first_repeat(sub,b);
    console.log(res);
});




function first_repeat(arr, n)
{
    var repeat_element = -1;
    // Write your code here without removing the existing code
    // the variables arr contains the array of integer  n is the size of an array.
    // modified the variable repeat_element contain the output of the program in integer format..
	return repeat_element;
}

