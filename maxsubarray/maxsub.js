var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let b1= Number(x[2]);
var res= find_subarray(sub,b,b1);
let s='';
for(var i=0;i<2;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function find_subarray(arr,n,k)
{
	var subarray_sum=[-1 -1];
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n and an integer k.
	//modified the array 'subarray_sum' having the subarray with k sum.
	return subarray_sum;
    
}

