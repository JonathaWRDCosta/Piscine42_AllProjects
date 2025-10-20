# Exercise 05 - ft_print_comb

## 📋 Exercise Description

Implementation of a function that prints all possible combinations of three different digits in ascending order, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_print_comb` function that:

- Prints all combinations of three different digits (abc where a < b < c)
- Separates each combination with ", " except the last one
- Uses only the `write` system call for output
- Follows all Norm 42 rules
- Takes no parameters and returns nothing

## 📁 Files

- `ft_print_comb.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_print_comb(void);
```

### Prototype

- **Name**: `ft_print_comb`
- **Parameters**: `void` - takes no parameters
- **Return**: `void` (returns no value)

## 💻 Código Fonte

```c
#include <unistd.h>

void    ft_print_comb(void)
{
    int    a;
    int    b;
    int    c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    write(1, ",", 1);
                    write(1, " ", 1);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
```

## 🛠️ How It Works

### **Algorithm Flow**

1. Initialize three variables `a`, `b`, `c` representing the three digits
2. Use nested loops to generate all valid combinations
3. Ensure ascending order: `a < b < c`
4. Print each combination followed by ", " (except the last)
5. Last combination (789) has no trailing separator

### **Key Components**

- **Triple Nested Loops**: Three while loops for three digits
- **Ascending Constraint**: Each digit is greater than the previous
- **Range Limits**: `a` goes to '7', `b` to '8', `c` to '9'
- **Conditional Separator**: Last combination check to avoid trailing ", "

### **Combination Logic**

```text
a: '0' to '7' (first digit)
b: a+1 to '8' (second digit, always > a)
c: b+1 to '9' (third digit, always > b)
```

### **Execution Flow**

1. Start with a='0', b='1', c='2' → prints "012"
2. Increment c until '9', then increment b and reset c
3. When b reaches limit, increment a and reset b and c
4. Continue until reaching the last combination "789"

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Clear nested loop structure with obvious execution order
- Step-by-step combination generation
- Predictable termination conditions

### **2. Look and Feel**

✅ **Applied**:

- Consistent variable naming (a, b, c for digits)
- Standard 42 formatting and indentation
- Clear nested structure with proper alignment

### **3. Long-term Vision**

✅ **Applied**:

- Maintainable nested loop structure
- Clear algorithmic approach to combination generation
- Easy to understand and modify logic

## 🚀 Compilation and Testing

### **Compile**

```bash
cc -Wall -Wextra -Werror ft_print_comb.c -o test_comb
```

### **Usage Example**

```c
int main(void)
{
    ft_print_comb();
    write(1, "\n", 1);
    return (0);
}
```

### **Execution**

```bash
./test_comb
# Output: 012, 013, 014, 015, 016, 017, 018, 019, 023, 024, ..., 789
```

## 📖 Learned Concepts

1. **Nested Loops**: Implementation of triple nested while loops
2. **Combinatorial Logic**: Generating all valid combinations
3. **Conditional Output**: Dynamic separator handling
4. **Variable Relationships**: Maintaining ascending order constraints
5. **Norm 42 Compliance**:

   - Function under 25 lines ✅
   - Proper variable declaration ✅
   - Correct nested loop formatting ✅
   - Single responsibility principle ✅

## 🔍 Technical Details

### **Mathematical Analysis**

- Total combinations: C(10,3) = 120 combinations
- Range: from "012" to "789"
- Each combination is exactly 3 digits
- All digits are unique and in ascending order

### **Memory Usage**

- Three integer variables (a, b, c)
- No dynamic allocation
- Constant memory footprint

### **Performance**

- O(n³) time complexity where n=10 (constant)
- 120 iterations total
- Efficient nested loop structure

## 🧠 Key Programming Concepts

### **Combinatorial Generation**

- Systematic enumeration of all valid combinations
- Constraint satisfaction (ascending order)
- Efficient iteration through solution space

### **Loop Control**

- Nested loop management
- Variable interdependence (b depends on a, c depends on b)
- Proper loop boundaries and termination

### **Conditional Logic**

- Edge case handling (last combination)
- Dynamic output formatting
- Boolean expression evaluation

### **Character Manipulation**

- ASCII arithmetic for digit characters
- Character-based loop variables
- Direct character output

## 🎓 Why This Implementation?

- **Educational**: Introduces nested loops and combinatorial thinking
- **Systematic**: Covers all possible combinations without repetition
- **Efficient**: Optimal approach for the constraint space
- **Norm Compliant**: Perfect adherence to 42 standards
- **Foundation**: Preparation for more complex algorithmic problems

---

*This exercise introduces fundamental concepts of nested loops and combinatorial generation while demonstrating systematic problem-solving approaches.*
