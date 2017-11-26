//////////////////////////////////////////////////////////////////////
//Name: Thomas Gordon												//
//Date: 10 - 17 - 2017												//
//Assignment: Homework 3A, rondas strike force gym fee calculator   //
//class: COP2000													//
//////////////////////////////////////////////////////////////////////
//i tied to compile the code and write it but for some reason it would not stay open long enouhg 
//you can enter in numbers but i dont know how they will efect my grading becuase 
// i tryed my best on the coding part and for some reason the compiler hated me
//other than that i hope that when you look at this code you will at least give me some credit for trying to get the code to work
//i will try and comment out things so that who ever reads this can understand the code and i can at least get a grade for trying
// i hope that you could grade me on the way my code was written
//the code kept on coming up with an error saying .exe file missing

#include<iostream>//the header files i did most of the one that were taught in class 
#include<iomanip> //so there hopefully were no mistakes even though there probably only needed to be iostream
#include<string>
#include<cmath>
using namespace std; // this part is the usual

int main() // i tried a lot of nesting so bear with me i knid of lost track and then the compiler started to hate me
{
	
	// for these i equaled up the menu items with numbers and variables, while trying to use the variables to make calculations, userinput, etc.
			int main_menu = 0;
			int userinput = 0;
			const int gold = 1;
			const int silver = 2;
			const int bronze = 3;
			const int quit = 4;
			const float gold_percent = 0.01 * 1'200;
			const float silver_percent = 0.02 * 1'200;
			const float bronze_percent = 0.04 * 1'200;
			const float quit_item = 4;

			// this is a switch statement ment for user input and calculations
			switch (userinput)
			{
			case 1:
			{
				cout << gold_percent << endl;
			}
			case 2:
			{
				cout << silver_percent << endl;
			}
			case 3:
			{
				cout << bronze_percent << endl;
			}
			case 4:
			{
				cout << quit_item << endl;
			}
			}
			cin >> userinput; // for some reason i put this in and the program decided to show up but without it the program for some reason wont appear 

			// this is the menu for the program
			cout << "welcome to rondas strike force gym" << endl << endl;
			cout << "----------------------------------" << endl << endl;
			cout << "choose a membership level 1 - 4: " << endl;
			cout << "1. to get a Gold membership fee" << endl;
			cout << "2. to get a Silver membership fee" << endl;
			cout << "3. to get a Bronze membership fee" << endl;
			cout << "4. to quit" << endl;

			// i dont know if the if else statements work or not but obviusly not 
			if (main_menu == userinput)
			{
				return userinput;
			}
			else 
			{ 
				cout << "goodbye" << endl;
			}

			if (userinput > 3 || userinput < 1) return false;
			else return true;
			
			//i tried system ("pause");, and i tryed return 0; but the program still didnt stay open long enough for me to use it properly
			system("pause"); 
}
