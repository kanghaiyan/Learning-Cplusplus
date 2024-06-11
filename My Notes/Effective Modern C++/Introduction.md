# Introduction

-  This book is devoted not to describing the features of C++11 and C++14, but instead to their effective application.

- The information in the book is broken into guidelines called Items. Want to understand the various forms of type deduction? Or know when (and when not) to use auto declarations? Are you interested in why const member functions should be thread safe, how to implement the Pimpl Idiom using std::unique_ptr, why you should avoid default capture modes in lambda expressions, or the differences between std::atomic and volatile? The answers are all here. Furthermore, they’re platform-independent, Standards-conformant answers. This is a book about portable C++.

- The Items in this book are guidelines, not rules, because guidelines have exceptions. The most important part of each Item is not the advice it offers, but the rationale behind the advice. Once you’ve read that, you’ll be in a position to determine whether the circumstances of your project justify a violation of the Item’s guidance. The true goal of this book isn’t to tell you what to do or what to avoid doing, but to convey a deeper understanding of how things work in C++11 and C++14.

- C++11’s most pervasive feature is probably move semantics, and the foundation of move semantics is distinguishing expressions that are rvalues from those that are lvalues. That’s because rvalues indicate objects eligible for move operations, while lvalues generally don’t. In concept (though not always in practice), rvalues correspond to temporary objects returned from functions, while lvalues correspond to objects you can refer to, either by name or by following a pointer or lvalue reference.

- A useful heuristic to determine whether an expression is an lvalue is to ask if you can take its address. If you can, it typically is. If you can’t, it’s usually an rvalue. A nice feature of this heuristic is that it helps you remember that the type of an expression is independent of whether the expression is an lvalue or an rvalue. That is, given a type T, you can have lvalues of type T as well as rvalues of type T. It’s especially important to remember this when dealing with a parameter of rvalue reference type, because the parameter itself is an lvalue:
```cpp
class Widget {
	public:
	Widget(Widget&& rhs);    // rhs is an lvalue, though it has
	...                      // an rvalue reference type
};
```

- Here, it’d be perfectly valid to take rhs’s address inside Widget’s move constructor, so rhs is an lvalue, even though its type is an rvalue reference. (By similar reasoning, all parameters are lvalues.)

- I use the parameter name rhs (“right-hand side”). It’s my preferred parameter name for the move operations (i.e., move constructor and move assignment operator) and the copy operations (i.e., copy constructor and copy assignment operator). I also employ it for the right-hand parameter of binary operators.

- When an object is initialized with another object of the same type, the new object is said to be a copy of the initializing object, even if the copy was created via the move constructor. Regrettably, there’s no terminology in C++ that distinguishes between an object that’s a copy-constructed copy and one that’s a move-constructed copy.

- Copies of rvalues are generally move constructed, while copies of lvalues are usually copy constructed. An implication is that if you know only that an object is a copy of another object, it’s not possible to say how expensive it was to construct the copy. 

- Well-designed functions are exception safe, meaning they offer at least the basic exception safety guarantee (i.e., the basic guarantee). Such functions assure callers that even if an exception is thrown, program invariants remain intact (i.e., no data structures are corrupted) and no resources are leaked. Functions offering the strong exception safety guarantee (i.e., the strong guarantee) assure callers that if an exception arises, the state of the program remains as it was prior to the call.

- When I refer to a function object, I usually mean an object of a type supporting an operator() member function. In other words, an object that acts like a function. Occasionally I use the term in a slightly more general sense to mean anything that can be invoked using the syntax of a non-member function call (i.e., “function Name(arguments)”). This broader definition covers not just objects supporting operator(), but also functions and C-like function pointers.
- Generalizing further by adding member function pointers yields what are known as ***callable objects.*** You can generally ignore the fine distinctions and simply think of function objects and callable objects as things in C++ that can be invoked using some kind of function-calling syntax.

- Function objects created through lambda expressions are known as ***closures***. It’s seldom necessary to distinguish between lambda expressions and the closures they create, so I often refer to both as *lambdas.* Similarly, I rarely distinguish between *function templates* (i.e., templates that generate functions) and *template functions* (i.e., the functions generated from function templates). Ditto for *class templates* and template classes.
