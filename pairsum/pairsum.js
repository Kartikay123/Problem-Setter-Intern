var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let b1= Number(x[2]);
var res= count_pair(sub,b,b1);
console.log(res);
});



function count_pair(arr,n,k)
{
	var counter = 0;
	//Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and an integer k.
	//modified the integer variable 'counter' and return it.
	return counter;
    
}

