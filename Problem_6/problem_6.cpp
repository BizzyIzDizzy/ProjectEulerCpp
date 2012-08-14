#include <iostream>

typedef unsigned long long BigLong;

using namespace std;

int main(void){
	BigLong sumOfSquares = 0;
	BigLong squareOfSums = 0;

	int limit = 100;

	for(int i = 1; i<=limit; i++){
		sumOfSquares += i*i;
		squareOfSums += i;
	}
	squareOfSums *= squareOfSums;

	cout << "Sum of squares: " << sumOfSquares << endl;
	cout << "Square of sums: " << squareOfSums << endl;
	cout << "SquareOfSums-SumOfSquares = " << (squareOfSums-sumOfSquares) << endl;

	return 0;
}