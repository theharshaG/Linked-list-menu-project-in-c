# Linked-list-menu-project-in-c

C Linked List Programs

## Overview

This repository contains C programs demonstrating Linked List operations and Dynamic Memory Allocation concepts. These programs help in understanding node creation, traversal, searching, deletion, reversing, and advanced linked list logic.

The programs are useful for:

* Beginners learning Data Structures in C
* College laboratory exercises
* Coding interview preparation
* Understanding pointers and memory allocation
* Practicing linked list operations

---

## Programs Included

### 1. Linked List Insert, Display, Search, Delete, Reverse and Middle Element

This program performs multiple operations on a Singly Linked List using menu-driven implementation.

Features:

* Insert node at end
* Display list
* Search node
* Count total nodes
* Delete node
* Reverse linked list
* Find middle node

#### Output Example

```text
1.Insert End
2.Display
3.Search
4.Count List
5.Delete
6.Reverse
7.Middle
8.Exit

Enter choice: 1
Enter data: 10

Enter choice: 1
Enter data: 20

Enter choice: 1
Enter data: 30

Enter choice: 2

Linked list =>
10 -> 20 -> 30 -> NULL

Enter choice: 3
Enter data to search:
20

data found at 2

Enter choice: 4

total list:3

Enter choice: 6

Reversed List:
30 -> 20 -> 10 -> NULL

Enter choice: 7

Middle=20
```

#### Concepts Used

* Structures
* Dynamic Memory Allocation
* malloc()
* Linked List
* Traversal
* Searching
* Node Deletion
* Pointer Manipulation
* Reverse Algorithm
* Slow & Fast Pointer Technique

---

### 2. Linked List Reversal (Iterative)

This program reverses a linked list using three pointers.

#### Logic Used

```text
prev = NULL
curr = head

while(curr != NULL)
{
next = curr->next
curr->next = prev
prev = curr
curr = next
}

head = prev
```

#### Output Example

```text
Original:

10 -> 20 -> 30 -> NULL

Reverse:

30 -> 20 -> 10 -> NULL
```

#### Concepts Used

* Iterative Linked List Reversal
* Pointer Tracking
* Memory Handling

---

### 3. Linked List Reversal (Recursive)

This program reverses the list using recursion.

#### Output Example

```text
Original:

10 -> 20 -> 30 -> NULL

Reverse:

30 -> 20 -> 10 -> NULL
```

#### Concepts Used

* Recursion
* Recursive Function Calls
* Linked List Manipulation

---

### 4. Find Middle Node

This program finds the middle node using Slow and Fast pointers.

#### Logic

```text
slow = head
fast = head

slow -> move 1 step
fast -> move 2 steps
```

#### Output Example

```text
Input:

10 -> 20 -> 30 -> 40 -> 50

Middle = 30
```

#### Concepts Used

* Two Pointer Technique
* Fast & Slow Traversal

---

### 5. Delete First Node

Deletes the first node safely.

#### Output Example

```text
Before:

10 -> 20

After:

20
```

---

### 6. Delete Last Node

Deletes the final node from linked list.

#### Output Example

```text
Before:

10 -> 20 -> 30

After:

10 -> 20
```

---

### 7. Delete Middle Node

Deletes a selected middle node.

#### Output Example

```text
Before:

10 -> 20 -> 30

After:

10 -> 30
```

---

## Technologies Used

* C Programming
* GCC Compiler
* VS Code
* CodeBlocks
* Linux Terminal

---

## Project Structure

```text
## Project Structure

```text
linked-list-menu-project-in-c/
│
├── linked_menu_project.c
|___insertEnd(), display(), search(), delete(), reverse(), middle())
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

* Structures in C
* Dynamic Memory Allocation
* Singly Linked List
* Traversing Nodes
* Searching Techniques
* Reversal Algorithms
* Node Deletion
* Pointer Concepts
* Recursive Thinking

---

## Future Improvements

Possible future additions:

* Insert at Position
* Circular Linked List
* Doubly Linked List
* Queue using Linked List
* Stack using Linked List
* Merge Two Lists
* Sort Linked List

---

## Author

**Harsha G**

Learning:

* C Programming
* Data Structures & Algorithms
* Embedded Systems
* Python Development
* Problem Solving
