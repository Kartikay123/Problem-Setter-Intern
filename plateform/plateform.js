var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let n= Number(x[0]);
let arr1 = JSON.parse(x[1]);
let arr2 = JSON.parse(x[2]);
var res= minimum_plateform(arr1,arr2,n);
console.log(res);
});

function minimum_plateform(arr,dep,n)
{
    var mini_value =-1;
    //Write your code here without removing the existing code.
	//the variable 'arr' and 'dep' contains array of integers of size n.
	//modified the mini_value contain the output of the program in integer format.
    return mini_value;
}

