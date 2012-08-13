#include <iostream>

using namespace std;

int main(void){
	long sum = 0L;
	int first = 1;
	int second = 1;
	while(first < 4000000){
		if(first % 2 == 0){
			sum += first;
		}
		int temp = first + second;
		second = first;
		first = temp;
	}

	cout << sum;

	return 0;
}