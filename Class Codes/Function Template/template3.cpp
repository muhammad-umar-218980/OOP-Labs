#include <iostream>
using namespace std;

template <class atype>
int find(atype* array, atype value, int size)
{
	for(int j=0; j<size; j++)
		if(array[j]==value)
			return j;
		return -1;
}


int main()
{	
	char chrArr[] = {'a', 'e', 'i', 'o', 'u'}; //array
	char ch = 'e'; //value to find
	
	int intArr[] = {1, 3, 5, 9, 11, 13};
	int in = 6;
	
	long lonArr[] = {1L, 3L, 5L, 9L, 11L, 13L};
	long lo = 11L;
	
	double dubArr[] = {1.0, 3.0, 5.0, 9.0, 11.0, 13.0};
	double db = 4.0;

	cout << "\n e in character Array:\t index= " << find(chrArr, ch, 6);
	cout << "\n 6 in integer Array: \tindex= " << find(intArr, in, 6);
	cout << "\n11 in long Array: \tindex= " << find(lonArr, lo, 6);
	cout << "\n 4 in double Array: \tindex= " << find(dubArr, db, 6);
	cout << endl;
	return 0;
}