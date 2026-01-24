# 🔥 Maximum Subarray (#53) — Interview Q&A

## 1️⃣ What is a subarray?
- A contiguous part of an array.  
- Example: `[4, -1, 2]` is a subarray, `[4, 2]` is not (because it skips `-1`).

## 2️⃣ What is the problem asking?
- Find the maximum possible sum of any contiguous subarray.

## 3️⃣ What algorithm is used?
- **Kadane’s Algorithm**

## 4️⃣ Core idea of Kadane’s Algorithm
At each index:
- Either start a new subarray  
- Or extend the existing one  
- Choose whichever gives a larger sum.

## 5️⃣ Why reset the sum when it becomes negative?
- Because a negative sum will reduce the sum of any future subarray.

## 6️⃣ What variables are used?
- `currentSum` → sum till current index  
- `maxSum` → best answer so far

## 7️⃣ Why initialize both with the first element?
- To correctly handle all‑negative arrays.

## 8️⃣ Example dry run
Input: `[-2,1,-3,4,-1,2,1,-5,4]`  
Output: `6` from subarray `[4,-1,2,1]`

## 9️⃣ What if all elements are negative?
- Return the largest (least negative) element.  
- Example: `[-3,-2,-5] → -2`

## 🔟 Time Complexity
- **O(n)** — single pass through array.

## 1️⃣1️⃣ Space Complexity
- **O(1)** — no extra space used.

## 1️⃣2️⃣ Why not brute force?
- Brute force is **O(n²)** and too slow for large inputs.

## 1️⃣3️⃣ Can this be solved using prefix sum?
- Yes, but Kadane’s is simpler and optimal.

## 1️⃣4️⃣ DP Relation
```
currentSum = max(nums[i], currentSum + nums[i])
```

## 1️⃣5️⃣ Why interviewers love this question?
It tests:

 - Dynamic programming thinking
 - Optimization
 - Edge case handling
 - Greedy decisions

## 1️⃣6️⃣ Common mistakes ❌
 - Initializing sum as 0
 - Ignoring all‑negative case
 - Using nested loops

## 1️⃣7️⃣ One‑line interview explanation ⭐
 - At each index, I decide whether to start a new subarray or continue the previous one.

## 1️⃣8️⃣ Can we also return the subarray itself?
 - Yes, by tracking start and end indices.

## 1️⃣9️⃣ What happens if array has only one element?
- That element itself is the answer.

## 2️⃣0️⃣ Optimization Answer
 - Kadane’s algorithm gives optimal O(n) time with constant space.
