// KyleRoneyWeek5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Johnny Utah owns a surf shop on the beach called “Point Break Surf Shop”. 
// Johnny sells surfboards in 3 three sizes: small (2 meters), medium (3 meters), and large (4 meters). 
// The cost of one small surfboard is $175.00, one medium is $190.00, and one large is $200.00.  
// Write a program that will make the surf shop operational.  Your program should allow the user to do the following:
// 1. Buy any surfboard in any size and in any quanity.
// 2. At any time show the total number of surfboards of each size sold.
// 3. At any time show the total money made.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

	// Variables I will be using
	int iTotalSmall;
	int iTotalMedium;
	int iTotalLarge;
	int iTotalXXXSmall;
	char item;
	int SurfboardSmall = 0;
	int SurfboardMedium = 0;
	int SurfboardLarge = 0;
	int SurfboardXXXSmall = 0;
	int SurfboardQuanity;
	char SurfboardSize;
	
	// Function to show the user how to use the program
	void ShowUsage(){
		cout << "Here you will be able to purchase a surfboard of three sizes" << endl;
		cout << "XXXSmall = $100.00, Small = $175.00, Medium = $190.00, Large = $200.00" << endl;
		cout << "Thank you, and enjoy your new surfboards!" << endl;
	}
	// Making the function to see how many surfboards the user will want, and what size they would like
	void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXSmall) {
		cout << "Please enter the quanity and type (X=XXXSmall, S=small, M=medium, L=large) of surfboard you would like to purchase: " << endl;
		cin >> SurfboardQuanity >> SurfboardSize;
		if (SurfboardSize == 'S') {
			iTotalSmall = iTotalSmall + SurfboardQuanity;
		}
		else if (SurfboardSize == 'M') {
			iTotalMedium = iTotalMedium + SurfboardQuanity;
		}
		else if (SurfboardSize == 'L') {
			iTotalLarge = iTotalLarge + SurfboardQuanity;
		}
		else if (SurfboardSize == 'X') {
			iTotalXXXSmall = iTotalXXXSmall + SurfboardQuanity;
		}
	}
	// Making the function showing the number of surfboards of each size sold
	void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall) {
		if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXSmall == 0) {
			cout << "No purchases made yet." << endl;
			return;
		}
		if (iTotalSmall > 0) {
			cout << "The total number of small surfboards is: " << iTotalSmall << endl;
		}
		if (iTotalMedium > 0) {
			cout << "The total number of medium surfboards is: " << iTotalMedium << endl;
		}
		if (iTotalLarge > 0) {
			cout << "The total number of large surfboards is: " << iTotalLarge << endl;
		}
		if (iTotalXXXSmall > 0) {
			cout << "The total number of squirrel surfboards is: " << iTotalXXXSmall << endl;
		}
	}
	// Creating the functions to show the total amount of money made from each size sold, then adding up to a grand total the user will owe
	void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall) {
		if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXSmall == 0) {
			cout << "No purchases made yet." << endl;
			return;
		}
		if (iTotalSmall > 0) {
			SurfboardSmall = iTotalSmall * 175.00;
			cout << "The total number of small surfboards is " << iTotalSmall << " at a total of $" << SurfboardSmall << endl;
		}
		if (iTotalMedium > 0) {
			SurfboardMedium = iTotalMedium * 190.00;
			cout << "The total number of medium surfboards is " << iTotalMedium << " at a total of $" << SurfboardMedium << endl;
		}
		if (iTotalLarge > 0) {
			SurfboardLarge = iTotalLarge * 200.00;
			cout << "The total number of large surfboards is " << iTotalLarge << " at a total of $" << SurfboardLarge << endl;
		}
		if (iTotalXXXSmall > 0) {
			SurfboardXXXSmall = iTotalXXXSmall * 100.00;
			cout << "The total number of squirrel surfboards is " << iTotalXXXSmall << " at a total of $" << SurfboardXXXSmall << endl;
		}
		cout << "Amount due: $" << SurfboardSmall + SurfboardMedium + SurfboardLarge + SurfboardXXXSmall << endl;
	}
	int main() {
	// Week 5 program introduction
	cout << "************************************************************" << endl;
	cout << "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****" << endl;
	cout << "************************************************************" << endl;
	// Surfboard letter selections the user will input to decide what step to take in the purchasing process
	cout << "\n\nTo show program usage 'S'" << endl;
	cout << "To purchase a surfboard press 'P'" << endl;
	cout << "To display current purchases press 'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl;
	// Creating my loop so the user may continuously purchase surfboards until they enter 'Q' and quit.
	while (2) {
		cout << "\nPlease enter selection: " << endl;
		cin >> item;
		switch (item) {
		// This case will lead to the purchasing explanation
		case 'S':
			ShowUsage();
			break;
		// This case will lead to the user inputing what number of surfboards they will like, and what size surfboard
		case 'P':
			MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
			break;
		// This case will show the user how many surfboards they have purchased
		case 'C':
			DisplayPurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
			break;
		// This case will show the user the total money they will owe for the surfboards
		case 'T':
			DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
			break;
		// This case will allow the user to exit the program when done
		case 'Q':
			cout << "Thank you" << endl;
			exit(2);
			return(2);
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
