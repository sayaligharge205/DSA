// ### Functions of Unordered Map:

// 1. **insert(pair):** Adds a key-value pair.
// 2. **erase(key):** Removes the key-value pair by key.
// 3. **size():** Returns the number of elements in the map.
// 4. **find(key):** Searches for a specific key.
// 5. **clear():** Removes all key-value pairs from the map.
// 6. **empty():** Checks if the map is empty.
// 7. **operator[]:** Accesses or inserts a value by key.
// 8. **count(key):** Returns the number of occurrences of a key (either 0 or 1 in `unordered_map`).


#include <iostream>
#include <unordered_map> // For using unordered_map
using namespace std;

int main() {
    // Create an unordered map of int -> string
    unordered_map<int, string> umap;

    // 1. Insert elements
    umap.insert({1, "Apple"});
    umap.insert({2, "Banana"});
    umap[3] = "Orange"; // Insert using operator[]

    // 2. Access elements
    cout << "Key 2: " << umap[2] << endl;

    // 3. Check if map contains a key
    if (umap.find(3) != umap.end()) {
        cout << "Key 3 is in the map!" << endl;
    }

    // 4. Size of the map
    cout << "Map size: " << umap.size() << endl;

    // 5. Remove a key-value pair
    umap.erase(1);

    // 6. Check if map is empty
    if (umap.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Map is not empty." << endl;
    }

    // 7. Iterate over key-value pairs
    for (auto& pair : umap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 8. Clear all elements in the map
    umap.clear();
    cout << "After clear, map size: " << umap.size() << endl;

    return 0;
}
