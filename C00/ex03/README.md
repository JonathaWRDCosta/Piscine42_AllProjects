# Exercise 03 - ft_print_numbers

## 📋 Exercise Description

Implementation of a function that prints all single digits from 0 to 9 in ascending order, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_print_numbers` function that:

- Prints all digits from '0' to '9' in sequence
- Uses only the `write` system call for output
- Follows all Norm 42 rules
- Takes no parameters and returns nothing

## 📁 Files

- `ft_print_numbers.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_print_numbers(void);
```

### Prototype

- **Name**: `ft_print_numbers`
- **Parameters**: `void` - takes no parameters
- **Return**: `void` (returns no value)

## 💻 Código Fonte

```c
#include <unistd.h>

void    ft_print_numbers(void)
{
    int    i;

    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}
```

## 🛠️ How It Works

### **Algorithm Flow**

1. Initialize variable `i` with the ASCII value of '0' (48)
2. Use a `while` loop to iterate from '0' to '9'
3. Print each digit using `write(1, &i, 1)`
4. Increment `i` to move to the next digit
5. Continue until reaching '9' (inclusive)

### **Key Components**

- **Digit iteration**: Using `int i = '0'` to start from the first digit
- **Loop condition**: `i <= '9'` ensures we print all digits including '9'
- **Output**: `write(1, &i, 1)` prints one character at a time
- **Increment**: `i++` moves forward through the digits

### **Execution Flow**

1. Function starts with `i = '0'` (ASCII 48)
2. Enters while loop since '0' <= '9'
3. Prints '0' using write syscall
4. Increments to '1', continues loop
5. Repeats until '9' is printed
6. Loop ends when `i` becomes greater than '9'

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Clear step-by-step execution: initialize → loop → print → increment
- Single responsibility: only prints digit sequence
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
cc -Wall -Wextra -Werror ft_print_numbers.c -o test_numbers
```

### **Usage Example**

```c
int main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
    return (0);
}
```

### **Execution**

```bash
./test_numbers
# Output: 0123456789
```

## 📖 Learned Concepts

1. **Character Manipulation**: Working with ASCII values for digit characters
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

- '0' = 48 (decimal)
- '9' = 57 (decimal)
- Loop iterates from 48 to 57

### **Memory Usage**

- Single integer variable `i`
- No dynamic allocation
- Constant memory footprint

### **Performance**

- O(10) time complexity (constant)
- Linear execution through 10 digits
- Minimal system calls (10 write operations)

## 🎓 Why This Implementation?

- **Educational**: Demonstrates basic loop control and digit character handling
- **Simplicity**: Straightforward approach without complexity
- **Norm Compliant**: Perfect adherence to 42 standards
- **Foundation**: Building block for more complex numeric operations
- **Efficiency**: Direct approach without unnecessary operations

## 🧠 Key Programming Concepts

### **Character vs. Numeric Values**

- Uses character literals ('0' to '9') instead of numeric values (0 to 9)
- Demonstrates understanding of ASCII representation
- Shows proper handling of character data types

### **Iteration Patterns**

- Forward iteration (compared to ex02's reverse iteration)
- Character-based loop conditions
- Consistent increment pattern

### **System-Level Programming**

- Direct syscall usage instead of standard library functions
- Understanding of file descriptors (stdout = 1)
- Low-level character output operations

---

*This exercise reinforces fundamental concepts of digit manipulation and sequential output while maintaining strict adherence to Norm 42 standards.*
