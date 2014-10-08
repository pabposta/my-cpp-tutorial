#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>

int main() {
	// our contstants
	const int MAX_NUMBER = 100;
	const int MAX_GUESSES = 10;
	const int CHARACTERS_TO_CLEAR = 1024;
	
	// we are going to ask the player if she wants to play again. he we will store her answer
	std::string play_again;
	
	// our game's main loop
	do {	
		// create a random number between 1 and MAX_NUMBER to be guessed
		srand(time(0));
		int number = rand() % MAX_NUMBER + 1;
		
		// the range the number is in. This moves with the user's guesses
		int min_to_guess = 1;
		int max_to_guess = MAX_NUMBER;
		
		// init the number of guesses left
		int guesses_left = MAX_GUESSES;
		
		// the number the user guesses. init it to a value sure to be different from our secret number
		int guess = MAX_NUMBER + 1;
		
		while (guesses_left > 0 && guess != number) {
			// read the user's guess from keyboard
			std::cout << "Guess a number between " << min_to_guess << " and " << max_to_guess << ". You have " << guesses_left << " guesses left: " << std::endl;
			std::cin >> guess; 
			
			// make sure it is a valid integer
			if (std::cin.fail()) {
				std::cout << "Only integers are allowed. Now you loose a try" << std::endl;
			}
			// compare the guess and the secret number
			else {
				if (guess < number) {
					std::cout << "The number is bigger than that" << std::endl;
					// adjust min
					if (guess > min_to_guess) {
						min_to_guess = guess;
					}
				}
				else if (guess > number) {
					std::cout << "The number is smaller than that" << std::endl;
					// adjust max
					if (guess < max_to_guess) {
						max_to_guess = guess;
					}
				}
			}
			
			// clear the input
			std::cin.clear();
			std::cin.ignore(CHARACTERS_TO_CLEAR, '\n');
			
			// decrease the number of guesses left
			guesses_left--;
		}
		
		// see if we won or lost. the winning condition is to have guessed the secret number, so check for that
		if (guess == number) {
			std::cout << "Congratulations, you got it!" << std::endl;
		}
		// not the correct guess, we lost
		else {
			std::cout << "Congratulations, you got it!" << std::endl;
		}
		
		// ask the player if she wants to play again
		std::cout << "Would you like to play again? [yes/no] ";
		std::cin >> play_again;
		
		// convert string to uppercase
		std::transform(play_again.begin(), play_again.end(), play_again.begin(), toupper);
	} while (play_again.compare("YES") == 0 || play_again.compare("Y") == 0); // accept both yes and y as answers
	
	return 0;
}
