# Competitive Programming Fundamentals

> Classic algorithms — graphs, dynamic programming, sorting, two pointers and bit tricks — implemented in C and C++.

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white) ![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black) ![Programs](https://img.shields.io/badge/Programs-26-blue?style=flat-square)

## Overview

Self-study implementations of the standard techniques every competitive programmer needs. The topics largely follow *Competitive Programmer's Handbook* by Antti Laaksonen (a copy is kept in the repo as [book.pdf](./book.pdf)): maximum subarray sum, coin problems, LIS, edit distance, nearest smaller elements, sliding-window minimum, counting subgrids, graph traversal and shortest paths.

## Graph algorithms

| Program | Technique | Code |
|---|---|---|
| Breadth-first search | Queue-based traversal | [BFS.cpp](./BFS.cpp) |
| Depth-first search | Recursive traversal | [DFS.cpp](./DFS.cpp) |
| Bellman–Ford | Edge relaxation, negative-cycle detection | [Bellman.cpp](./Bellman.cpp) |
| Bipartiteness check | BFS two-colouring | [Bipartiteness.cpp](./Bipartiteness.cpp) |
| Connectivity check | DFS reachability from one node | [Connectivity check.cpp](./Connectivity%20check.cpp) |
| Cycle detection | DFS with parent tracking | [find cycle.cpp](./find%20cycle.cpp) |
| Subtree sizes | DFS counting nodes in a subtree | [numberofnode.cpp](./numberofnode.cpp) |

## Dynamic programming

| Program | Technique | Code |
|---|---|---|
| Coin change — number of ways | Bottom-up DP over sums | [allSolution.cpp](./allSolution.cpp) |
| Coin change — minimum coins | Bottom-up DP with solution reconstruction | [minCoin.cpp](./minCoin.cpp) |
| Longest increasing subsequence | O(n²) DP | [longestIncreasingSubsequence.cpp](./longestIncreasingSubsequence.cpp) |
| Edit (Levenshtein) distance | 2-D DP table | [levenshtein.cpp](./levenshtein.cpp) |

## Sorting & divide and conquer

| Program | Technique | Code |
|---|---|---|
| Bubble sort | Adjacent swaps | [bubble sort.c](./bubble%20sort.c) |
| Merge sort | Divide & conquer | [merge_sort.c](./merge_sort.c) |
| Inversion count | Merge sort, counting during merge | [inversion.c](./inversion.c) |
| Sorting with the STL | `std::sort` on a `vector` | [sortSTL.cpp](./sortSTL.cpp) |

## Arrays, two pointers & amortized analysis

| Program | Technique | Code |
|---|---|---|
| 2SUM | Sort + two pointers | [2sum.cpp](./2sum.cpp) |
| Subarray with given sum | Two pointers (sliding window) | [subarraySum.cpp](./subarraySum.cpp) |
| Maximum subarray sum | Kadane's algorithm | [Kadane’s algorithm.c](./Kadane%E2%80%99s%20algorithm.c) |
| Majority element | Moore's voting algorithm | [majorityElement_Moore’s Voting Algorithm.cpp](./majorityElement_Moore%E2%80%99s%20Voting%20Algorithm.cpp) |
| Nearest smaller elements | Monotonic stack | [nearestSmallerElements.cpp](./nearestSmallerElements.cpp) |
| Sliding window minimum | Monotonic queue | [Sliding window minimum.cpp](./Sliding%20window%20minimum.cpp) |
| Counting subgrids | Pairs of rows, counting shared black columns | [Counting subgrids.cpp](./Counting%20subgrids.cpp) |

## Bits & number theory

| Program | Technique | Code |
|---|---|---|
| Hamming distance | `__builtin_popcount` | [Hamming.cpp](./Hamming.cpp) |
| Decimal to binary | Repeated division with a stack | [changetobinary.cpp](./changetobinary.cpp) |
| Primality test | Trial division up to √n | [isPrime.cpp](./isPrime.cpp) |
| STL set basics | `std::set` construction and iteration | [vector.cpp](./vector.cpp) |

## Compile & run

Each file is a standalone, interactive program that prompts for its input on stdin.

```bash
# C++ programs
g++ -std=c++17 -O2 Bellman.cpp -o bellman && ./bellman

# C programs
gcc -std=c11 -O2 "merge_sort.c" -o merge_sort && ./merge_sort
```

---

Made by [Mukul Kumar](https://mkk96.github.io) · [GitHub](https://github.com/mkk96) · [LinkedIn](https://www.linkedin.com/in/mukul-kumar-60322616b/)
