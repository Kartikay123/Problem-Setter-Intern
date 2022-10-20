var stdin= process.openStdin();
stdin.addListener("data", function(d)
{
var x= d.toString().trim().split("\n");
let b= Number(x[0]);
let sub = JSON.parse(x[1]);
var res= calculate_price(sub,b);
let s='';
for(var i=0;i<b;i++)
{
s+=res[i]+" ";
}
console.log(s);
});



function calculate_price(arr,n)
{
	var stock_price=[];
    // Write your code here without removing the existing code.
    // the variable 'arr' contains array of integers of size n.
    // modified the array 'stock_price' contains the output of the program.
	return stock_price;
    
}

