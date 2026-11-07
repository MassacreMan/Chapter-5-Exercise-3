// This program asks for the speed of a vehicle (in mph) and the number of hours travelled. It then calculates and displays the distance traveled for each hour of that time period.
#include <iostream>
using namespace std;

int main()

{
	//Variables
	int speed; //The speed of the vehicle
	int time; //The number of hours traveled
	
	
	//Ask the user for the vehicle's speed and number of hours traveled
	cout << "Enter the speed of the vehicle in mph: ";
	cin >> speed;
	cout << "Enter the number of hours traveled: ";
	cin >> time;

	do

	{
		// Get the distance for each hour traveled
		for (int i = 1; i <= time; i++)
		{
			int distance = speed * i;
			cout << "After hour " << i << ", the distance traveled is: " << distance << " miles." << endl;
		}

	}

	while (time < 1);

}