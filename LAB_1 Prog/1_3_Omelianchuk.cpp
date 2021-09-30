#include <iostream>

using namespace std;

int main()
{
	cout << "Lab1" << endl;
    float distance, gasolinePer100Km, value, liters, cost;

	cout << "Calculating the cost of the trip"<< endl;
	cout << "Enter initial data:"<< endl;
	cout << "Distance to destination (km)"<<endl;
	cin >> distance;
	cout << "Gasoline consumption (liters per 100 km)"<<endl;
	cin >> gasolinePer100Km;
	cout << "Price per liter of gasoline (UAH)";
	cin >> value;

        if((distance<0)||(value<0)||(gasolinePer100Km<0)){
        cout<<"ERROR"<<endl;
        }
        else{
	distance *=2;
	liters = gasolinePer100Km*(distance/100);
	cost = value*liters;

	cout <<"A trip to the country and back will cost "<<cost <<" UAH."<<endl;
}
}