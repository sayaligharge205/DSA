// ### Functions of Set:

// 1. **insert():** Adds an element to the set.
// 2. **erase():** Removes a specific element from the set.
// 3. **size():** Returns the number of elements in the set.
// 4. **find():** Searches for a specific element.
// 5. **clear():** Removes all elements from the set.
// 6. **empty():** Checks if the set is empty.
// 7. **count()**: to get count of element


#include <iostream>
#include <set> // For using set

using namespace std;

int main() {
   
    // Create a set of integers
    set<int> s;

    // 1. Insert elements
    s.insert(3);
    s.insert(1);
    s.insert(2);

    // Insert duplicate element (won't be added)
    s.insert(3);

    // 2. Check if set contains an element
    if (s.find(2) != s.end()) {
        cout << "2 is in the set!" << endl;
    }

    // 3. Size of the set
    cout << "Set size: " << s.size() << endl;

    // 4. Remove an element
    s.erase(1);

    // 5. Check if set is empty
    if (s.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    // 6. Iterate over set elements
    for (auto num : s) {
        cout << num << " ";  // Output: 2 3
    }
    cout << endl;

    // 7. Clear all elements in the set
    s.clear();
    cout << "After clear, set size: " << s.size() << endl;

    return 0;
}