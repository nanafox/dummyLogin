
#include <iostream>
#include <string>
using namespace std;

int vehicleTax();

// first, let's get the login section down then we can worry about the real stuff
// I kept it simple but again, feel free to modify the code for a better feel
// You can make the password appear like '*' if you want, but I didn't cover that
// I leave that one for you to get your hands dirty with
// let's dive in

class loginPortal
{
	public:
		string userNameAttempt;
		string passwdAttempt;
		loginPortal()
		{
			accessGranted = 0; // you wouldn't want the user to gain acces even before authentication right?

		}
		void login()
		{ // checks to see if the credentials entered matches the one we gave it.
			// over here, try and create a cool login environment
			// I will leave that for you to handle
			cout << "Hello there, please provide your username and password" << endl;
			cout << "Username: ";
			cin >> userNameAttempt;
			if (userNameAttempt == userName)
			{
				cout << "Password: ";
				cin >> passwdAttempt;
				if (passwdAttempt == passwd)
				{
					cout << "Welcome @" << userName << endl; // you can add more code here to make it much more cool
					// this will get the the program's (body) function
					vehicleTax();
				}

				else
				{
					cout << "You entered a wrong password.\nRestart the program and try again" << endl;
					accessGranted = 0;

				}
			}

			else
			{
				cout << "We couldn't identify who you are" << endl;
				cout << "Restart the program and try again" << endl;
				accessGranted = 0;
			}

		}


	private:
		string passwd = "P@$$w0rd_"; // you can use any password you want here
		string userName = "theLazyProgrammer"; // you can put your name here
		bool accessGranted; // access is granted

};

// I decided to change the case of this input to lower case to handle some errors
// if the user enters any case, the program will accept it and change it to lower case
// and then run it
void convertCalc (string& calculateAgain)
{
	for (int i = 0; i < calculateAgain.length(); i++)
		calculateAgain[i] = tolower(calculateAgain[i]);
}

// Over here, I made the user's input for the car names to be capitalized
void convertNameOfCar (string& nameOfCar)
{
	for (int i = 0; i< nameOfCar.length(); i++)
		nameOfCar[i] = toupper(nameOfCar[i]);
}

// now let's get into the real stuff
// we are to use a function to calculate the tax on each car purchased

int vehicleTax()
{
	// TAKE NOTE OF THIS VARIABLE (the tax varible)
	double tax = 0.005; //read question 3(d), this code you'll
	//change to reflect the development when the tax is raised to 25%
	// I'll leave this one too for you to play with
	// if the percentage change, modify the 'tax' variable to reflect the changes
	string nameOfCar;
	int numberOfCarsPurchased;
	double amountPerCar;
	double subTaxPayable;
	double taxPayable;
	double unitCostOfCars;
	double totalCostOfCars;
	string calculateAgain = "y";

    // now you'll have to create a condition to iterate if a value if true
	while (calculateAgain == "y")
	{
		for (int i = 0; i <= 10; ++i)
		{
			cout << "\nName Of Car purchased: ";
			cin >> nameOfCar;
			convertNameOfCar(nameOfCar);

			cout << "Amount per vehicle: GHS";
			cin >> amountPerCar;

			cout << "Number of cars of purchased: ";

			// now make the calculations
			cin >> numberOfCarsPurchased;
			subTaxPayable = tax * amountPerCar;
			unitCostOfCars = amountPerCar * numberOfCarsPurchased;
			taxPayable = subTaxPayable * numberOfCarsPurchased;
			totalCostOfCars = unitCostOfCars + taxPayable;

            // now let's display the results
            cout << "\n***RESULTS***";
			cout << "\nCar purchased: " << nameOfCar << endl;
            cout << "Unit price: GHS" << amountPerCar << endl;
            cout << "Total number of cars purchased: " << numberOfCarsPurchased << endl;
            cout << "Sub Total: GHS" << unitCostOfCars << endl;
            cout << "Tax Payable per vehicle: GHS" << subTaxPayable << endl;
            cout << "Total tax payable: GHS" << taxPayable << endl;
            cout << "Grand Total: GHS" << totalCostOfCars << endl;

            // ask the user if they want to make another calculation
            // remember, the question asked that it should be able to do it at least ten times
            // this will repeat so long as the user's answer is Yes
            cout << "\nDo you want to make another calculation?" << endl;
            cout << "[Y]es [N]o: ";
            cin >> calculateAgain;
            convertCalc(calculateAgain);
            if (calculateAgain == "n")
            {
                cout << "Goodbye" << endl;
                return 0;
            }

		}

	}


}

int main()
{
	// get the class objects we created
	loginPortal loginPortalObj;
	loginPortalObj.login();

	// all too soon we've come to the end of this wonderful coding session, hope you enjoyed yourself
	// feel free to modify the code to suit yourself
	// I left the part of the question for you to answer, if you are able to appreciate your code
	// you will be able to support it.
	// Happy Coding


	// My Details
	// author: @theLazyProgrammer
	// program: ghNavyPayPal
	// date: April 9, 2020
	// facebook: nanaforsonjnr
	// twitter: @_nanafox
	// IG: nanaforsonjnr
	// WhatsApp: +233 55 721 8441

	return 0;
}
