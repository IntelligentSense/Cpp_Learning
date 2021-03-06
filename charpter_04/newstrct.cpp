// newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable // structure definition
{
    char name[20];
    float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable * ps = new inflatable; // allocate memory for structure
	cout << "Enter name of inflatable item: ";
	cin.get(ps -> name, 20); // method 1 for member access
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume; // method 2 for member access
	cout << "Enter price: $";
	cin >> ps -> price;
	cout << "Name: " << ps -> name << endl; // method 1
	cout << "Volume: " << (*ps).volume << " cubic feet\n";  // method 2
	cout << "Price: $" << ps -> price << "\n"; // method 1
	delete ps;
	return 0;
}
