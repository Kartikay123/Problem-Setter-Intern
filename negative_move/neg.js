var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= rearrange(sub,b);
let s='';
for(var i=0;i<b;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function rearrange(arr,n)
{
	var alternate_array=[0];
    //Write your code here without removing the exising code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'alternate_array' having alternate positive and negative numbers.
	return alternate_array;
    
}

