var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= major_element(sub,b);
    console.log(res);
});




function major_element(arr, n)
{
    var maximum_times=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'maximum_times' contain the output of the program in integer format.
    return maximum_times;
}

