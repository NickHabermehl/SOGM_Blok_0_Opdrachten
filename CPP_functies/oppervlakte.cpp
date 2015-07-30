#include <iostream>

using namespace std;

int oppervlakte(int lengte,int breedte)
{
	return lengte*breedte;
}

int main()
{
	int lengte;
	int breedte;
	cout << "Lengte: ";
	cin >> lengte;
	cout << "breedte: ";
	cin >> breedte;
	int op1=oppervlakte(lengte,breedte);
	
	cout << "Totale oppervlakte: " << op1 <<endl;

	return 0;
}
