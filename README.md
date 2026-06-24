*This project has been created as part
of the 42 curriculum by vicdos-s*
# Description
This project consists of reimplementing the standard C library function printf, with the exception of buffer management.


The following format specifiers have been fully implemented:

- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

# Instructions

- Build the library first using the `make` command:

```bash
make
```

- After the command completes, the library file `libftprintf.a` should be generated in the project root.

- To compile a test program against this library, use:

```bash
cc -I./mandatory -I./libft main.c libftprintf.a -o main
```

- Example output after running `ls` in the project folder:

```bash
ls
libft  libftprintf.a  Makefile  mandatory  README.md
```

# Resources

- **Dispatch Table Concept**

  Based on the StackOverflow discussion regarding dispatch tables:

  [![StackOverflow](https://img.shields.io/badge/StackOverflow-%23F58025.svg?style=for-the-badge&logo=stackoverflow&logoColor=white)](https://stackoverflow.com/questions/62027943/what-is-a-dispatch-table-how-can-i-implement-it-in-c)

  This reference helped to understand the dispatch table pattern and apply it in the `ft_dispatch_table` implementation inside `ft_printf`.


### AI Usage

- **Claude:** Used as a Socratic reasoning validator. Its role was limited to: (1) running prerequisite diagnostics before new topics, (2) pointing out gaps or errors in my own Feynman-style explanations — without supplying the explanation itself — and (3) generating practice/review material (flashcards, exercise lists) after I demonstrated understanding.
- **Google Gemini:** Used occasionally for technical troubleshooting and documentation refinement. Its role was limited to: (1) interpreting and diagnosing complex Valgrind error messages during debugging, and (2) assisting with the formatting, translation, and English localization of this README.
- **GitHub Copilot (embedded VS Code agent):** Used for local review of the README content directly inside Visual Studio Code. Its role was limited to suggesting wording improvements, clarifying phrasing, and checking documentation structure without modifying the implementation details.

## Explanation and justification of the chosen algorithm and data structure

### Algorithm and Data Structure: Dispatch Table

**1. Data Structure: Array of Function Pointers**

The core data structure chosen for parsing format specifiers in this project is an array of function pointers, commonly known as a **dispatch table**. Instead of relying on a long chain of `if-else` statements to match the specifier (e.g., `%d`, `%s`, `%c`), the algorithm uses the ASCII value of the specifier character itself as an index to access the corresponding formatting function directly.

**2. Justification and Optimizations**

- **Constant Time Complexity O(1):** By mapping the character directly to an array index, the algorithm achieves O(1) time complexity for function resolution. A traditional `if-else` approach would require sequential evaluations, leading to O(N) complexity where performance degrades depending on how far down the chain the matching character is.
- **Lazy Initialization for CPU Efficiency:** The table is populated using a static state control (`if (!init)`). This ensures the function pointers are assigned to the array only once during the first call, rather than being repopulated on every `ft_printf` invocation. This saves CPU cycles and improves overall execution speed.
- **Maintainability and Clean Code:** This approach adheres to the Open/Closed Principle. If a new format specifier is added in the future, it requires only a single new assignment line inside the initialization block, without modifying complex conditional logic.

## Links
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/victor-s-cibas/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/victorcibas)

