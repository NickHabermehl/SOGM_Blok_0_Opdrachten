#include <iostream>

using namespace std;

int array[] = {110,220,440,880};

void print_array(int a[])
{
	for(int index=0; index < 4; index++)
	{
		cout << index << ", " << a[index] << endl;
	}
}


int main()
{	
	print_array(array);

	return 0;
}
