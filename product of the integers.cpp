//program to calculate the product of the integers
#include<iostream>
using namespace std;

//create a class 
class addition{
	
	public:
		int a;
		int b;
		int c;
		
		int calculateProduct(){
		return(a*b*c);
		}
      };
      
int main(){
	//create object of addition class
	addition addition1;
	
	//assign values to data members
	addition1.a=22;
	addition1.b=30;
	addition1.c=50;

	//calculate and display the products of the integer
	cout<<"product of the integer =:"<<addition1.calculateProduct()<<endl;
	
	return 0;
}