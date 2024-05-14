# Preface

- We want to provide this book as a basis for your team's coding standards for two principal reasons:
	- ***A coding standard should reflect the community's best tried-and-true experience:*** It should contain proven idioms based on experience and solid understanding of the language. In particular, a coding standard should be based firmly on the extensive and rich software development literature, bringing together rules, guidelines, and best practices that would otherwise be left scattered throughout many sources.
	- ***Nature abhors a vacuum:*** If you don't consciously set out reasonable rules, usually someone else will try to push their own set of pet rules instead. A coding standard made that way usually has all of the least desirable properties of a coding standard; for example, many such standards try to enforce a minimalistic C-style use of C++.

- Many bad coding standards have been set by people who don't understand the language well, don't understand software development well, or try to legislate too much. A bad coding standard quickly loses credibility and at best even its valid guidelines are liable to be ignored by disenchanted programmers who dislike or disagree with its poorer guidelines. That's "at best" - at worst, a bad standard might actually be enforced.

## How to Use This Book

- *Think*. Do follow good guidelines conscientiously; but don't follow them blindly. In this book's Items, note the Exceptions clarifying the less common situations where the guidance may not apply. No set of guidelines, however good (and we think these ones are), should try to be a substitute for thinking.

- Each development team is responsible for setting its own standards, and for setting them responsibly. That includes your team. If you are a team lead, involve your team members in setting the team's standards; people are more likely to follow standards they view as their own than they are to follow a bunch of rules they feel are being thrust upon them.

- This book is designed to be used as a basis for, and to be included by reference in, your team's coding standards. It is not intended to be the Last Word in coding standards, because your team will have additional guidelines appropriate to your particular group or task, and you should feel free to add those to these Items. But we hope that this book will save you some of the work of (re)developing your own, by documenting and referencing widely-accepted and authoritative practices that apply nearly universally (with Exceptions as noted), and so help increase the quality and consistency of the coding standards you use.

- Have your team read these guidelines with their rationales (i.e., the whole book, and selected Items' References to other books and papers as needed), and decide if there are any that your team simply can't live with (e.g., because of some situation unique to your project). Then commit to the rest. Once adopted, the team's coding standards should not be violated except after consulting with the whole team.

- Finally, periodically review your guidelines as a team to include practical experience and feedback from real use.

## Coding Standards and You

- ***Good coding standards can offer many interrelated advantages:***
	- ***Improved code quality:*** Encouraging developers to do the right things in a consistent way directly works to improve software quality and maintainability.
	- ***Improved development speed:*** Developers don't need to always make decisions starting from first principles.
	- ***Better teamwork:*** They help reduce needless debates on inconsequential issues and make it easier for teammates to read and maintain each other's code.
	- ***Uniformity in the right dimension:*** This frees developers to be creative in directions that matter.

- Under stress and time pressure, people do what they've been trained to do. They fall back on habit. That's why ER units in hospitals employ experienced, trained personnel; even knowledgeable beginners would panic.
- ***As software developers, we routinely face enormous pressure to deliver tomorrow's software yesterday***. Under schedule pressure, we do what we are trained to do and are used to doing. Sloppy programmers who in normal times don't know good practices of software engineering (or aren't used to applying them) will write even sloppier and buggier code when pressure is on. Conversely, programmers who form good habits and practice them regularly will keep themselves organized and deliver quality code, fast.

- The coding standards introduced by this book are a collection of guidelines for writing high-quality C++ code. They are the distilled conclusions of a rich collective experience of the C++ community. Much of this body of knowledge has only been available in bits and pieces spread throughout books, or as word-of-mouth wisdom. This book's intent is to collect that knowledge into a collection of rules that is terse, justified, and easy to understand and follow.

- Of course, one can write bad code even with the best coding standards. The same is true of any language, process, or methodology. A good set of coding standards fosters good habits and discipline that transcend mere rules. That foundation, once acquired, opens the door to higher levels. ***There's no shortcut; you have to develop vocabulary and grammar before writing poetry.*** We just hope to make that easier. 

- ***We address this book to C++ programmers of all levels:***
	- If you are an apprentice programmer, we hope you will find the rules and their rationale helpful in understanding what styles and idioms C++ supports most naturally. We provide a concise rationale and discussion for each rule and guideline to encourage you to rely on understanding, not just rote memorization.
	- For the intermediate or advanced programmer, we have worked hard to provide a detailed list of precise references for each rule. This way, you can do further research into the rule's roots in C++'s type system, grammar, and object model. At any rate, it is very likely that you work in a team on a complex project. Here is where coding standards really pay off - you can use them to bring the team to a common level and provide a basis for code reviews.

## About This Book

- ***We have set out the following design goals for this book:***
	- ***Short is better than long:*** Huge coding standards tend to be ignored; short ones get read and used. Long Items tend to be skimmed; short ones get read and used.
	
	- ***each Item must be noncontroversial:*** This book exists to document widely agreed-upon standards, not to invent them. If a guideline is not appropriate in all cases,it will be presented that way (e.g., "Consider X..." instead of "Do X...") and we will note commonly accepted exceptions.
	
	- ***Each Item must be authoritative:*** The guidelines in this book are backed up by references to existing published works. This book is intended to also provide an index into the C++ literature.
	
	- ***Each Item must need sax/ing:*** We chose not to define new guidelines for things that you'll do anyway, that are already enforced or detected by the compiler, or that are already covered under other Items.
		- ***Example:*** "Don't return a pointer/reference to an automatic variable" is a good guideline, but we chose not to include it in this book because all of the compilers we tried already emit a warning for this, and so the issue is already covered under the broader Item 1, "Compile cleanly at high warning levels."
		- ***Example:*** "Don't abuse goto" is a great Item, but in our experience programmers universally know this, and it doesn't need saying any more.