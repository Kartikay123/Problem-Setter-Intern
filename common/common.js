var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b1= Number(x[0]);
let b2= Number(x[1]);
let b3= Number(x[2]);
let arr1 = JSON.parse(x[3]);
let arr2 = JSON.parse(x[4]);
let arr3 = JSON.parse(x[5]);
var res= find_intersection(arr1,arr2,arr3,b1,b2,b3);
let s='';
for(var i=0;i<res.length;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function find_intersection(arr1,arr2,arr3,n1,n2,n3)
{
	var common_elements=[0]
    // Write your code here without removing the exising code
    // the variable 'arr1','arr2' and 'arr3' contains array of integers of size n1,n2,n3.
    //modified the array 'common_elements' as output of the program.
	return common_elements;
    
}

