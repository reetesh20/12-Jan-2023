// swap 2 numbers without using 3rd variable

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x + y; 
    y = x - y; 
    x = x - y; 
    cout << "After Swapping: x =" << x << ", y=" << y;
}

