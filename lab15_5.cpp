#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a, int *b, int *c, int *d) {
    int arr[] = {*a, *b, *c, *d};
    int rand1 = rand() % 4;
    int rand2 = rand() % 4;
    
    int temp = arr[rand1];
    arr[rand1] = arr[rand2];
    arr[rand2] = temp;
    
    *a = arr[0];
    *b = arr[1];
    *c = arr[2];
    *d = arr[3];
}
