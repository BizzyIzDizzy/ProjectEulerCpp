#include <iostream>

using namespace std;

typedef unsigned long long BigLong;

int main(void){
	BigLong product = 0;

	for(int a = 1; a<=1000; a++){
		for(int b = 1; b<=1000-a; b++){
			int c = 1000-a-b;
			if(a*a+b*b == c*c){
				product = a*b*c;
			}
		}
	}

	cout << product << endl;

	return 0;
}