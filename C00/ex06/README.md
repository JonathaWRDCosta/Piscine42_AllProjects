# Exercise 06 - ft_print_comb2

## 📋 Exercise Description

Implementation of a function that prints all possible combinations of two different two-digit numbers in ascending order, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_print_comb2` function that:

- Prints all combinations of two different two-digit numbers (ab cd where ab < cd)
- Format: "00 01, 00 02, ..., 98 99"
- Separates each combination with ", " except the last one
- Uses only the `write` system call for output
- Follows all Norm 42 rules
- Takes no parameters and returns nothing

## 📁 Files

- `ft_print_comb2.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_print_comb2(void);
```

### Prototype

- **Name**: `ft_print_comb2`
- **Parameters**: `void` - takes no parameters
- **Return**: `void` (returns no value)

## 💻 Código Fonte

```c
#include <unistd.h>

void    ft_print_comb2(void)
{
    int    a;
    int    b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            write(1, &(char){a / 10 + '0'}, 1);
            write(1, &(char){a % 10 + '0'}, 1);
            write(1, " ", 1);
            write(1, &(char){b / 10 + '0'}, 1);
            write(1, &(char){b % 10 + '0'}, 1);
            if (!(a == 98 && b == 99))
                write(1, ", ", 2);
            b++;
        }
        a++;
    }
}
```

## 🛠️ How It Works

### **Algorithm Flow**

1. Initialize two variables `a` and `b` representing two-digit numbers (0-99)
2. Use nested loops to generate all valid combinations
3. Ensure ascending order: `a < b`
4. Convert each number to its digit representation
5. Print in format "ab cd" with proper separators

### **Key Components**

- **Double Nested Loops**: Two while loops for two numbers
- **Number-to-Digit Conversion**: Using division and modulo operations
- **Ascending Constraint**: `b = a + 1` ensures `a < b`
- **Formatted Output**: Two digits per number with space separator

### **Number Conversion Logic**

```text
For number n:
- Tens digit: n / 10
- Units digit: n % 10
- Convert to char: digit + '0'
```

### **Execution Flow**

1. Start with a=0, b=1 → prints "00 01"
2. Increment b until 99, then increment a and reset b
3. Continue until reaching the last combination "98 99"
4. Use conditional logic to avoid trailing separator

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Clear nested loop structure with numeric progression
- Systematic number-to-character conversion
- Predictable output formatting sequence

### **2. Look and Feel**

✅ **Applied**:

- Consistent variable naming (a, b for numbers)
- Standard 42 formatting and indentation
- Clear mathematical operations layout

### **3. Long-term Vision**

✅ **Applied**:

- Maintainable numeric conversion approach
- Clear algorithmic structure
- Easily extensible for different ranges

## 🚀 Compilation and Testing

### **Compile**

```bash
cc -Wall -Wextra -Werror ft_print_comb2.c -o test_comb2
```

### **Usage Example**

```c
int main(void)
{
    ft_print_comb2();
    write(1, "\n", 1);
    return (0);
}
```

### **Execution**

```bash
./test_comb2
# Output: 00 01, 00 02, 00 03, ..., 98 99
```

## 📖 Learned Concepts

1. **Nested Loops**: Implementation of double nested while loops
2. **Number Conversion**: Converting integers to individual digit characters
3. **Mathematical Operations**: Division and modulo for digit extraction
4. **Formatted Output**: Structured string formatting with separators
5. **Norm 42 Compliance**:

   - Function under 25 lines ✅
   - Proper variable declaration ✅
   - Correct nested loop formatting ✅
   - Single responsibility principle ✅

## 🔍 Technical Details

### **Mathematical Analysis**

- Total combinations: C(100,2) = 4,950 combinations
- Range: from "00 01" to "98 99"
- Each combination is two two-digit numbers
- All combinations maintain ascending order

### **Memory Usage**

- Two integer variables (a, b)
- No dynamic allocation
- Constant memory footprint

### **Performance**

- O(n²) time complexity where n=100 (constant)
- 4,950 iterations total
- Efficient nested loop structure

## 🧠 Key Programming Concepts

### **Number System Understanding**

- Decimal place value (tens and units)
- Integer division and remainder operations
- ASCII conversion for numeric characters

### **Combinatorial Mathematics**

- Generating combinations of two elements from a set
- Maintaining order constraints
- Systematic enumeration without repetition

### **String Formatting**

- Structured output with fixed format
- Conditional separator placement
- Character-by-character output construction

### **Algorithmic Efficiency**

- Optimal loop bounds (a ≤ 98, b ≤ 99)
- Minimal redundant operations
- Direct character output without string buffers

## 🎓 Why This Implementation?

- **Educational**: Introduces number-to-character conversion and larger combinatorial spaces
- **Mathematical**: Demonstrates modular arithmetic and place value concepts
- **Systematic**: Efficient coverage of all valid combinations
- **Norm Compliant**: Perfect adherence to 42 standards
- **Scalable**: Approach easily adaptable to different number ranges

---

*This exercise advances combinatorial concepts while introducing number-to-character conversion and formatted output techniques.*
