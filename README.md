# Experiment – Algorithm Analysis using Big O Notation

**Name:** Varnika Maurya  
**PRN:** 24070123160  

---

##  Objective
The objective of this experiment is to:

1. Understand the concept of **Algorithm Analysis**.  
2. Learn how to analyze **time and space complexity** of algorithms.  
3. Demonstrate algorithms with different **Big O complexities** (O(1), O(n), O(n²)).  
4. Compare the efficiency of algorithms and understand their scalability.

---

##  Theory

### 1. Algorithm
An **algorithm** is a finite sequence of well-defined steps to solve a particular problem.

### 2. Algorithm Analysis
Algorithm analysis evaluates the efficiency of an algorithm in terms of:

- **Time Complexity:** Measures the execution time as a function of input size `n`.  
- **Space Complexity:** Measures the memory consumed as a function of input size `n`.

### 3. Big O Notation (O)
Big O notation represents the **upper bound** of an algorithm’s running time.  
- Expresses the **worst-case performance**.  
- Ignores constant factors and lower-order terms.  

**Examples:**  
- O(1) → Constant time, independent of input size  
- O(n) → Linear time, grows proportionally with input size  
- O(n²) → Quadratic time, grows with the square of input size  

### 4. Other Notations
- **Big Omega (Ω):** Best-case performance.  
- **Big Theta (Θ):** Tight bound; both upper and lower bound.  

### 5. Why Big O is important
- Helps predict algorithm performance on large datasets.  
- Assists in choosing the most efficient algorithm.  
- Useful for optimization and resource management.  

---

##  Program Explanation
The program demonstrates three algorithms with different complexities:

1. **O(1) – Constant Time**  
   - Access the first element of an array.  
   - Execution time is independent of array size.  

2. **O(n) – Linear Time**  
   - Traverse and print all elements of an array.  
   - Execution time grows linearly with input size.  

3. **O(n²) – Quadratic Time**  
   - Print all possible pairs of elements in an array.  
   - Execution time grows quadratically with input size due to nested loops.  

This program helps visualize how the execution time changes with input size.

---

##  Algorithm

### O(1) – Constant Time
1. Take an array `arr` of size `n`.  
2. Access the first element `arr[0]`.  
3. Print the first element.  
4. End.  

### O(n) – Linear Time
1. Take an array `arr` of size `n`.  
2. Loop from `i = 0` to `i = n-1`.  
3. Print each element `arr[i]`.  
4. End.  

### O(n²) – Quadratic Time
1. Take an array `arr` of size `n`.  
2. Use two nested loops:  
   - Outer loop: `i = 0` to `n-1`  
   - Inner loop: `j = 0` to `n-1`  
3. Print all pairs `(arr[i], arr[j])`.  
4. End.  

---

##  Big O Analysis Table

| Algorithm         | Description                     | Input Size n | Time Complexity | Space Complexity |
|------------------|---------------------------------|--------------|----------------|-----------------|
| O(1)             | Access first element            | n            | 1              | O(1)            |
| O(n)             | Print all elements              | n            | n              | O(1)            |
| O(n²)            | Print all pairs of elements     | n            | n²             | O(1)            |

---

##  Step-by-Step Example

**Input Array:** `[1, 2, 3]`  

### O(1) Example
- Access first element → `1`  
- Time = 1 step  

### O(n) Example
- Print all elements → `1 2 3`  
- Time = 3 steps (linear)  

### O(n²) Example
- Print all pairs → `(1,1) (1,2) (1,3) (2,1) ... (3,3)`  
- Time = 9 steps (quadratic)

---

##  Conclusion
- Algorithm analysis using Big O notation helps determine **efficiency and scalability**.  
- Constant time algorithms are fastest, while quadratic or higher-order algorithms grow rapidly with input size.  
- Understanding time complexity allows developers to **choose the most optimal algorithm** for real-world problems.  
- This experiment provides a clear visualization of how algorithm performance varies with input size.  

---
