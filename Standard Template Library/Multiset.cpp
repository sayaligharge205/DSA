// ### Functions of Multiset:

// 1. **insert():** Adds an element to the multiset.
// 2. **erase():** Removes all occurrences of an element.
// 3. **size():** Returns the number of elements in the multiset.
// 4. **find():** Searches for a specific element.
// 5. **count():** Returns the number of occurrences of an element.

#include <iostream>
#include <set> // For using multiset

using namespace std;

int main() {
    // Create a multiset of integers
    multiset<int> ms;

    // 1. Insert elements (including duplicates)
    ms.insert(5);
    ms.insert(1);
    ms.insert(5); // Duplicate element is allowed

    // 2. Count the occurrences of an element
    cout << "Occurrences of 5: " << ms.count(5) << endl;

    // 3. Size of the multiset
    cout << "Multiset size: " << ms.size() << endl;

    // 4. Remove all instances of an element
    ms.erase(5);
    cout << "After erasing 5, size: " << ms.size() << endl;

    // 5. Check if multiset is empty
    if (ms.empty()) {
        cout << "Multiset is empty." << endl;
    }

    // 6. Iterate over multiset elements
    for (auto num : ms) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}