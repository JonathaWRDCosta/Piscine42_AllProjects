# Exercise 01 - ft_print_alphabet

## 📋 Exercise Description

Implementation of a function that prints the alphabet in lowercase (from 'a' to 'z') to standard output, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_print_alphabet` function that:

- Prints all alphabet letters in lowercase
- Uses a loop to iterate through characters
- Follows all Norm 42 rules

## 📁 Files

- `ft_print_alphabet.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_print_alphabet(void);
```

### Prototype

- **Name**: `ft_print_alphabet`
- **Parameters**: `void` - takes no parameters
- **Return**: `void` (returns no value)

## 💻 Source Code

```c
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
```

## 🛠️ How It Works

### **Control Variable**
```c
int	i;
i = 'a';
```

- **`i`**: Integer variable that stores ASCII values of characters
- **Initialization**: Starts with 'a' (ASCII 97)

### **while Loop**
```c
while (i <= 'z')
{
	write(1, &i, 1);
	i++;
}
```

**Operation**:

1. **Condition**: `i <= 'z'` - continues while not past 'z' (ASCII 122)
2. **Printing**: `write(1, &i, 1)` - prints current character
3. **Increment**: `i++` - advances to next ASCII character

### **Execution Flow**

1. Declares variable `i` of type `int`
2. Initializes `i` with value of 'a' (97)
3. Enters while loop
4. Prints character corresponding to ASCII value in `i`
5. Increments `i` to next character
6. Repeats until `i` is greater than 'z' (122)
7. Result: "abcdefghijklmnopqrstuvwxyz"

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Simple loop with clear sequential operations
- Declaration → Initialization → Loop → Increment
- Each instruction has unique and well-defined purpose

### **2. Look and Feel**

✅ **Applied**:

- Familiar structure for any 42 student
- Use of `while` (allowed by Norm) instead of `for` (forbidden)
- Consistent indentation and formatting

### **3. Long-term Vision**

✅ **Applied**:

- Easy to maintain and modify code
- Clear logic for sequential character printing
- Foundation for more complex string manipulation functions

## 🚀 Compilation and Testing

### **Compile**
```bash
cc -Wall -Wextra -Werror ft_print_alphabet.c -o test_alphabet
```

### **Usage Example**
```c
int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
}
```

### **Execution**
```bash
./test_alphabet
# Output: abcdefghijklmnopqrstuvwxyz
```

## 📖 Learned Concepts

1. **ASCII Values**: Understanding ASCII table and character values
2. **while Loops**: Repetition structure allowed by Norm 42
3. **Character Increment**: `i++` to navigate through alphabet
4. **Character Comparison**: `i <= 'z'` using ASCII values
5. **Declaration and Initialization**: Mandatory separation per Norm
6. **Syscall write()**: Individual character printing

## 🎓 Why This Implementation?

- **Educational**: Teaches loop concepts and character manipulation
- **Norm 42**: Use of `while` instead of `for` (forbidden)
- **ASCII**: Demonstrates direct work with character values
- **Simplicity**: Clear responsibility - print alphabet
- **Foundation**: Base for more complex string exercises

## 🔍 Norm 42 Characteristics

- ✅ **Function ≤ 25 lines**: 8 lines (well within limit)
- ✅ **≤ 5 variables**: Only 1 variable (`i`)
- ✅ **Named parameters**: Explicit `void` for parameterless function
- ✅ **One instruction per line**: Each operation on separate line
- ✅ **while structure**: Loop allowed by Norm (vs forbidden `for`)

---

*This exercise introduces fundamental concepts of loops and character manipulation, establishing solid foundations for more advanced projects.*
