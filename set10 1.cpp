#include<iostream>
#include<string.h>
using namespace std;
class Car;
class Garage
{
	public:
	   Garage(int arg)
	   {
	   	 try
	   	 {
	   	 	throw arg;
		 }
		 catch(int arg)
		 {
		 	cout<<arg<<"Verna"<<endl;
		 }
	   }
};
class Car
{
	public:
		Car(int n)
		{
			Garage g1(n);
		}
		
};

class Motor
{
	public:
		Motor()
		{
			throw Car(50);
		}
};
int main()
{
	try
	{
		Motor no1;
	}
	catch(...)
	{
		cout<<"farari";
	}
	return 0;
}
