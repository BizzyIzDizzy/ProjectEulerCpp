#include <iostream>

typedef unsigned long long BigLong;

using namespace std;

bool isPrime(BigLong number){
	bool isPrime = true;

	int limit = static_cast<int> (sqrtl(number));

	for(int i = 2; i<=limit; i++){
		if(number % i == 0){
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

int main(void){
	BigLong sum = 0;

	int number = 2;
	while(number<2000000){
		if(isPrime(number)){
			sum+=number;
		}

		number++;
	}

	cout << sum << endl;
	return 0;
}