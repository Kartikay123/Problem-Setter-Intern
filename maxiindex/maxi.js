var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= max_differnce(sub,b);
    console.log(res);
});




function max_differnce(arr, n)
{
    var maximum_index = -1;
    // Write your code here without removing the existing code
    // the variables arr contains the array of integer and n is the size of an array.
    // modified the variable maximum_index contain the output of the program in integer format.
	return maximum_index;
}

