#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c=0;
    cout<<"[";
for(int i=-490;i<=693;i+=1)
{
if(i%2==0)
cout<<i+5<<',';
else if(i%5==0)
cout<<i+3<<',';
else if(i%8==0)
cout<<i-9<<',';
else if(i%3==0)
cout<<i+7<<',';
else
cout<<i<<',';
c++;
if(c==(909))
break;
 }

cout<<"]";
cout<<c<<endl;
	return 0;
}
