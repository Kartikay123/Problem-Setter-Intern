var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
var res= MinCut(x[0]);
console.log(res);
});

function MinCut(s)
{   
    var minimum_partition=-1;
    // Write your code here without removing the existing code.
    // the variable 's' contains the string as input.
    // modified the variable 'minimum_partition' contain the output of the program.
    return minimum_partition;
};
    