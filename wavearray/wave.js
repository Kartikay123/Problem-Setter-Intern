var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= wave_array(sub,b);
let s='';
for(var i=0;i<b;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function wave_array(arr,n)
{
	var lex_smallarray=[];
    //Write your code here without removing the exising code
	//the variable 'arr' contains array of integers of size n.
	//modified the array 'lex_smallarray' contains the output of the program.
	return lex_smallarray;
    
}

