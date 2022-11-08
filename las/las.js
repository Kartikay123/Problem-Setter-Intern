var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= longest_alternate_subs(sub,b);
    console.log(res);
});




function longest_alternate_subs(arr, n)
{
    var maximum_length=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'maximum_length' contain the output of the program in integer format.
    return maximum_length;
}

