# 🔹 LeetCode #121 — Best Time to Buy and Sell Stock

## 📌 Interview Questions & Answers

### 1️⃣ Why do interviewers ask this question?
**Answer:**
- To test if you can:
  - Optimize a brute‑force solution  
  - Track values while scanning once  
  - Understand buy before sell constraint  
- They want to see if you can think in **O(n)** instead of **O(n²)**.

---

### 2️⃣ What is the brute‑force approach and why is it bad?
**Answer:**
- Check every pair of days (buy day *i*, sell day *j > i*).  
- **Time:** O(n²)  
- Too slow for large inputs.  
- Interviewers expect you to reject this approach verbally.

---

### 3️⃣ What is the key idea to solve it in O(n)?
**Answer:**
- Keep track of:
  - `minPrice` → cheapest price seen so far  
  - `maxProfit` → best profit so far  
- For each day:
  - Assume we sell today  
  - Calculate profit using the lowest past price  

---

### 4️⃣ Why do we update minPrice before calculating profit?
**Answer:**
- Because:
  - You must buy before selling  
  - If today’s price is lower, it’s a better buying day  
  - Selling the same day gives 0 profit, so we skip profit calculation  

---

### 5️⃣ What variables are absolutely necessary?
**Answer:**
- Only two variables:
  ```cpp
  int minPrice;
  int maxProfit;
---

### 6️⃣ What happens if prices are always decreasing?
**Answer:**
There is no profitable transaction, so:

cpp
return 0;
Example:
[7,6,4,3,1] → 0
---

### 7️⃣ Can we buy and sell on the same day?
**Answer:**

No.

Profit would be zero, and the problem explicitly implies buy first, sell later.
---

###  8️⃣ What pattern does this problem teach?
**Answer:**

🧠 Minimum so far / Maximum difference pattern

This pattern appears in many problems.

--- 

### 9️⃣ Similar interview questions using the SAME pattern
You should immediately think of #121 when you see these:

  - ✅ Best Time to Buy and Sell Stock II (#122) 

  - ✅ Best Time to Buy and Sell Stock with Cooldown

  - ✅ Maximum Difference Between Two Elements

  - ✅ Maximum Subarray (Kadane’s idea is related)

  - ✅ Minimum Element Before Current Index
---

###🔟 One‑line explanation to say in interview
```
“I track the minimum price so far and calculate the maximum profit by selling on each day in a single pass.”
```
This sentence alone impresses interviewers.
