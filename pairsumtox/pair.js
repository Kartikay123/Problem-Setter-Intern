var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let k= Number(x[2]);
var res= pair_sum(sub,b,k);
let s='';
for(var i=0;i<2;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function pair_sum(arr,n,k)
{
	var closest_sum=[0,0];
    // Write your code here without removing the existing code
    // the variable 'arr' contains array of integers of size n and an integer k.
    // modified the array 'closest_sum' having pair sum close to k.
	return closest_sum;
    
}

