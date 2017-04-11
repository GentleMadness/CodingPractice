/*
Input Format
Input consists of the following space-separated values: 
int, long, long long, char, float, and double, respectively.

Output Format
Print each element on a new line in the same order it was received as input. 
Note that the floating point value should be correct up to 3 decimal places, 
and the double to 9 decimal places.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a; 
    long b; 
    long long c; 
    char d;
    float e;
    double f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    cout.setf(ios::fixed,ios::floatfield); // to set the output precision
    cout.precision(3); // floating point value is corrected up to 3 decimal places
    cout << e << endl;
    cout.precision(9); //9 decimal places for floating point
    cout<<f;
    return 0;
}