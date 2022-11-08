var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let k= Number(x[2]);

var res= rotate_array(sub,b,k);
let s='';
for(var i=0;i<b;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function rotate_array(arr,n,k)
{
	var k_step_rotation=[0];
    //Write your code here without removing the exising code.
	//the variable 'arr' contains array of integers of size n and integer k.
	//modified the array 'k_step_rotation' return the output of the program.
	return k_step_rotation;
    
}

