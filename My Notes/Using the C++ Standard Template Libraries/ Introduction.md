# Introduction

- This book is a tutorial on the class and function templates that are contained within a subset of the header files that make up the C++ Standard Library.
- These are generic programming tools that offer vast capability, are easy to use, and make many things simple to implement that would otherwise be difficult. The code they generate is usually more efficient and reliable than you could write yourself.

- My approach therefore, is not just to explain the functionality of the class and function templates, but as far as possible to show how you apply them in a practical context. This leads to some sizeable chunks of code at some points, but I believe you’ll think that it’s worth it.
- The collection of header files from the C++ Standard Library that are the subject of this book are referred to as the Standard Template Library or simply the STL. Of course, there’s really no such thing as the STL - the C++ Language Standard doesn’t mention it so formally it doesn’t exist. In spite of the fact that it is undefined, most C++ programmers know roughly what is meant by the STL. It’s been around in various guises for a long time.

- The idea of generic programming that is embodied in the STL originated with ***Alexander Stepanov*** back in 1979 - long before there was a standard for the C++ language. The first implementation of the STL for C++ was originated by Stepanov and others around 1989 working at Hewlett Packard, and this STL implementation was complementary to the libraries that were provided with C++ compilers at that time.
- The capability offered by the STL was first considered for incorporation into the first proposed C++ language standard in the early 1990s, and the essentials of the STL made it into the first language standard for C++ that was published in 1998. Since then the generic programming facilities that the STL represents have been improved and extended, and templates are to be found in many header files that are not part of what could be called the STL.
- The STL is not a precise concept and this book doesn’t cover all the templates in the C++ Standard Library. Overall, the book describes and demonstrates the templates from the Standard Library that I think should be a first choice for C++ programmers to understand, especially those who are relatively new to C++.
- The primary Standard Library header files that are discussed in depth include:

|                                    |                                                                                                                                    |
| ---------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------- |
| For data containers:               | \<array>, \<vector>, \<deque>, \<stack>, \<queue>, \<list>,<br>\<forward_list>, \<set>, \<unordered_set>, \<map>, \<unordered_map> |
| For iterators:                     | \<iterator>                                                                                                                        |
| For algorithms:                    | \<algorithm>                                                                                                                       |
| For random numbers and statistics: | \<random>                                                                                                                          |
| For processing numerical data:     | \<valarray>, \<numeric>                                                                                                            |
| For time and timing:               | \<ratio>, \<chrono>                                                                                                                |
| For complex numbers:               | \<complex>                                                                                                                         |

- Templates from other headers such as \<pair>, \<tuple>, \<functional>, and \<memory> also get dragged in to the book at various points. The templates for ***data containers*** are fundamental; these will be useful in the majority of applications. Iterators are a basic tool for working with containers so they are included also.
- ***Algorithms*** are function templates that operate on data stored in containers. These are powerful tools that you can also apply to arrays and they are described and illustrated with working examples. I have included a chapter that explains the templates that relate to random number generation and statistics. While some of these are quite specialized, many are widely applicable in simulations, modeling, and games programs. The templates for compute-intensive numerical data processing are discussed, and those relating to time and timing. Finally, there’s a brief introduction to the class templates for working with complex numbers.
