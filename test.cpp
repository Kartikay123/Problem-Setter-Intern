#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c=0;
    cout<<"[";
for(int i=1530;i>=0;i-=1)
{
cout<<i<<',';
c++;
if(c==1458)
break;
}

cout<<"]";
cout<<c<<endl;
	return 0;
}
