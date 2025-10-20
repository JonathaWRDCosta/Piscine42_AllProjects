# Exercise 02 - ft_print_reverse_alphabet

## 📋 Exercise Description

Implementation of a function that prints the lowercase alphabet in reverse order (from 'z' to 'a'), strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_print_reverse_alphabet` function that:

- Prints the complete lowercase alphabet in reverse order
- Uses only the `write` system call for output
- Follows all Norm 42 rules
- Takes no parameters and returns nothing

## 📁 Files

- `ft_print_reverse_alphabet.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_print_reverse_alphabet(void);
```

### Prototype

- **Name**: `ft_print_reverse_alphabet`
- **Parameters**: `void` - takes no parameters
- **Return**: `void` (returns no value)

## 💻 Código Fonte

```c
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int    i;

    i = 'z';
    while (i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
```

## 🛠️ How It Works

### **Algorithm Flow**

1. Initialize variable `i` with the ASCII value of 'z' (122)
2. Use a `while` loop to iterate from 'z' to 'a'
3. Print each character using `write(1, &i, 1)`
4. Decrement `i` to move to the previous letter
5. Continue until reaching 'a' (inclusive)

### **Key Components**

- **Character iteration**: Using `int i = 'z'` to start from the last letter
- **Loop condition**: `i >= 'a'` ensures we print all letters including 'a'
- **Output**: `write(1, &i, 1)` prints one character at a time
- **Decrement**: `i--` moves backwards through the alphabet

### **Execution Flow**

1. Function starts with `i = 'z'` (ASCII 122)
2. Enters while loop since 'z' >= 'a'
3. Prints 'z' using write syscall
4. Decrements to 'y', continues loop
5. Repeats until 'a' is printed
6. Loop ends when `i` becomes less than 'a'

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Clear step-by-step execution: initialize → loop → print → decrement
- Single responsibility: only prints reverse alphabet
- Predictable flow with obvious termination condition

### **2. Look and Feel**

✅ **Applied**:

- Consistent variable naming (`i` for iterator)
- Standard 42 formatting and indentation
- Recognizable loop pattern for character iteration

### **3. Long-term Vision**

✅ **Applied**:

- Simple, maintainable code structure
- Easy to understand and modify
- Clear purpose without unnecessary complexity

## 🚀 Compilation and Testing

### **Compile**

```bash
cc -Wall -Wextra -Werror ft_print_reverse_alphabet.c -o test_reverse_alphabet
```

### **Usage Example**

```c
int main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    return (0);
}
```

### **Execution**

```bash
./test_reverse_alphabet
# Output: zyxwvutsrqponmlkjihgfedcba
```

## 📖 Learned Concepts

1. **Character Manipulation**: Working with ASCII values and character comparison
2. **Loop Control**: Using while loops with character-based conditions
3. **Syscalls**: Direct use of `write()` for character output
4. **Variable Scope**: Proper declaration and use of local variables
5. **Norm 42 Compliance**:

   - Function under 25 lines ✅
   - Proper variable declaration ✅
   - Correct indentation and formatting ✅
   - Single responsibility principle ✅

## 🔍 Technical Details

### **ASCII Values**

- 'a' = 97 (decimal)
- 'z' = 122 (decimal)
- Loop iterates from 122 down to 97

### **Memory Usage**

- Single integer variable `i`
- No dynamic allocation
- Constant memory footprint

### **Performance**

- O(26) time complexity (constant)
- Linear execution through 26 characters
- Minimal system calls (26 write operations)

## 🎓 Why This Implementation?

- **Educational**: Demonstrates basic loop control and character handling
- **Simplicity**: Straightforward approach without complexity
- **Norm Compliant**: Perfect adherence to 42 standards
- **Foundation**: Building block for more complex string operations
- **Efficiency**: Direct approach without unnecessary operations

---

*This exercise reinforces fundamental concepts of character manipulation and loop control while maintaining strict adherence to Norm 42 standards.*
