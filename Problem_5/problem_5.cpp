#include <iostream>

typedef unsigned long long BigLong;

using namespace std;

bool isDivisible(BigLong number){
	bool isDivisible = true;
	
	for(int i = 2; i<=20; i++){
		if(number % i != 0){
			isDivisible = false;
			break;
		}
	}

	return isDivisible;
}

int main(void){
	BigLong number = 1;
	while(!isDivisible(number)){
		number++;
	}
	cout << number << endl;
	return 0;
}