//while loop program that executes descending numbers inside the given boundary.
#include <iostream>
using namespace std;
int main()
{
	int count=20;
	while(count>=10)
	{
		cout<<count<<" ";
		count=count--;
	}
	return 0;
}