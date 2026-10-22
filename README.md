# C Language Practical Programs

## Programs Included

1. **Factorial** — Reads an integer and calculates its factorial using a loop.
2. **Vowel Counter** — Reads a sentence and uses a function to count each vowel (`a`, `e`, `i`, `o`, `u`). Uppercase vowels are counted too.
3. **Leap Year Checker** — Uses a function to determine whether the entered year is a leap year.
4. **Pointer Swap** — Swaps two integer values using pointers and a function.
5. **Star Pattern** — Uses nested `for` loops to print the pattern below. The underscores shown in the exam question represent spaces; they are not printed as underscore characters.

```text
    *
   * *
  * * *
 * * * *
* * * * *
```

## Requirements

- A C compiler, such as GCC
- A terminal or command prompt

## Compile and Run

Save each program in its own `.c` file, for example `factorial.c`, `vowel_counter.c`, `leap_year.c`, `pointer_swap.c`, and `pattern.c`.

With GCC, compile and run a program like this:


On Windows, run the compiled program with:

```text
factorial.exe
```

Replace `factorial.c` and `factorial` with the desired source file and program name for the other questions.

## Example

For the factorial program, entering `5` gives:

```text
Enter an integer: 5
Factorial of 5 is 120
```

For the pointer swap program, entering `10 20` displays the values in swapped order:

```text
Enter two numbers: 10 20
After swapping: 20 10
```

## Notes

- Each question is a separate program with its own `main()` function, so compile and run them separately.
- The factorial program should be used with non-negative integers. Very large values may exceed the range of the selected integer type.
- The division between integer values in C drops any fractional part.
