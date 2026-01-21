# Reverse String – Interview Q&A

## 1️⃣ What is the problem asking?
Reverse the given string **in-place**, meaning we must modify the same input array without using extra memory.

## 2️⃣ Why does the function return void?
Because the string is passed by reference and modified directly.  
We don’t need to return anything.

## 3️⃣ What does “in-place” mean?
- No new array or string is created  
- We only change the original input

## 4️⃣ Why do we use two pointers?
- One pointer starts from the left, the other from the right  
- By swapping them and moving inward, we reverse the string efficiently

## 5️⃣ Why not use only one pointer?
- With one pointer, you would overwrite characters and lose data  
- Two pointers ensure safe swapping

## 6️⃣ Why condition is `left < right`?
- When pointers meet or cross → all swaps are already done  
- Continuing would re‑swap and break the result

## 7️⃣ Explain the algorithm in simple words
- Start one pointer from beginning, one from end  
- Swap characters  
- Move both pointers toward the center  
- Stop when they meet

## 8️⃣ Time Complexity
**O(n)** → Because we visit each character once.

## 9️⃣ Space Complexity
**O(1)** → Only a temporary variable is used — no extra memory.

## 🔟 Difference between `swap()` and temp variable
- Both do the same thing  
- `swap()` is cleaner and preferred in interviews  
- Temp variable shows you understand what swap does internally

## 1️⃣1️⃣ What if string is empty?
Loop never runs → function works fine.

## 1️⃣2️⃣ What if string has one character?
`left < right` is false → no swap → correct output.

## 1️⃣3️⃣ Odd vs Even length strings
- Even: perfect swaps  
- Odd: middle character stays same — no issue

## 1️⃣4️⃣ Why pass `vector<char>& s` by reference?
To avoid copying the vector and to modify the original string.

## 1️⃣5️⃣ What happens if passed by value?
A copy is created → changes won’t affect original → wrong for this problem.

## 1️⃣6️⃣ Can we do this using recursion?
Yes, but:  
- Uses extra stack memory  
- Interviewers prefer iterative solution

## 1️⃣7️⃣ Can STL be used?
Yes:  
```cpp
reverse(s.begin(), s.end());
```
But manual two‑pointer is preferred in interviews.
---

1️⃣8️⃣ Where is this logic reused?
- Valid Palindrome
- Reverse Words in String
- Two Sum (two pointers version)
- Sliding Window problems
---
1️⃣9️⃣ Why is this problem important?
It teaches:
- Two pointers
- In‑place operations
- Memory efficiency
- Foundation for many harder problems
---
2️⃣0️⃣ One‑line interview explanation (VERY IMPORTANT)
I use two pointers from both ends, swap characters, and move inward until the string is reversed in place with O(n) time and O(1) space.
---
