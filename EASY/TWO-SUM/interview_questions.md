# 🧠 Two Sum – Interview Questions

## 1️⃣ What is the brute force approach?
**Answer:**  
Check every pair of numbers using two loops and see if their sum equals the target.  
Time Complexity: **O(n²)**

---

## 2️⃣ Why is hashing used in the optimized solution?
**Answer:**  
Hashing allows us to store previously seen numbers and find the required value in **O(1)** time.

---

## 3️⃣ What is the time and space complexity?
| Approach | Time | Space |
|--------|------|-------|
| Brute Force | O(n²) | O(1) |
| Hash Map | O(n) | O(n) |

---

## 4️⃣ Why do we check before inserting into the map?
**Answer:**  
So we don’t use the same element twice and we correctly find the earlier index.

---

## 5️⃣ Can this be done without extra space?
**Answer:**  
Yes, by sorting the array and using two pointers, but then original indices are lost, so extra handling is needed.

---

## 6️⃣ What is unordered_map?
**Answer:**  
It is a hash table that allows **O(1)** average time complexity for search, insert, and delete.

---

## 7️⃣ Why is this problem important for interviews?
**Answer:**  
It tests:
- Hashing
- Array traversal
- Optimization thinking
- Time vs space trade-offs
