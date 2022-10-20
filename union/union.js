var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let n= Number(x[0]);
let m= Number(x[1]);
let arr1 = JSON.parse(x[2]);
let arr2 = JSON.parse(x[3]);
var res= union_size(arr1,arr2,n,m);
console.log(res);
});

function union_size(arr1,arr2,n,m)
{
    var resultant_size =-1;
    //Write your code here without removing the existing code.
	//the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the resultant_size contain the output of the program in integer format.
    return resultant_size;
}

