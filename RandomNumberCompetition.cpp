#include <iostream>
#include <stdlib.h>

using namespace std;


int messageByValue ()
{
	int number;

	number = rand() % 101;
	
	return number;
}

void messageByReference ()
{
	int numberTwo;
	
	numberTwo = rand() % 101;
	if(numberTwo >= 1 && numberTwo <= 15){
	    cout << numberTwo << endl;
		cout << "Oh, you're almost there?" << endl;
	}
	else if(numberTwo >= 16 && numberTwo <= 35){
	    cout << numberTwo << endl;
		cout << "Aw cmon, you can do better than that!" << endl;
	}
	else if(numberTwo >= 36 && numberTwo <= 60){
	    cout << numberTwo << endl;
		cout << "Sorry. You're not close enough!" << endl;
	}
	else {
	    cout << numberTwo << endl;
		cout << "You're up big. Getting closer to breaking your old record." << endl;
	}
}

int main ()
{
	string userInput;
	int valueReturn;


	cout << "This program has two functions that generate prompts through pseudo-RNG." << endl;
	
	while(userInput != "3")
	{ 
	cout << "|-------------------------------------|" << endl;
	cout << "|       Input       |     Function    |" << endl;
	cout << "--------------------------------------|" << endl;
	cout << "|         1         |     By Value    |" << endl;
	cout << "|-------------------------------------|" << endl;
	cout << "|         2         |   By Reference  |" << endl;
	cout << "|-------------------------------------|" << endl;
	cout << "|         3         |   End Program   |" << endl;
	cout << "|-------------------------------------|" << endl;

	cout << "Please enter the number that corresponds to the funtion you want in the menu above: " << endl;
	cin >> userInput;

		if(userInput == "1")
		{
			valueReturn = messageByValue();
			if(valueReturn >= 1 && valueReturn <= 15){
			    cout << valueReturn << endl;
				cout << "Oh, you're almost there?" << endl;
			}
			else if(valueReturn >= 16 && valueReturn <= 35){
			    cout << valueReturn << endl;
				cout << "Aw cmon, you can do better than that!" << endl;
			}
			else if(valueReturn >= 36 && valueReturn <= 60){
			    cout << valueReturn << endl;
				cout << "Sorry. You're not close enough!" << endl;
			}
			else {
			    cout << valueReturn << endl;
				cout << "You're up big. Getting closer to breaking your old record." << endl;
			}
		}
		else(userInput == "2");
		{
			messageByReference ();
		}
	}
}