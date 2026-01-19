🧠 Valid Anagram — Interview Questions
1️⃣ What is an anagram?
👉 Two strings are anagrams if they contain the same characters with the same frequency, but possibly in a different order.

2️⃣ Why do we check the length of both strings first?
👉 If lengths are different, it’s impossible for both strings to have the same character frequencies.

3️⃣ What data structure is best for this problem and why?
👉

unordered_map<char, int> → stores character frequency

OR array of size 26 → faster if only lowercase letters
Because we need counting, not sorting.

4️⃣ Explain the logic step‑by‑step (without code)
👉

If lengths differ → return false

Count frequency of each character in string s

Traverse string t

If a character is missing or count is zero → return false

Reduce frequency

If all matched → return true

5️⃣ Why do we decrement the frequency while traversing the second string?
👉 To ensure each character in t is matched exactly once with s.

6️⃣ What happens if we don’t decrement the frequency?
👉 Duplicate characters in t could incorrectly pass even if s doesn’t have enough occurrences.

7️⃣ What is the time complexity?
👉 O(n)
(one pass for s, one pass for t)

8️⃣ What is the space complexity?
👉

unordered_map → O(n)

Fixed array (26 chars) → O(1)

9️⃣ Can we solve this without extra space?
👉 Yes, by sorting both strings and comparing them.
But sorting takes O(n log n) time.

🔟 Which approach is better: sorting or frequency counting?
👉 Frequency counting is better because:

Faster (O(n))

No need to reorder strings

1️⃣1️⃣ What if the input contains Unicode characters?
👉 unordered_map is safer than a fixed-size array.

1️⃣2️⃣ What edge cases should we consider?
👉

Empty strings

Single character strings

Repeated characters

Different lengths

1️⃣3️⃣ Why does LeetCode give the function signature instead of main()?
👉 Because LeetCode handles input/output internally and only tests your logic function.

1️⃣4️⃣ How do you test this locally in VS Code?
👉 By writing a main() function and calling the solution method manually (which you already did ✔️).

1️⃣5️⃣ How would you explain this problem to a beginner?
👉
“Count letters in the first word.
Cancel them out using the second word.
If anything doesn’t match → not an anagram.”