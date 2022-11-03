var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
if(isPermutation(x[0],x[1]))
console.log("True");
else
console.log("False");
});

function isPermutation(str1,str2)
{   
    var check_string=true;
    // Write your code here without removing the existing code
    // the variable 'str1' and 'str2' contains array of character.
    // modified the variable 'check_string' contain the output of the program in boolean format.
    return check_string;
};
    