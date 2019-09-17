//Program consisting of three functions that finds the middle number.
#include <iostream>
using namespace std;
int max3 (int, int, int);// prototype
int min3 (int, int, int); //prototype
int middle (int, int, int); //prototype
int main ()
{
int a;
int b;
int c;
int mx;
int mn;
int md;

cout << "Enter a value for a." << endl;
cin >> a;
cout << "Enter a value for b." << endl;
cin >> b;
cout << "Enter a value for c." << endl;
cin >> c;
 
mx = max3 (a,b,c);
mn = min3 (a, b, c);
md = middle (a,b,c); //a,b,c are arguments.
cout << "Middle number = " << md<< endl;
}

//function definition
int max3 (int a, int b, int c) // int a, b, and c are parameters.
{
return mx = (max (a, max (b,c))
}

//function definition
int min (int a, int b, int c)
{
return mn = (min (a, min (b,c))
}

//function definition
int middle (int a, int b, int c) // int a, b, and c are parameters.
{
return md = (a + b + c) - (mx + mn)
}
