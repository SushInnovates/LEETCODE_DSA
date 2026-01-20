✅ Core Interview Questions (YOU MUST KNOW)
1️⃣ What is the brute‑force approach?
Answer:

Clean the string (remove non‑alphanumeric, convert to lowercase)

Reverse it

Compare original vs reversed
⏱ Time: O(n)
🧠 Space: O(n)

2️⃣ What is the optimal approach?
Answer:

Use two pointers

One from left, one from right

Skip non‑alphanumeric characters

Compare characters case‑insensitively
⏱ Time: O(n)
🧠 Space: O(1)

3️⃣ Why do we use while instead of if to skip characters?
Answer:
Because there can be multiple non‑alphanumeric characters in a row.
if skips only one → wrong comparison
while skips all → correct

4️⃣ Why is "!!!" considered a palindrome?
Answer:
After removing non‑alphanumeric characters, the string becomes empty.
An empty string has no mismatch → palindrome by definition.

5️⃣ Why do we use tolower()?
Answer:
Palindrome check is case‑insensitive.
'A' and 'a' should be treated as equal.

6️⃣ What built‑in function checks alphanumeric characters?
Answer:

isalnum(character)
7️⃣ What are the edge cases?
Answer:

Empty string ""

Only symbols "!!!"

Mixed case "Aa"

Spaces " "

Single character "a"

8️⃣ Can this be done without extra memory?
Answer:
✅ Yes
Using two pointers → O(1) space

9️⃣ When do we immediately return false?
Answer:
When:

tolower(s[left]) != tolower(s[right])
🔑 One‑line summary (INTERVIEW GOLD)
“We use two pointers to compare characters from both ends while skipping non‑alphanumeric characters and ignoring case.”