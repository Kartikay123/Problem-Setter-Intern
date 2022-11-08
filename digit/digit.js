var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
if(isdigit(x[0]))
console.log("YES");
else
console.log("NO");
});

function isdigit(str1)
{   
    var check_digit=true;
    // Write your code here without removing the existing code.
    // the variable 'str1' contains the string as input.
    // modified the variable 'check_digit' contain the output of the program in boolean format.
    return check_digit;
};
    