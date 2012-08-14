#include <iostream>

using namespace std;

bool isPrime(int number){
	bool isPrime = true;

	int limit = static_cast<int>(sqrtl(number));
	for(int i = 2; i<=limit; i++){
		if(number % i == 0){
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

int main(void){
	int counter = 0;
	int latestPrime = 1;
	int number = 2;
	while(counter <10001){
		if(isPrime(number)){
			counter++;
			latestPrime = number;
		}
		number++;
	}

	cout << latestPrime << endl;
	return 0;
}