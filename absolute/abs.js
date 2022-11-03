var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= sort_the_array(sub,b);
let s='';
for(var i=0;i<b;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function sort_the_array(arr,n)
{
	var sorted_array=arr;
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'sorted_array' in sorted order.
	return sorted_array;
    
}

