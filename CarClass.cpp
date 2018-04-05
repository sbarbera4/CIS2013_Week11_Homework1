#include<iostream>
#include<cstring>
using namespace std;

class Car
{
public:
	int gastank;
	int gas;
	int on;
	int year;
	int speed;
	string color;
	string make;
	string model;
	
	
	void printdet()
	{
		cout << "year: " << year << endl;
		cout << "color of car: " << color << endl;
		cout << "manufactured by: " << make << endl;
		cout << "model of car: " << model << endl;
		
		
	}
	void printcar()
	{
		if(on == 1)
		{
			cout << "car is currently on." << endl;
			cout << "current speed is: " << endl;
			cout << "remaining gas: " << gas << "/" << gastank << endl;
		}
		else
		{
			cout << "car is currently off. to turn it on please press one." << endl;
			cin >> on;
		}
	}
};



int main()
{
	Car a;
	char print;
	
	cout << "enter the year the car was made: " << endl;
	cin >> a.year;
		cout << "enter the color of the car: " << endl;
	cin >> a.color;
	cout << "enter the manufacturer of the car: " << endl;
	cin >> a.make;
	cout << "enter the model of the car: " << endl;
	cin >> a.model;

	
	cout << "would you like to print this car?   Y/N" << endl;
	cin >> print;
	
	if(print == 'Y' || print == 'y')
	{
		a.printdet();
	}
	else
	{
		cout << "placeholder" << endl;
	}
	
	return 0;
}
















