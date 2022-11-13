var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= threeEqualParts(sub,b);
let s='';
for(var i=0;i<2;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function threeEqualParts(arr,n)
{
	var binary_value=[0,0];
    //Write your code here without removing the existing code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'binary_value' return the output of the program.
	return binary_value;
    
}

