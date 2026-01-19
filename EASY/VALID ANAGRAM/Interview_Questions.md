# 🧠 Valid Anagram — Interview Questions

## 📌 1. What is an anagram?
Two strings are anagrams if they contain the same characters with the same frequency, but possibly in a different order.

---

## 📌 2. Why do we check the length of both strings first?
If lengths are different, it’s impossible for both strings to have the same character frequencies.

---

## 📌 3. Best Data Structures
- `unordered_map<char, int>` → stores character frequency  
- `array[26]` → faster if only lowercase letters  

👉 Because we need **counting**, not sorting.

---

## 📌 4. Step‑by‑Step Logic (No Code)
1. If lengths differ → return `false`  
2. Count frequency of each character in string `s`  
3. Traverse string `t`  
   - If a character is missing or count is zero → return `false`  
   - Reduce frequency  
4. If all matched → return `true`

---

## 📌 5. Why decrement frequency while traversing `t`?
To ensure each character in `t` is matched exactly once with `s`.

---

## 📌 6. What if we don’t decrement?
Duplicate characters in `t` could incorrectly pass even if `s` doesn’t have enough occurrences.

---

## 📌 7. Time Complexity
- **O(n)** → one pass for `s`, one pass for `t`

---

## 📌 8. Space Complexity
- Using `unordered_map` → **O(n)**  
- Using fixed array (26 chars) → **O(1)**

---

## 📌 9. Can we solve without extra space?
✅ Yes, by sorting both strings and comparing them.  
❌ But sorting takes **O(n log n)** time.

---

## 📌 10. Which approach is better?
Frequency counting is better because:  
- Faster (**O(n)**)  
- No need to reorder strings

---

## 📌 11. Unicode Characters
Use `unordered_map` → safer than fixed‑size array.

---

## 📌 12. Edge Cases
- Empty strings  
- Single character strings  
- Repeated characters  
- Different lengths  

---

## 📌 13. Why does LeetCode give function signature instead of `main()`?
Because LeetCode handles input/output internally and only tests your logic function.

---

## 📌 14. How to test locally in VS Code?
Write a `main()` function and call the solution method manually (✔️ already done).

---

## 📌 15. Beginner Explanation
> “Count letters in the first word.  
> Cancel them out using the second word.  
> If anything doesn’t match → not an anagram.”
