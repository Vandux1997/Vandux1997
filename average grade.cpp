//program to calculate average percentage and put grades
#include<iostream>
using namespace std;
int main(){
	int math,english,kiswahili,french,computer;
	float avg=0;
	cout<<"Enter marks for the subjects"<<endl;
	cin>>math>>english>>kiswahili>>french>>computer;
	
	if(avg>=70&&avg<100)
	{
		cout<<"grade ='A'";
	}
	else if(avg>=60&&avg<69)
	{
	cout<<"grade='B'";
	}
	else if(avg>=50&&avg<59)
	{
		cout<<"grade='C'";
	}
	
	else if(avg>=40&&avg<49)
	{
	cout<<"grade='D'";
	}
	else
	{
		cout<<"fail";
	}
	return 0;
	}
	
