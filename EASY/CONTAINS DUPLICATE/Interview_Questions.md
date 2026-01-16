# LeetCode #217 — Contains Duplicate

## 📌 Interview Questions & Answers

### 1️⃣ Why do interviewers ask this question?
To check if you:
- Understand hashing  
- Can optimize from **O(n²) → O(n)**  
- Know when to use a **set vs map**  
- Can do **early exit**  

👉 It’s often used as a **filter question**.

---

### 2️⃣ What is the brute‑force approach?
- Compare every element with every other element.  
- **Time:** O(n²)  
- **Space:** O(1)  
- ❌ Too slow  

💡 You should immediately say:  
> “This is inefficient for large input.”

---

### 3️⃣ What is the optimal approach?
- Use a **hash set**.  
- Iterate through the array.  
- If element already exists → duplicate found.  
- Else store it.  

**Time:** O(n)  
**Space:** O(n)

---

### 4️⃣ Why do we use `unordered_set` and not `unordered_map`?
Because:
- We don’t need index.  
- We don’t need count.  
- We only need **existence**.  

👉 **Set = existence**  
👉 **Map = key → value**

---

### 5️⃣ Why do we CHECK before INSERT?
- If we insert first, every element will appear as a duplicate of itself.  
- Correct order:  
  **CHECK → INSERT → MOVE ON**  
- Same discipline as **Two Sum**.

---

### 6️⃣ When do we return true?
- The moment we find an element already in the set.  
- Early return shows:  
  - Good optimization  
  - Clear thinking  

---

### 7️⃣ What if no duplicate is found?
- After the loop ends:  
```cpp
return false;
```
---

### 8️⃣ Can sorting be used?
- Yes.

- Sort the array → O(n log n).

- Check adjacent elements.

But:

- Slower than hashing.

Modifies input.

👉 Hashing is preferred in interviews.

---

### 9️⃣ What is the time and space complexity?
Time: O(n) (average case)

Space: O(n)

Mention this confidently.

---

### 🔟 One‑line explanation to impress interviewer
“I iterate once while storing seen elements in a hash set and return true as soon as a duplicate appears.”

Short. Clean. Strong.
---

🧠 Pattern Name
Seen‑Before / Hash Set Pattern

Recognizing this pattern makes half of DSA problems easier.

🔗 Related Questions (Same Pattern)
- Two Sum (#1)
- Contains Duplicate II (#219)
- Valid Anagram (#242)
- Happy Number
- First Unique Character in a String
- Intersection of Two Arrays

---

### 🔒 Final Lock‑In Sentence
Say this out loud once:
```
“Contains Duplicate is just checking if I’ve seen the same number before.”
```
If you can say that, you’ll never forget this problem.

