var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let b1= Number(x[2]);
var res= find_min_diff(sub,b,b1);
console.log(res);
});



function find_min_diff(arr,n,k)
{
	var chocolate_distribution = 0;
	//Write your code here without removing the existing code.
	//the variable 'arr' contains array of integers of size n and an integer k.
	//modified the integer variable 'chocolate_distribution' and return it.
	return chocolate_distribution;
    
}

