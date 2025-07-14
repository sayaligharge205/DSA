// ### **Functions of Unordered Set:**

// **insert():** Adds an element to the set.

// **erase():** Removes a specific element from the set.

// **size():** Returns the number of elements in the set.

// **find():** Searches for a specific element.

// **clear():** Removes all elements from the set.

// **empty():** Checks if the set is empty.

// **count():** Returns the number of occurrences of an element (either 0 or 1 in unordered_set).



#include <iostream>
#include <unordered_set> // For using unordered_set
using namespace std;

int main() {
    // Create an unordered set of integers
    unordered_set<int> us;

    // 1. Insert elements
    us.insert(3);
    us.insert(1);
    us.insert(2);

    // Insert duplicate element (won't be added)
    us.insert(3);

    // 2. Check if set contains an element
    if (us.find(2) != us.end()) {
        cout << "2 is in the set!" << endl;
    }

    // 3. Size of the set
    cout << "Set size: " << us.size() << endl;

    // 4. Remove an element
    us.erase(1);

    // 5. Check if set is empty
    if (us.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    // 6. Iterate over set elements
    for (auto num : us) {
        cout << num << " ";  // Elements will be in an arbitrary order
    }
    cout << endl;

    // 7. Clear all elements in the set
    us.clear();
    cout << "After clear, set size: " << us.size() << endl;

    return 0;
}