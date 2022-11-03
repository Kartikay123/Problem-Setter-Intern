var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
let sum= Number(x[2]);

var res= count_ways(sub,b,sum);
    console.log(res);
});




function count_ways(arr,n,sum)
{
    var minimum_coins=-1;
    //Write your code here without removing the existing code
    //the variable 'coins' contains array of integers of size n and an integer sum.
    //modified the variable 'minimum_coins' contain the output of the program in integer format.
    return minimum_coins;
}

