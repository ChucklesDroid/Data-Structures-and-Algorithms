C++ inbuilt algorithm vs complexities

| Algorithm | Time Complexity | Space Complexity |
|---|---|---|
| sort | O(n*logn) | O(1) | 

C++ data structures, specialities and complexities
| Data structure | Speciality | Time Complexity | Space Complexity |
|---|---|---|---|
| std::set| no duplicates | regular set uses trees and are better for range based iterations than std::unordered_set. Worst case for Insertion and Deletion: O(logn) | Space Complexity: O(n) |
| std::unordered_set| no duplicates | unordered_sets use hashing and create hash tables so are faster than std::set to access. Worst Case for Insertion and Deletion: O(n) | Space Complexity: O(n) |
