var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let n= Number(x[0]);
let m= Number(x[1]);
var res= calculate_degree(n,m);
console.log(parseFloat(res).toFixed(5));
});



function calculate_degree(arr1,arr2,n,m)
{
   
    var angle = 6.4566;
    // Write your code here without removing the existing code
    // 'hours' and 'minutes' are input variables in integer format.
    // modified the double 'angle' contain the output of the program.
    return angle;
}

