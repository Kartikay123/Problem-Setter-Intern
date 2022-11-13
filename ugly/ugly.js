var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);

var res= nthUgly(b);
    console.log(res);
});




function nthUgly(n)
{
    var count_ugly=-1;
    // Write your code here without removing the existing code.
    // n is the input variable in integer format.
    // modified the variable 'count_ugly' which contain the output of the program.
    return count_ugly;
}

