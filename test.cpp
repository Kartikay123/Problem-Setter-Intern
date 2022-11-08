#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c=0;
    cout<<"[";
for(int i=99;i<1210;i+=1)
{
	
if(i&1)
cout<<i-4<<',';
else
cout<<i-1<<',';
c++;
if(c==(991))
break;
 }

cout<<"]";
cout<<c<<endl;
	return 0;
}
