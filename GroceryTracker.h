#ifndef CORNER_GROCER_GROCERY_TRACKER_H_
#define CORNER_GROCER_GROCERY_TRACKER_H_

#include <map>
#include <string>

using namespace std;

class GroceryTracker {
public:
    GroceryTracker();

    void loadItemsFromFile(string t_fileName);
    void createBackupFile(string t_fileName);
    int getItemFrequency(string t_itemName) const;
    void printAllFrequencies() const;
    void printHistogram() const;

private:
    map<string, int> m_itemFrequency;
};

#endif
