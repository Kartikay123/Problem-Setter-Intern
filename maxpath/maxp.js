var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let n= Number(x[0]);
let m= Number(x[1]);
let arr1 = JSON.parse(x[2]);
let arr2 = JSON.parse(x[3]);
var res= max_sum(arr1,arr2,n,m);
console.log(res);
});

function max_sum(arr1,arr2,n,m)
{
    var max_path =-1;
    //Write your code here without removing the existing code.
	//the variable 'arr1' and 'arr2' contains array of integers of size n and m respectively.
	//modified the max_path contain the output of the program in integer format.
    return max_path;
}

