# Exercise 04 - ft_is_negative

## 📋 Exercise Description

Implementation of a function that determines if a given integer is negative or positive/zero, printing 'N' for negative numbers and 'P' for positive numbers or zero, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_is_negative` function that:

- Receives an integer as parameter
- Prints 'N' if the number is negative (< 0)
- Prints 'P' if the number is positive or zero (>= 0)
- Uses only the `write` system call for output
- Follows all Norm 42 rules

## 📁 Files

- `ft_is_negative.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_is_negative(int n);
```

### Prototype

- **Name**: `ft_is_negative`
- **Parameters**: `int n` - integer to be evaluated
- **Return**: `void` (returns no value)

## 💻 Código Fonte

```c
#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}
```

## 🛠️ How It Works

### **Algorithm Flow**

1. Function receives an integer parameter `n`
2. Evaluates the condition `n < 0`
3. If true: prints 'N' (Negative)
4. If false: prints 'P' (Positive or zero)
5. Uses `write` syscall for output

### **Key Components**

- **Conditional Logic**: Simple if-else structure
- **Comparison**: Uses `<` operator to check negativity
- **Binary Output**: Only two possible outputs ('N' or 'P')
- **System Call**: Direct use of `write(1, "char", 1)`

### **Decision Logic**

```text
n < 0  → Output: 'N'
n >= 0 → Output: 'P'
```

### **Execution Flow**

1. Function receives integer `n`
2. Evaluates boolean expression `n < 0`
3. Branches to appropriate output based on result
4. Prints single character and returns

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Clear conditional branching logic
- Single responsibility: classify number sign
- Predictable execution path with binary outcome

### **2. Look and Feel**

✅ **Applied**:

- Simple, readable conditional structure
- Standard 42 formatting and indentation
- Consistent parameter naming convention

### **3. Long-term Vision**

✅ **Applied**:

- Easily maintainable conditional logic
- Clear function purpose and behavior
- No unnecessary complexity or obfuscation

## 🚀 Compilation and Testing

### **Compile**

```bash
cc -Wall -Wextra -Werror ft_is_negative.c -o test_negative
```

### **Usage Example**

```c
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (write(1, "Usage: ./test_negative <number>\n", 32));
    
    int number = atoi(argv[1]);
    ft_is_negative(number);
    write(1, "\n", 1);
    return (0);
}
```

### **Execution Examples**

```bash
./test_negative -5
# Output: N

./test_negative 42
# Output: P

./test_negative 0
# Output: P
```

## 📖 Learned Concepts

1. **Conditional Logic**: Implementation of if-else statements
2. **Comparison Operators**: Use of relational operators (`<`)
3. **Binary Classification**: Two-state decision making
4. **Function Parameters**: Handling integer input parameters
5. **Norm 42 Compliance**:

   - Function under 25 lines ✅
   - Proper parameter handling ✅
   - Correct conditional formatting ✅
   - Single responsibility principle ✅

## 🔍 Technical Details

### **Integer Range Handling**

- Handles full `int` range (-2,147,483,648 to 2,147,483,647)
- Correctly classifies edge cases (INT_MIN, INT_MAX)
- Zero is considered positive (>= 0)

### **Memory Usage**

- No local variables needed
- Parameter passed by value
- Constant memory footprint

### **Performance**

- O(1) time complexity (constant)
- Single comparison operation
- Minimal system call overhead (1 write operation)

## 🧠 Key Programming Concepts

### **Boolean Logic**

- Demonstrates basic conditional evaluation
- Binary decision making (true/false → N/P)
- Logical flow control with if-else

### **Mathematical Classification**

- Number line understanding (negative vs non-negative)
- Zero boundary handling
- Sign determination logic

### **Control Structures**

- Conditional statements without braces (single instruction)
- Norm 42 compliant formatting for short conditionals
- Efficient branching logic

### **System Programming**

- Direct syscall usage for character output
- Understanding of stdout file descriptor
- Low-level output operations

## 🎓 Why This Implementation?

- **Educational**: Introduces conditional logic and parameter handling
- **Simplicity**: Minimal complexity with maximum clarity
- **Norm Compliant**: Perfect example of 42 conditional formatting
- **Foundation**: Base for more complex decision-making functions
- **Efficiency**: Optimal performance with single comparison

---

*This exercise introduces fundamental conditional logic and parameter handling while demonstrating proper Norm 42 formatting for control structures.*
