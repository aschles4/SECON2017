#include "Message.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	//string test = "#0_1@code:1,2,3,5,4$";
	//string test = "#0_1@DRIVE:NORTH$";
	string test = "#asdfasdfadsf$";
	Message oTest(test);
	//cout << oTest.getSender();
	cout << "To Robot: " << oTest.getRecipient();
	cout << "\tFrom Robot: " << oTest.getSender();
	cout << "\t Command: " << oTest.getCommand();
	cout << "\t Message: " << oTest.getBody() << endl;
}
