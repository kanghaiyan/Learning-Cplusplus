# Preface

- C++11 practically doubled the size of the standard library, adding such headers as <tuple>, <type_traits>, and <regex>. C++17 doubles the library again, with additions such as <optional>, <any>, and <filesystem>. A programmer who’s been spending time writing code instead of watching the standardization process might fairly feel that the standard library has gotten away from him--that there’s so many new things in the library that he'll never be able to master the whole thing, or even to sort the wheat from the chaff. After all, who wants to spend a month reading technical documentation on std::locale and std::ratio, just to find out that they aren't useful in your daily work?

- In this book, I'll teach you the most important features of the C++17 standard library. In the interest of brevity, I omit some parts, such as the aforementioned <type_traits>; but we'll cover the entire modern STL (every standard container and every standard algorithm), plus such important topics as smart pointers, random numbers, regular expressions, and the new-in-C++17 <filesystem> library.

## What this book covers

- Chapter 1, Classical Polymorphism and Generic Programming, covers classical polymorphism (virtual member functions) and generic programming (templates).
- Chapter 2, Iterators and Ranges, explains the concept of iterator as a generalization of pointer, and the utility of half-open ranges expressed as a pair of iterators.
- Chapter 3, The Iterator-Pair Algorithms, explores the vast variety of standard generic algorithms that operate on ranges expressed as iterator-pairs.
- Chapter 4, The Container Zoo, explores the almost equally vast variety of standard container class templates, and which containers are suitable for which jobs.
- Chapter 5, Vocabulary Types, walks you through algebraic types such as std::optional. and ABI-friendly type-erased types such as std::function.
- Chapter 6, Smart Pointers, teaches the purpose and use of smart pointers.
- Chapter 7, Concurrency, covers atomics, mutexes, condition variables, threads, futures, and promises.
- Chapter 8, Allocators, explains the new features of C++17's <memory_resource> header.
- Chapter 9, Iostreams, explores the evolution of the C++ I/O model, from <unistd.h> to <stdio.h> to <iostream>.
- Chapter 10, Regular Expressions, teaches regular expressions in C++.
- Chapter 11, Random Numbers, walks you through C++'s support for pseudo-random number generation.
- Chapter 12, Filesystem, covers the new-in-C++17 <filesystem> library.
