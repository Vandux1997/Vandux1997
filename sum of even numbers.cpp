//program to check sum of all numbers from 1-10
#include<iostream>
using namespace std;
int main(){
	int i,sum=0;
	for(i=0;i<=10;i++){
		cout<<i++<<"";
		sum=sum+i;
		}
cout<<"sum of all numbers"<<sum;
return 0;
}