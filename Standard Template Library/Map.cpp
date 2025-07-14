// ### Functions of Map:

// 1. **insert():** Inserts a key-value pair into the map.
// 2. **erase():** Removes an element by key.
// 3. **size():** Returns the number of elements in the map.
// 4. **find():** Searches for a key and returns an iterator to the key-value pair.
// 5. **clear():** Removes all elements from the map.
// 6. **empty():** Checks if the map is empty.


#include <iostream>
#include <map> // For using map

using namespace std;

int main() {
    // Create a map of integers to strings
    map<int, string> m;

    // 1. Insert key-value pairs into the map
    m[1] = "John";
    m[2] = "Alice";
    m.insert(make_pair(3, "Bob")); // Another way to insert

    // 2. Access value by key
    cout << "Employee with ID 1: " << m[1] << endl;

    // 3. Remove an entry by key
    m.erase(2);

    // 4. Size of the map
    cout << "Map size: " << m.size() << endl;

    // 5. Check if key exists using find()
    if (m.find(3) != m.end()) {
        cout << "Employee 3 exists." << endl;
    }

    // 6. Iterate over map elements
    for (auto e : m) {
        cout << "ID: " << e.first << ", Name: " << e.second << endl;
    }

    return 0;
}
