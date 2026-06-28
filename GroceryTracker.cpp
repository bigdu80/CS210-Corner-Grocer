#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "GroceryTracker.h"

using namespace std;

// Constructor
GroceryTracker::GroceryTracker() {
}

// Reads grocery items from the input file and stores their frequencies in a map.
void GroceryTracker::loadItemsFromFile(string t_fileName) {
    ifstream inputFile;
    string itemName;

    inputFile.open(t_fileName);

    if (!inputFile.is_open()) {
        cout << "Error: Could not open " << t_fileName << endl;
        return;
    }

    while (inputFile >> itemName) {
        m_itemFrequency[itemName]++;
    }

    inputFile.close();
}

// Creates the frequency.dat backup file automatically.
void GroceryTracker::createBackupFile(string t_fileName) {
    ofstream outputFile;

    outputFile.open(t_fileName);

    if (!outputFile.is_open()) {
        cout << "Error: Could not create " << t_fileName << endl;
        return;
    }

    for (auto item : m_itemFrequency) {
        outputFile << item.first << " " << item.second << endl;
    }

    outputFile.close();
}

// Returns the number of times a specific item appears.
int GroceryTracker::getItemFrequency(string t_itemName) const {
    auto item = m_itemFrequency.find(t_itemName);

    if (item != m_itemFrequency.end()) {
        return item->second;
    }

    return 0;
}

// Prints every item with its frequency.
void GroceryTracker::printAllFrequencies() const {
    for (auto item : m_itemFrequency) {
        cout << item.first << " " << item.second << endl;
    }
}

// Prints every item with a histogram using asterisks.
void GroceryTracker::printHistogram() const {
    for (auto item : m_itemFrequency) {
        cout << item.first << " ";

        for (int i = 0; i < item.second; ++i) {
            cout << "*";
        }

        cout << endl;
    }
}