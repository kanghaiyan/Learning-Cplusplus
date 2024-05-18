# Preface

## Initializations

- I usually use the modern form of initialization (introduced in C++11 as uniform initialization) with curly braces or with = in trivial cases:
```cpp
int i = 42;
std::string s{"hello"};
```

- ***The brace initialization has the following advantages:***
	- It can be used with fundamental types, class types, aggregates, enumeration types, and auto
	- It can be used to initialize containers with multiple values
	- It can detect narrowing errors (e.g., initialization of an int by a floating-point value)
	- It cannot be confused with function declarations or calls

- If the braces are empty, the default constructors of (sub)objects are called and fundamental data types are guaranteed to be initialized with 0/false/nullptr.

## The C++ Standards

- C++ has different versions defined by different C++ standards. The original C++ standard was published in 1998 and was subsequently amended by a technical corrigendum in 2003, which provided minor corrections and clarifications to the original standard. This “old C++ standard” is known as C++98 or C++03. The world of “Modern C++” began with C++11 and was extended with C++14 and C++17.
---
