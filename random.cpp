#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses 
	int guess=0;
	int n=0;
	
	for(;;)
	{ //helloworld
	
		// increment guess counter
		n=n+1;
		
		// read input from user
		
		cout << "input a number";
		cin >> guess;
		
		// compare input from user to random number
		// print out winner, too high or too low message
		//

		 if(random_number==guess)
		{
			cout << "winner\n";
		}
		
		 if(random_number<guess)
		{
			cout << "too high\n";
		}
		 if(random_number>guess)
		{
			cout << "too low\n";
		}
		
	}

	return 0;
}