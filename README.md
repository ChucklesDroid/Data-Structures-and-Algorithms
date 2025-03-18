C++ inbuilt algorithm vs complexities

| Algorithm | Time Complexity | Space Complexity |
|---|---|---|
| sort | O(n*logn) | O(1) | 

C++ data structures, specialities and complexities
| Data structure | Speciality | Time Complexity | Space Complexity | When to use |
|---|---|---|---|---|
| std::set| no duplicates | regular set uses trees and are better for range based iterations than std::unordered_set. Worst case for Insertion and Deletion: O(logn) | Space Complexity: O(n) | Unique and Ordered |
| std::unordered_set| no duplicates | unordered_sets use hashing and create hash tables so are faster than std::set to access. Worst Case for Insertion and Deletion: O(n), Average time: O(1) (but usually dependant on the key value, hash collisions and hash function implementation) | Space Complexity: O(n) | Unique (will be un-ordered) | NA |
| std::map | key-value pairs -> helps to access values faster without iterating the entire container | Worst case for insertion, deletion and accessing the element: O(logn) -> makes use of Red Black Tree | Space Complexity: O(n) | NA |
| std::unordered_map | faster insertion and removal than std::map | makes use of hash functions so slower to iterate than std::map. Worst case for Insertion, Deletion and accessing the element: O(n), Average tiem: O(1) (but usually dependant on the key value, hash collisions and hash function implementation) | Space Complexity: O(n) | NA |
| std::vector | dynamic array and have contiguous memory, ideal for iteration | O(1) for random access, amortized constant O(1) for insertion/removal at end, O(n) for for insertion/removal at any linear distance from end | Space Complexity: O(n) | NA |

** If input data is small, prefer tree based data structures instead of hash based but usually just check it from case to case
