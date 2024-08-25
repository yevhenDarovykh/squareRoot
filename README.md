# Square root
LeetCode task - Sqrt(x).

![image](https://github.com/user-attachments/assets/d4eece55-49d6-4910-a542-711d65f9d916)

This task was solved by Newton's method implementation.
![image](https://github.com/user-attachments/assets/6c8dceab-2b42-475e-86f4-db569070093d)

Full method description:
https://en.wikipedia.org/wiki/Newton%27s_method

Next expression was taken as an initial approximation:

![image](https://github.com/user-attachments/assets/61c4ba51-599a-4a4d-a19e-83903b0ab894)

Of which the number of bits required to represent an integer x is:

![image](https://github.com/user-attachments/assets/0d7c49b2-00bc-4a53-b8cb-9f99fb4ef14d)



The results:

![image](https://github.com/user-attachments/assets/5bd96ada-c31a-4e6f-86a9-3b5887cac443)

Time complexity is O(log(x)).

Space complexity is O(1).

Conclusion: Newton's method with the above heuristically chosen initial approximation is quite effective in calculating the square root of non-negative numbers in a given range. In terms of execution time, it is surpassed only by implementations of the binary search method.
