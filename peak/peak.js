var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= peak_element(sub,b);
    console.log(res);
});




function peak_element(arr, n)
{
    var index_element=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'index_element' contain the output of the program in integer format.
    return index_element;
}

