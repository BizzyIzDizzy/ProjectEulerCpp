#include <iostream>
#include <math.h>

using namespace std;

typedef unsigned long long BigLong;

bool isPrime(BigLong number){
	BigLong limit = sqrtl(number);

	for(int i = 2; i<=limit; i++){
		if(number % i == 0){
			return false;
		}
	}

	return true;
}

int main(void){
	BigLong number = 600851475143L;
	BigLong limit = sqrtl(number);
	BigLong lastPrimeFactor = 0L;
	for(BigLong i = 1; i<=limit; i++){
		if(isPrime(i) && number % i == 0){
			lastPrimeFactor = i;
		}								
	}
	cout << lastPrimeFactor << endl;

	return 0;
}