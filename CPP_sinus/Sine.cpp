#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    ofstream sinus;
    sinus.open ("sinus.txt");
    
    string str1;
    string str2;
    
    cout << "Enter samplerate in Hz : ";
    getline (cin,str1);
    cout << "You typed: " << str1 << endl;
    cout << endl;
    cout << "Enter frequency in Hz : ";
    getline (cin,str2);
    cout << "You typed: " << str2 << endl;
    cout << endl;
    
    int samplerate = atoi(str1.c_str());
    int frequency = atoi(str2.c_str());
    int period = samplerate/frequency;
    
    cout << "Period of Sine in Samples : " << period << endl;
    
    for ( int n=0; n<samplerate; n++){
        float radpersamp = (2*M_PI)/period;
        float radintijd = radpersamp*n;
        float amp = sin (radintijd);
        
        sinus << n << ", " << amp << endl;
    }
    sinus.close();
    return 0;
}
