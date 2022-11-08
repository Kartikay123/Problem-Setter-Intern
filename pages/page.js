var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let k= Number(x[2]);
var res= minimum_pages(sub,b,k);
    console.log(res);
});




function minimum_pages(arr,n,k)
{
    var allocated_value=-1;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the variable 'allocated_value' contain the output of the program in integer format.
    return allocated_value;
}

