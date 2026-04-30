# Searching Algorithms

## Sequential Search
### Understand the idea
  - Q: What problem does it solve?
  - A: Retrive a target value from a dataset.
  - Q: How does it work step by step?
  - A: Visting each element from the set one by one until the target value is found, or until the entire set has been examined.
### Analyse Time Complexity
  - Best case: Θ(1)
  - Worst case: Θ(n)

---
## Binary Search
### Understand the idea
  - Q: What problem does it solve?
  - A: Find a position/index of a target value inside a sorted array. The array must be sorted.
  - Q: How does it work step by step?
  - A: Reaptly checking the middle element, comparing the target value with the middle element.
   If target value equals middle element, then found. Otherwise, comparing the two values, 
   if target value larger than middlement, search the right half, same logic for target value smaller than middle element.
### Analyse Time Complexity
  - Best case: Θ(1)
  - Worst case: Θ(log2 n)
  
