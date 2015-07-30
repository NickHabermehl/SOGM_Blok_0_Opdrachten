#include <iostream>

using namespace std;

int array1[] = {110,220,440,880};
int array2[] = {1,10,20,40,400,2000,1000,10000};
int array3[] = {999,543,456,987};

int max_array(int a[],int length)
{
    int max = a[1];
    
    for (int index=0; index < length; index++)
    {
        if (max < a[index])
            max = a[index];
    }
    
    return max;
}

int main()
{
    cout << "Highest value: " << max_array(array1,6) << endl;
    cout << "Highest value: " << max_array(array2,8) << endl;
    cout << "Highest value: " << max_array(array3,4) << endl;
    
    return 0;
}