# 🔥 Longest Common Prefix — Interview Q&A

## 1️⃣ What is a prefix?
**Answer:**  
A prefix is the starting part of a string.  
**Example:** `"flower"` → `"f"`, `"fl"`, `"flo"`

---

## 2️⃣ What is Longest Common Prefix?
**Answer:**  
The longest starting substring that is common in all strings.

---

## 3️⃣ What if the input array is empty?
**Answer:**  
Return an empty string `""`.

---

## 4️⃣ What if the array contains only one string?
**Answer:**  
That string itself is the longest common prefix.

---

## 5️⃣ Why do we start with the first string as prefix?
**Answer:**  
- The prefix must exist in all strings.  
- It cannot be longer than any string.  
➡️ So the first string is a safe maximum starting point.

---

## 6️⃣ Why does the prefix only shrink and never grow?
**Answer:**  
Because once a character doesn’t match, it can never become valid again.

---

## 7️⃣ How do you check if a string starts with a prefix?
**Answer:**  
Check whether the prefix occurs at index `0`.

---

## 8️⃣ What do you do when a string does not match the prefix?
**Answer:**  
Remove characters from the end of the prefix until it matches.

---

## 9️⃣ When do you stop shrinking the prefix?
**Answer:**  
- ✅ When the string starts with the prefix  
- ❌ Or when the prefix becomes empty

---

## 🔟 What does it mean if prefix becomes empty?
**Answer:**  
There is no common prefix among the strings.

---

## 1️⃣1️⃣ Example interview dry run
**Input:**  
`["dog","racecar","car"]`

**Answer:**  
`""`

**Reason:**  
No common starting characters.

---

## 1️⃣2️⃣ Time Complexity?
**Answer:**  
`O(n × m)`  
- `n` = number of strings  
- `m` = length of prefix

---

## 1️⃣3️⃣ Space Complexity?
**Answer:**  
`O(1)` → No extra data structures used.

---

## 1️⃣4️⃣ Can sorting be used?
**Answer:**  
Yes, but it’s slower (`O(n log n)`) and unnecessary.

---

## 1️⃣5️⃣ Why interviewers ask this question?
**Answer:**  
It tests:  
- String handling  
- Edge case thinking  
- Loop + condition logic  
- Optimization awareness

---

## 1️⃣6️⃣ Most common mistakes ❌
- Forgetting empty array case  
- Overcomplicating with maps  
- Comparing characters incorrectly  

---

## 1️⃣7️⃣ Best one‑line interview explanation ⭐
**Answer:**  
I take the first string as prefix and keep shrinking it until all strings start with it.

---

## 1️⃣8️⃣ What data structures are needed?
**Answer:**  
None — just strings.

---

## 1️⃣9️⃣ Can this be done character by character?
**Answer:**  
Yes, but prefix‑shrinking is simpler and cleaner.

---

## 2️⃣0️⃣ What should you say if interviewer asks for optimization?
**Answer:**  
Prefix shrinking avoids unnecessary comparisons and extra space.
