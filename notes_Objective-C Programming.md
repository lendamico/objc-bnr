# 1. You And This Book

# 2. Your First Program
- A *function* is a list of instructions for the computer to execute, and every function has a name.
- Every statement ends in a semicolon.

# 3. Variables and Types

# 4. if/else
- The conditional expression is always either true or false. In `C` it was decided that 0 would represent false, and anything that is not zero would be considered true.
- Stop thinking of `=` as "the equals sign." From now on, it is "the assignment operator."
- &&: Logical AND (true if and only if both are true)
- ||: Logical OR (false if and only if both are true)
- !: Logical NOT (true becomes false, false becomes true)
- Boolean variable: variable that can be either TRUE or FALSE
- `else if` clauses are evaluated in the order they appear until one is true
- ?: conditional operator (ternary operator) 

# 5. Functions
- Programmers say, "When a function is called, its frame is created on top of *the stack*. When the function finishes executing, its frame is popped off the stack and destroyed.
- The stack is always last-in, first-out.
- Think of `main()` as returning an error report. In that case, `0` is good news! Success is a lack of errors.

# 6. Numbers
- The `%s` token expects a string; the `%d` expects an integer.
- `\n` represents the new line character.
- `/` is integer division only if both the numerator and denominator are integer types. If either is a floating-point number, floating-point division is done instead.
- increment operator (`++`): add one to this variable
- (`+=`): add a value to a variable (e.g. `x += 5`)
- `%f` uses normal decimal notation and `%e` uses scientific notation

# 7. Loops
- `while` loops: give the look an expression dan block of code con tainted by curly braces. In the `if` construct, if the expression is true, the block of code is run once. In the `while` construct, the block of code is run again and again until the expression becomes false.
- `for` loops: usually used to iterate through a collection of items, such as a list of names.
- when a `break` is called, execution skips directly to the end of the code block.

# 8. Addresses and Pointers
- `float *ptr;` declares a pointer to an address
- pointers are sometimes called references; thus, using the pointer to read data at the address is sometimes called *dereferencing* the pointer.
- `*addressOfI`: give me the value of the data stored at the address `addressOfI`

 