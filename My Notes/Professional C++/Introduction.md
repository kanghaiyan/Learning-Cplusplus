# Introduction

- The development of C++ started in 1982 by Bjarne Stroustrup, a Danish computer scientist, as the successor of C with Classes. In 1985, the first edition of The C++ Programming Language book was released. The first standardized version of C++ was released in 1998, called C++98. In 2003, C++03 came out and contained a few small updates. After that, it was silent for a while, but traction slowly started building up, resulting in a major update of the language in 2011, called C++11. From then on, the C++ Standard Committee has been on a three-year cycle to release updated versions, giving us C++14, C++17, and now C++20. All in all, with the release of C++20 in 2020, C++ is almost 40 years old and still going strong.
- Besides wide hardware support, C++ can be used to tackle almost any programming job, be it games on mobile platforms, performance-critical artificial intelligence (AI) and machine learning (ML) software, real-time 3-D graphics engines, low-level hardware drivers, entire operating systems, and so on.

- The performance of C++ programs is hard to match with any other programming language, and as such, it is the de facto language for writing fast, powerful, and enterprise-class object-oriented programs. As popular as C++ has become, the language is surprisingly difficult to grasp in full. There are simple, but powerful, techniques that professional C++ programmers use that don’t show up in traditional texts, and there are useful parts of C++ that remain a mystery even to experienced C++ programmers.

- Too often, programming books focus on the syntax of the language instead of its real-world use. The typical C++ text introduces a major part of the language in each chapter, explaining the syntax and providing an example. Professional C++ does not follow this pattern. Instead of giving you just the nuts and bolts of the language with little practical context, this book will teach you how to use C++ in the real world. It will show you the little-known features that will make your life easier, as well as the programming techniques that separate novices from professional programmers.

## What this book covers

- Professional C++ teaches you more than just the syntax and language features of C++. It also emphasizes programming methodologies, reusable design patterns, and good programming style. The Professional C++ methodology incorporates the entire software development process, from designing and writing code to debugging and working in groups. This approach will enable you to master the C++ language and its idiosyncrasies, as well as take advantage of its powerful capabilities for large-scale software development.

- ***The following are additional excellent online resources:***
	- github.com/isocpp/CppCoreGuidelines: The C++ Core Guidelines are a collaborative effort led by Bjarne Stroustrup, inventor of the C++ language itself. They are the result of many person-years of discussion and design across a number of organizations. The aim of the guidelines is to help people to use modern C++ effectively. The guidelines are focused on relatively higher-level issues, such as interfaces, resource management, memory management, and concurrency.
	- isocpp.org/faq: This is a large collection of frequently asked C++ questions.

## GCC

- To compile your code, open a terminal and run the following command, specifying all your .cpp files that you want to compile:
	g++ -std=c++2a -o <executable_name> <source1.cpp> \[source2.cpp ...]
- The -std=c++2a option is required to tell GCC to enable C++20 support. This option will change to -std=C++20 once GCC is fully C++20 compliant.

### Module Support

- At the time of this writing, GCC only had experimental support for modules through a special version of GCC (branch devel/c++-modules). When you are using such a version of GCC, module support is enabled with the -fmodules-ts option, which might change to -fmodules in the future.

- Unfortunately, import declarations of Standard Library headers such as the following were not yet properly supported:
``` cpp
import <iostream>;
```

- If that’ s the case, simply replace such import declarations with corresponding 
	\#include directives: \#include \<iostream>

- For example, the AirlineTicket example from Chapter 1 uses modules. After having replaced the imports for Standard Library headers with #include directives, you can compile the AirlineTicket
example by changing to the directory containing the code and running the following command:
```
g++ -std=c++2a -fmodules-ts -o AirlineTicket AirlineTicket.cppm AirlineTicket.cpp AirlineTicketTest.cpp
```
- When it compiles without errors, you can run it as follows:
```
./AirlineTicket
```

---