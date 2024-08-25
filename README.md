# Square root
### LeetCode task - Sqrt(x).

![image](https://github.com/user-attachments/assets/d4eece55-49d6-4910-a542-711d65f9d916)

This task was solved by Newton's method implementation.
![image](https://github.com/user-attachments/assets/7dd6cdb4-5a06-463c-af6d-74a543e477b5)

Full method description:
https://en.wikipedia.org/wiki/Newton%27s_method

Next expression was taken as an initial approximation:

![image](https://github.com/user-attachments/assets/578abd4e-f3fa-47f6-b52b-e11c2f539b24)

Of which the number of bits required to represent an integer x is:

![image](https://github.com/user-attachments/assets/501de02b-69fa-4366-8a3b-8b690c5d1816)

The results:

![image](https://github.com/user-attachments/assets/f4aab8e4-1183-4f4f-a491-c629ff4d2306)

Time complexity is O(log(x)).

Space complexity is O(1).

Conclusion: Newton's method with the above heuristically chosen initial approximation is quite effective in calculating the square root of non-negative numbers in a given range. In terms of execution time, it is surpassed only by implementations of the binary search method.
