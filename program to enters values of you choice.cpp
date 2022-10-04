//program to tells you to enter numbers
#include<iostream>
using namespace std;
int main(){
	int i,n,z,sum=0;
	cout<<"Enter the starting point"<<endl;
	cin>>n;
	cout<<"Enter the ending point"<<endl;
	cin>>z;
	for(i=n;i=z;i++){
		cout<<i<<"";
	sum+i;
	}
	cout<<"The sumof"<<n<<"and"<<z<<"is"<<sum;
	return 0;
}