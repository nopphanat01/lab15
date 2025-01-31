#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	
	auto pa = max_element(begin(a), end(a)); 
	cout << "Address of the highest value in array A is " << &(*pa) << "\n";
	cout << "The highest value in array A is " << *pa << "\n";
	
	auto pb = max_element(begin(b), end(b)); 
	cout << "Address of the highest value in array B is " << &(*pb) << "\n";
	cout << "The highest value in array B is " << *pb << "\n";

	return 0;
}
