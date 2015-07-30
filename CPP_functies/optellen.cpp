#include <iostream>

using namespace std;

int optellen(int getal1,int getal2)
{
	return getal1+getal2;
}

int main()
{
	int getal1;
	int getal2;
	cout << "getal1: ";
	cin >> getal1;
	cout << "getal2: ";
	cin >> getal2;
	int op1=optellen(getal1,getal2);
	
	cout << "Totale optelling: " << op1 <<endl;

	return 0;
}
