#include <iostream>

using namespace std;

int array1[] = {2,4,6,8,10};
int array2[] = {1,10,100,1000,10000,100000};
int array3[] = {24,48,96,192};

void print_array(int a[], int length)
{
    for (int index=0; index < length; index++)
    {
        cout << index << ", " << a[index] << endl;
    }
    
    cout << endl;
}

int rotateLeft(int a[], int length)
{
    int temp = a[0];
    
    for (int index=0; index < length; index++)
    {
        a[index] = a[index+1];
    }
    
    a[length-1] = temp;
}

int main()
{
    cout << "Orignal Arrays:" << endl;
    
    print_array(array1,6);
    print_array(array2,8);
    print_array(array3,4);
    
    cout << "Rotate to the left..." << endl;
    
    rotateLeft(array1,6);
    rotateLeft(array2,8);
    rotateLeft(array3,4);
    
    cout << "Done!" << endl;
    cout << endl;
    cout << "Rotated Arrays: " << endl;
    
    print_array(array1,6);
    print_array(array2,8);
    print_array(array3,4);
}