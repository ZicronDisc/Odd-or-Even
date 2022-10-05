#include <iostream>
using namespace std;

void identifier(int identify) {
	char firstText[20] = "Number is ";
	char oddText[20] = "ODD";
	char evenText[20] = "EVEN";

	/*if (identify % 2 == 0) {
		cout << strcat(firstText, evenText);
	}
	else {
		cout << strcat(firstText, oddText);
	}*/

	//Alternative
	//Uncomment if strcat fails due to error code C4996 - 'strcat may be unsafe'
	if (identify % 2 == 0) {
		cout << firstText << evenText;
	}
	else {
		cout << firstText << oddText;
	}
}

int main() {

	int numberInput;
	cout << "Enter a number: " << endl;
	cin >> numberInput;

	identifier(numberInput);

	return 0;
}
