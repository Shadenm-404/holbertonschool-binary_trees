# 0x1D. C - Binary trees

## Description
This project is part of the low-level programming curriculum at Holberton School.  
It focuses on **binary trees**, one of the most fundamental and powerful data structures in computer science.

You will learn how to create, traverse, and manipulate binary trees, as well as understand their relationship to other data structures such as **Binary Search Trees (BSTs)**, **AVL Trees**, and **Heaps**.

---

##  Learning Objectives
By the end of this project, you should be able to explain (without Google):

### General
- What is a **binary tree**
- The difference between a **binary tree** and a **Binary Search Tree**
- The possible gain in terms of time complexity compared to linked lists
- What are the **depth**, **height**, and **size** of a binary tree
- The different **traversal methods** to go through a binary tree
- What is a **complete**, **full**, **perfect**, and **balanced** binary tree

---

##  Data Structures

### Basic Binary Tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
