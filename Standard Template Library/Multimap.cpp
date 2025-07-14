// ### Functions of Multimap:

// 1. **insert():** Adds a key-value pair to the multimap.
// 2. **erase():** Removes an element by key.
// 3. **size():** Returns the number of elements in the multimap.
// 4. **find():** Searches for a key and returns an iterator to the first occurrence of that key.
// 5. **count():** to get count of occurrence of key.
// 6. **empty():** To check if map is empty or not. ****

#include <iostream>
#include <map> // For using multimap

using namespace std;

int main() {
    // Create a multimap of integers to strings
    multimap<int, string> mm;

    // 1. Insert key-value pairs into the multimap (including duplicate keys)
    mm.insert(make_pair(1, "Phone"));
    mm.insert(make_pair(1, "Tablet"));
    mm.insert(make_pair(2, "Laptop"));

    // 2. Find all products with key 1
    auto range = mm.equal_range(1);
    cout << "Products with key 1: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";  // Output: Phone Tablet
    }
    cout << endl;

    // 3. Size of the multimap
    cout << "Multimap size: " << mm.size() << endl;

    // 4. Remove a specific key
    mm.erase(1);

    // 5. Check if key exists
    if (mm.find(1) != mm.end()) {
        cout << "Key 1 exists." << endl;
    } else {
        cout << "Key 1 does not exist." << endl;
    }

    // 6. Iterate over multimap elements using `auto x: mm`
    for (auto x : mm) {
        cout << "ID: " << x.first << ", Product: " << x.second << endl;
    }

    return 0;
}