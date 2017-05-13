#include <iostream>
#include <string>
using namespace std;

int main() {
	string choice;

	cout << "Enter something in: ";  //Ask user to input something
	cin >> choice;

		if (choice[0] == '-') { //if the first character is "-", it is a negative number
			cout << choice << " is a negative!" << endl;
      }
	
		else if (isdigit(choice[0])) {  // if the first character is a digit, then proceed
		  if (choice[0] == '0') {//if the first character entered is 0
			  cout << choice << " is zero!" << endl;
			  } else {
				    cout << choice << " is positive!" << endl;
            }
      }
		else if (isalpha(choice[1])) { //if there is a second character/value then it is a string
			cout << choice << " is a string!" << endl;
			}
		else { //if it is not negative, zero, positive, or a string- then it is a character.
			cout << choice << " is a character!" << endl;
			}
		
	system("pause");
	return 0;
}
