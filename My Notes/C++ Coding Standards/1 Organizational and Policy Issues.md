# 1. Organizational and Policy Issues

>This introductory section goes on to target a small number of carefully selected basic issues that are mostly not directly about the code itself, but on essential tools and techniques for writing solid code.

## 1. Don't sweat the small stuff. (Or: Know what not to standardize.)

### Summary

- Say only what needs saying: Don't enforce personal tastes or obsolete practices.
### Discussion

- Issues that are really just personal taste and don't affect correctness or readability don't belong in a coding standard. Any professional programmer can easily read and write code that is formatted a little differently than they're used to.
- Do use consistent formatting within each source file or even each project, because it's jarring to jump around among several styles in the same piece of code. But don't try to enforce consistent formatting across multiple projects or across a company.

- ***Here are several common issues where the important thing is not to set a rule but just to be consistent with the style already in use within the file you're maintaining:***
	- *Don't specify how much to indent, but do indent to show structure: Use any number of spaces you like to indent, but be consistent within at least each file.*
	- *Don't enforce a specific line length, but do keep line lengths readable:* Use any length of line you like, but don't be excessive. Studies show that up to ten-word text widths are optimal for eye tracking.
	-  ***Don't overlegislate naming, but do use a consistent naming convention:*** There are only two must-dos: a) never use "underhanded names," ones that begin with an un derscore or that contain a double underscore; and b) always use ***ONLY_UPPERCASE_NAMES*** for macros and never think about writing a macro that is a common word or abbreviation (including common template parameters, such as T and U; writing \#define T anything is extremely disruptive). Otherwise, do use consistent and meaningful names and follow a file's or module's convention. (If you can't decide on your own naming convention, try this one: Name classes, functions, and **enums** **LikeThis**; name variables **likeThis**; name private member variables **likeThis_**; and name macros **LIKE_THIS**.)
	- *Don't prescribe commenting styles (except where tools extract certain styles into documentation), but do write useful comments:* Write code instead of comments where possible. Don't write comments that repeat the code; they get out of sync. Do write illuminating comments that explain approach and rationale.

- Finally, don't try to enforce antiquated rules even if they once appeared in older coding standards.
### Examples

- ***Example: Hungarian notation.*** Notations that incorporate type information in vari-able names have mixed utility in type-unsafe languages (notably C), are possible but have no benefits (only drawbacks) in object-oriented languages, and are impossible in generic programming. Therefore, no C++ coding standard should require Hungarian notation, though a C++ coding standard might legitimately choose to ban it.
- ***Example 4: Single entry, single exit ("SESE").*** Historically, some coding standards have required that each function have exactly one exit, meaning one return statement. Such a requirement is obsolete in languages that support exceptions and destructors, where functions typically have numerous implicit exits. Instead, follow standards that directly promote simpler and shorter functions that are inherently easier to understand and to make error-safe.
## 2. Compile cleanly at high warning levels.

### Summary

- Take warnings to heart: Use your compiler's highest warning level. Require clean (warning-free) builds. Understand all warnings. Eliminate warnings by changing your code, not by reducing the warning level.
### Discussion

- Your compiler is your friend. If it issues a warning for a certain construct, often there's a potential problem in your code.
- Successful builds should be silent (warning-free). If they aren't, you'll quickly get into the habit of skimming the output, and you will miss real problems.
- To get rid of a warning: a) understand it; and then b) rephrase your code to eliminate the warning and make it clearer to both humans and compilers that the code does what you intended.
- Do this even when the program seemed to run correctly in the first place. Do this even when you are positive that the warning is benign. Even benign warnings can obscure later warnings pointing to real dangers.
### Exceptions

- Sometimes, a compiler may emit a tedious or even spurious warning (i.e., one that is mere noise) but offer no way to turn it off, and it might be infeasible or unproductive busywork to rephrase the code to silence the warning. In these rare cases, as a team decision, avoid tediously working around a warning that is merely tedious: Disable that specific warning only, disable it as locally as possible, and write a clear comment documenting why it was necessary.

## 3. Use an automated build system.

### Summary

- Push the (singular) button: Use a fully automatic ("one-action") build system that builds the whole project without user intervention.
### Discussion

- A one-action build process is essential. It must produce a dependable and repeatable translation of your source files into a deliverable package. There is a broad range of automated build tools available, and no excuse not to use one. Pick one. Use it.
- We've seen organizations that neglect the "one-action" requirement. Some consider that a few mouse clicks here and there, running some utilities to register COM/CORBA servers, and copying some files by hand constitute a reasonable build process. But you don't have time and energy to waste on something a machine can do faster and better. You need a one-action build that is automated and dependable.

- Successful builds should be silent, warning-free. The ideal build produces no noise and only one log message: "Build succeeded."
- Have two build modes: Incremental and full. An incremental build rebuilds only what has changed since the last incremental or full build. Corollary: The second of two successive incremental builds should not write any output files; if it does, you probably have a dependency cycle, or your build system performs unnecessary operations (e.g., writes spurious temporary files just to discard them).
- A project can have different forms of full build. Consider parameterizing your build by a number of essential features; likely candidates are target architecture, debug vs. release, and breadth (essential files vs. all files vs. full installer). One build setting can create the product's essential executables and libraries, another might also create ancillary files, and a full-fledged build might create an installer that comprises all your files, third-party redistributables, and installation code.
- As projects grow over time, so does the cost of not having an automated build. If you don't use one from the start, you will waste time and resources. Worse still, by the time the need for an automated build becomes overwhelming, you will be under more pressure than at the start of the project.
- Large projects might have a "build master" whose job is to care for the build system.
## 4. Use a version control system.

### Summary

- The palest of ink is better than the best memory (Chinese proverb): Use a version control system (VCS). Never keep files checked out for long periods. Check in frequently after your updated unit tests pass. Ensure that checked-in code does not break the build.
### Discussion

- Nearly all nontrivial projects need more than one developer and/or take more than a week of work. On such projects, you will need to compare historical versions of the same file to determine when (and/or by whom) changes were introduced. You will need to control and manage source changes.
- When there are multiple developers, those developers will make changes in parallel, possibly to different parts of the same file at the same time. You need tools to automate checkout/versioning of file and, in some cases, merging of concurrent edits. A VCS automates and controls checkouts, versioning, and merging. A VCS will do it faster and more correctly than you could do it by hand. And you don't have time to fiddle with administrivia - you have software to write.
- Even a single developer has "oops!" and "huh?" moments, and needs to figure out when and why a bug or change was introduced. So will you. A VCS automatically tracks the history of each file and lets you "turn the clock back." The question isn't whether you will want to consult the history, but when.
- Don't break the build. The code in the VCS must always build successfully.

- The broad range of VCS offerings leaves no excuse not to use one. The least expensive and most popular is cvs. It is a flexible tool, featuring TCP/IP access, optional enhanced security (by using the secure shell ssh protocol as a back-end), excellent administration through scripting, and even a graphical interface. Many other VCS products either treat cvs as a standard to emulate, or build new functionality on top of it.
### Exceptions

- A project with one programmer that takes about a week from start to finish probably can live without a VCS.
## 5. Invest in code reviews.
### Summary

- Re-view code: More eyes will help make more quality. Show your code, and read others'. You'll all learn and benefit.
### Discussion

- ***A good code review process benefits your team in many ways. It can:***
	- Increase code quality through beneficial peer pressure.
	- Find bugs, non-portable code (if applicable), and potential scaling problems.
	- Foster better design and implementation through cross-breeding of ideas.
	- Bring newer teammates and beginners up to speed.
	- Develop common values and a sense of community inside the team.
	- Increase meritocracy, confidence, motivation, and professional pride.

- Many shops neither reward quality code and quality teams nor invest time and money encouraging them. We hope we won't have to eat our words a couple of years from now, but we feel that the tide is slowly changing, due in part to an increased need for safe and secure software. Code reviews help foster exactly that, in addition to being an excellent (and free!) method of in-house training.
- Make code reviews a routine part of your software development cycle. If you agree with your teammates on a reward system based on incentives (and perhaps disincentives), so much the better.
- Without getting too formalistic, it's best to get code reviews in writing - a simple e-mail can suffice. This makes it easier to track your own progress and avoid duplication.

- In summary: We know we're preaching to the choir, but it had to be said. Your ego may hate a code review, but the little genius programmer inside of you loves it because it gets results and leads to better code and stronger applications.