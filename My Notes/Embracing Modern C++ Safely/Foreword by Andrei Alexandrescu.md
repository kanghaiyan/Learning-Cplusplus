# Foreword by Andrei Alexandrescu

- Do you like version control systems — Git, Perforce, Mercurial, and such? I love them! I have no idea how any of today’s complex software systems could have ever been built witForeword by Andrei Alexandrescuhout using version control.

- One beneficial artifact of version control software is the diff view, that quintessential side-by-side view of a change of a large system as a differential from the previous, known version of the system. The diff view is often the best way to review code, to assess complexity of a feature, to find a bug, and, most importantly, to get familiar with a new system. I pore over diff views almost every working day, perusing them for one or more of their advantages. The diff view is proof that we can actually have the proverbial nice things.

- The novel concept of this book is a diff view between classic C++ - i.e. C++03, the baseline - and modern C++ — i.e., post-2011 C++, with its added features. A diff view of programming language features! Now that’s a cool idea with interesting implications.

- Embracing Modern C++ Safely addresses a large category of programmers: those who work daily on complex, long-lived C++ systems and who are familiar with C++03 because said systems were written with that technology. Classes. Inheritance. Polymorphism. Templates. The STL. Yep, they know these notions well and work with them every day in complex problem domains. Rehashing those classic features is unnecessary. But some programmers are perhaps less comfortable with the cornucopia of new features standardized every three years, starting with C++11. They have no time to spend on tracking what the C++ Standards Committee is doing. Every hour spent learning new C++ features is an hour not spent on core systems functionality, so that snazzy new feature better be worth it. Embracing Modern C++ Safely is cleverly optimized to maximize the ratio of usefulness in production to time spent learning.

- Pedagogically, this book achieves an almost impossible challenge: a partial diff (to allow this nerd a mathematically motivated metaphor) for each individual new feature added to C++ after 2003. What do I mean by that? When a book teaches language features, cross talk is inevitable: While discussing any one given feature, most other features interfere by necessity. As Scott Meyers once told me, “When you learn a language, all features come at you in parallel.” The authors modularized the teaching of each new feature, so if you want to read about, say, generic lambdas, you get to read about generic lambdas with minimal interference from any other new language feature. When necessary, the interaction between the feature being discussed and others is narrowly specified, documented, and cross-referenced. The result is a fractally self-consistent book that can be read cover to cover or chunked by themes, interconnected features, or individual topics.

- Only the passage of time can distill the programming community’s practical experience with each feature and how well it fared, which is why this book discusses features added up to C++14, even though C++20 is already out. Using features for years can replace passionate debate on language design ideas with cold, hard experience, which guides this book’s remarkably clinical approach. In the words of John Lakos, “We explain the degrees of burns you could get if you put your hand on a hot stove, but we won’t tell you not to do it.”  The result
is a refreshingly nonideological read, no more partisan than a book on experimental physics. Consistently avoiding injecting one’s own ego and opinion in an analysis takes paradoxically a lot of work.

-  Good artists don’t leave fingerprints all over their work. In a very concrete way, that has been a design goal of Embracing Modern C++ Safely, for you won’t find in it any opinion, pontification, or even gratuitously flowery language. (Fierce debates occurred about the perfect, most spartan choice of words in one paragraph or another.) This polished clarity will, I’m sure, shine through to any reader.

## That Extra Oomph

- “The only kind of writing is rewriting,” goes the famous quote. That is doubly true for technical books. The strength of a textbook stands in the willingness of its authors to redo their work and in the depth and breadth of its review team feeding the revision process. And rewriting is not easy! Have you ever written some code and then resisted reviews because you fell in love with it? Multiply that by 1024 and you’ll know how book authors feel about rewriting passages they’ve already poured their souls into. You really need to be committed to quality to keep heart during such a trial.

- The authors’ insistence on quality brings to mind what I like most about this book, which is also the most difficult to explain. I call it the extra oomph.

- I noticed something about great work — be it in engineering, art, sports, or any other challenging human endeavor. Almost always, great work is the result of talented people making an extra effort that goes beyond what one might consider reasonable. In appreciating such work, we implicitly acknowledge great capability combined with commensurately great effort in realizing it. Good work can be done glibly; great work cannot.

- The quest for perfection is as contagious as the resignation to sloppiness and incomparably more fun.

- 
