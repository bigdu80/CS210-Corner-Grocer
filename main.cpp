/*
 * Project Three: Corner Grocer Item Tracking Program
 *
 * Name: Donald Uzoma
 * Course: CS 210
 *
 * Purpose:
 * This program reads grocery item records from a text file,
 * counts how often each item appears, creates a backup data file,
 * and allows the user to view item frequencies through a menu.
 */

#include <iostream>
#include <string>
#include "GroceryTracker.h"

using namespace std;

void displayMenu() {
    cout << endl;
    cout << "==============================" << endl;
    cout << "       Corner Grocer Menu      " << endl;
    cout << "==============================" << endl;
    cout << "1. Search for an item frequency" << endl;
    cout << "2. Print all item frequencies" << endl;
    cout << "3. Print item frequency histogram" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    GroceryTracker groceryTracker;
    int menuChoice;
    string itemName;

    // Load grocery data from the input file.
    groceryTracker.loadItemsFromFile("CS210_Project_Three_Input_File.txt");

    // Create backup file automatically at the beginning of the program.
    groceryTracker.createBackupFile("frequency.dat");

    do {
        displayMenu();
        cin >> menuChoice;

        if (menuChoice == 1) {
            cout << "Enter the item you wish to search for: ";
            cin >> itemName;

            cout << itemName << " " << groceryTracker.getItemFrequency(itemName) << endl;
        }
        else if (menuChoice == 2) {
            cout << endl;
            cout << "ITEM FREQUENCY LIST" << endl;
            cout << "-------------------" << endl;
            groceryTracker.printAllFrequencies();
        }
        else if (menuChoice == 3) {
            cout << endl;
            cout << "ITEM FREQUENCY HISTOGRAM" << endl;
            cout << "------------------------" << endl;
            groceryTracker.printHistogram();
        }
        else if (menuChoice == 4) {
            cout << "Exiting program. Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
        }

    } while (menuChoice != 4);

    return 0;
}