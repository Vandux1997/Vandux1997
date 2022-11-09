//program to calculate surface area and volume using class object
#include<iostream>
using namespace std;

//create a class 
class cylinder{
	
	public:
		int radius;
		int height;
		float volume;
		float surfaceArea;
		
		float calculateVolume(){
		return(3.142*radius*radius*height);
}
		float calculateSurfaceArea(){
		return(2*3.142*radius*radius)+(2*3.142*radius*height);
		}
      };
      
int main(){
	//create object of cylinder class
	cylinder cylinder1;
	
	//assign values to data members
	cylinder1.radius=4;
	cylinder1.height=10;

	//calculate and display the surfaceArea and volume of the cylinder
	cout<<"SurfaceArea of cylinder =:"<<cylinder1.calculateSurfaceArea()<<endl;
	cout<<"volume of cylinder =:"<<cylinder1.calculateVolume()<<endl;
	
	return 0;
}