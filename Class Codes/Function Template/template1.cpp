#include <iostream>
using namespace std;

int Abs(int n) //absolute value of ints
{
	if (n<0){
		return -n; //if n is negative, return -n
	}
	return n;
	
}

long Abs(long n) //absolute value of longs
{
	if (n<0){
		return -n;
	}
	return n;
}

float Abs(float n) //absolute value of floats
{
	if (n<0){
		return -n;
	}
	return n;
}

int main(){
	int x = -5, y=10;
	float a = -45.6;
	cout << "Absolute value is: " << Abs(x) << endl;
	cout << "Absolute value is: " << Abs(y) << endl;
	cout << "Absolute value is: " << Abs(a) << endl;
	return 0;
}

