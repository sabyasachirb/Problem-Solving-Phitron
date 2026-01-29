#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // Ordered Map (map)
    map<int, string> orderedMap;
    orderedMap[2] = "Two";
    orderedMap[1] = "One";
    orderedMap[3] = "Three";

    cout << "Ordered Map:\n";
    for (auto& pair : orderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Unordered Map
    unordered_map<int, string> unorderedMap;
    unorderedMap[2] = "Two";
    unorderedMap[1] = "One";
    unorderedMap[3] = "Three";

    cout << "\nUnordered Map:\n";
    for (auto& pair : unorderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}


// | Use Case                             | Choose          |
// | ------------------------------------ | --------------- |
// | Need sorted data                     | `map`           |
// | Fast access, order doesn't matter    | `unordered_map` |
// | Large datasets with frequent lookups | `unordered_map` |
