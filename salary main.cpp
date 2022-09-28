//program to print the net bonus
#include<iostream> 
using namespace std;
int main()
{
	int salary,bonus,yearofservice;
	float netbonus;
	
cout<<"enter salary:";
cin>>salary;
cout<<"how many years employee have served?:";
cin>>yearofservice;
if(yearofservice>10)
{
	netbonus=(salary*0.1);
	cout<<"your net bonus is $"<<netbonus;
}
else if(yearofservice>=6&&yearofservice<=10)
{
	netbonus=(salary*0.8);
	cout<<"your net bonus is$"<<netbonus;
}
else if(yearofservice<6)
{
	netbonus=(salary*0.5);
	cout<<"your net bonus is $"<<netbonus;
}
return 0;
}