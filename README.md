# 📘 STL in C++

This repository contains implementations and practice programs for **C++ Standard Template Library (STL)**.  
The goal is to strengthen problem-solving and coding skills using **vectors, pairs, iterators, functions, and more**.

---

## 📂 Topics Covered
- ✅ Vectors  
- ✅ Pairs  
- ✅ Iterators  
- ✅ Insertion & Deletion  
- ✅ Functions  

---

## ⚡ How to Compile & Run

1. Open terminal inside the project folder.  
2. Compile any file using:  
   ```bash
   g++ filename.cpp
   ./a

---

# 📚 STL in C++ – Day 2

## 📌 Topics Learned
- **Stack**
  - Basic operations: `push()`, `pop()`, `top()`, `empty()`
  - `swap()` → Exchanges the contents of two stacks in constant time.  
    Example:  
    If `s1 = {1,2,3}` and `s2 = {4,5}`,  
    after `s1.swap(s2)`:  
    - `s1 = {4,5}`  
    - `s2 = {1,2,3}`  

- **Deque**
  - Double-ended queue supporting insertion/deletion from both ends.  
  - Functions: `push_back()`, `push_front()`, `pop_back()`, `pop_front()`, `at()`, `front()`, `back()`.

- **List**
  - Doubly linked list implementation.  
  - Allows fast insertion and deletion anywhere.  
  - Functions: `push_back()`, `push_front()`, `insert()`, `erase()`, `remove()`, `sort()`, `reverse()`.

- ## 📂 Topics Covered
- ✅Stack
- ✅ Deque
- ✅ List

---

## ✅ Practice
- Implemented **Stack Swap Example** with a helper function to print elements.  
- Tried **Deque and List** with insertion, deletion, and traversal.  

---

## 🏷️ Day Summary
Today’s focus was on **STL Containers** (Stack, Deque, List) — building a strong foundation in C++ STL, which is highly useful in DSA and competitive programming.

---

# 📘 STL – Stack, Queue & Priority Queue (Day 3)

Today I explored **container adaptors** in C++ STL: **Stack, Queue, and Priority Queue**.  
These are built on top of other containers (like `deque` or `vector`) but provide restricted access to ensure correct usage.

---

## 📌 Topics Covered

### 🔹 Stack (LIFO – Last In, First Out)
- Operations:
  - `push(x)` → Insert element on top
  - `pop()` → Remove top element
  - `top()` → Access top element
  - `empty()` → Check if stack is empty
  - `size()` → Number of elements
- Additional: `swap(s1, s2)` to exchange contents of two stacks.

---

### 🔹 Queue (FIFO – First In, First Out)
- Operations:
  - `push(x)` → Insert element at back
  - `pop()` → Remove element from front
  - `front()` → Access front element
  - `back()` → Access last element
  - `empty()` / `size()`

⚠️ **Note:** `queue` does not provide iterators or range-based for loops.  
To print elements, we must pop them one by one.

---

### 🔹 Priority Queue (Heap-based)
- By default, **max-heap** (largest element at top).
- For **min-heap**: use  
  ```cpp
  priority_queue<int, vector<int>, greater<int>> pq;

- ## 📂 Topics Covered
- ✅Stack
- ✅ Queue
- ✅ PriorityQueue

---

# Day 4 - C++ STL Practice

**Topics Covered:**

* Set
* Multiset
* Unordered Set
* Map
* Multimap
* Unordered Map

---

## Summary

Today, I explored various **C++ Standard Template Library (STL) containers** focused on **associative containers**.

### 1. Set

* Stores **unique elements** in **sorted order**.
* Provides **logarithmic time complexity** for insertion, deletion, and search.

### 2. Multiset

* Stores **duplicate elements** in **sorted order**.
* Useful when you need **counting of duplicates** with automatic ordering.

### 3. Unordered Set

* Stores **unique elements** in **unsorted order**.
* Provides **average constant time complexity** for insertion, deletion, and search.

### 4. Map

* Stores **key-value pairs** with **unique keys** in **sorted order by key**.
* Useful for **associative mapping**.

### 5. Multimap

* Stores **key-value pairs** but **allows duplicate keys**.
* Keys are stored in **sorted order**.

### 6. Unordered Map

* Stores **key-value pairs** with **unique keys** in **unsorted order**.
* Provides **average constant time complexity** for insertion, deletion, and search.

---

## Key Notes

* Iterating with `&` in a for loop helps **save memory** by avoiding copying elements.
* `unordered_*` containers are generally **faster for lookup** if ordering is not needed.
* `multiset` and `multimap` are useful when **duplicates are allowed**.

---

# 📘 DSA Practice – Day 5  

## 📌 Algorithms Covered  
Today we explored important **C++ STL algorithms** frequently used in DSA:  
- `sort()` with custom comparator  
- `__builtin_popcount()` and `__builtin_popcountll()`  
- `next_permutation()`  

---

## 🔹 Sorting with Custom Comparator  

```cpp
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second) return a.first < b.first;  // tie-breaker
    return a.second < b.second;  // sort by second element
}

int main() {
    vector<pair<int,int>> vp = {{1,2}, {3,1}, {2,2}, {5,1}};
    sort(vp.begin(), vp.end(), cmp);

    cout << "Sorted Pairs:\n";
    for (auto p : vp) cout << "(" << p.first << "," << p.second << ") ";
}

` SOME MORE IMPORTANT ALGORITHMS IN THIS U CHECK THE CODE FOR THIS...`


##  Day 6
~Today nothing to push this is for strike...

The main important DS and Alogrithms has been completed...This is just basics for the STL of CPP...





