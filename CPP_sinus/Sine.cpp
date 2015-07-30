#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream sinus;
    sinus.open ("sinus.txt");
    
    for ( int n=0; n<100; n++){
        float radpsamp = (2*M_PI)/100;
        float radtime = radpsamp*n;
        float amp = sin (radtime);
        
        sinus << n << ", " << amp << endl;
    }
    sinus.close();
    return 0;
}