/*
Given a sequence of 2*k characters, please print every alternate character from the first half of the sequence. 
Start printing with the first character.
	Input :
      In the first line of input, a number k is given.(1<=k<=10) In the next line, you are given a sequence of 2*k characters.
	Output
			For each of the test cases please please print every second character from the first half of a given sequence 
			(the first character should appear).

Example
					Input:
								4
								your 
								progress 
								is 
								noticeable

					Output:
								y
								po
								i
								ntc
*/

#include <iostream>
using namespace std;
 
 
int main() {
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		for(int i = 0 ; i < s.size()/2 ;i+=2){
			cout<< s[i] ;
		}
		cout<< endl;
	}
	return 0;
}
