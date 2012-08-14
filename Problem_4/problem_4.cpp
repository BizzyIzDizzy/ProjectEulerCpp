#include <iostream>
#include <stdlib.h>

using namespace std;

bool isPalindrome(char * buffer){
	size_t length = strlen(buffer);
	bool isPalindrome = true;
	for(int i = 0; i<length/2; i++){
		if(buffer[i] != buffer[length-i-1]){
			isPalindrome = false;
			break;
		}		
	}
	return isPalindrome;
}

int main(void){
	int biggestPalindrome = 0;

	for(int x = 100; x<=999; x++){
		for(int y = 100; y<=999; y++){
			char buffer[50];
			int number = x * y;
			sprintf_s(buffer, "%d", number);
			if(isPalindrome(buffer) && number >= biggestPalindrome){
				biggestPalindrome = number;
			}
		}
	}

	cout << biggestPalindrome << endl;

	return 0;
}