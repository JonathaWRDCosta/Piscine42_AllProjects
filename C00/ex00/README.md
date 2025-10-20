# Exercise 00 - ft_putchar

## 📋 Exercise Description

Implementation of a function that prints a single character to standard output, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_putchar` function that:

- Receives a character as parameter
- Prints that character to standard output (terminal)
- Follows all Norm 42 rules

## 📁 Files

- `ft_putchar.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_putchar(char c);
```

### Prototype

- **Name**: `ft_putchar`
- **Parameters**: `char c` - character to be printed
- **Return**: `void` (returns no value)


## 🛠️ How It Works

The function receives a character, gets its address, and uses the write syscall to send it to standard output. The character then appears in the terminal.

## 📚 Pedagogical Concepts (Norm 42 Philosophy)

### **1. Sequencing**

✅ **Applied**:

- Function executes a single clear instruction
- No multiple mixed tasks
- Obvious and direct execution order

### **2. Look and Feel**

✅ **Applied**:
- Code easily readable by any 42 student
- Consistent formatting facilitates peer-learning
- Recognizable style as "42 code"

### **3. Long-term Vision**

✅ **Applied**:

- Easily maintainable and understandable code
- Function with unique and well-defined purpose
- Avoids code obfuscation

## 🚀 Compilation and Testing


### Compile & Test
Compile com um compilador C e execute passando um caractere como argumento para testar a função.

## 📖 Learned Concepts

1. **Syscalls**: Direct use of `write()` instead of library functions
2. **File Descriptors**: Understanding of stdout (fd = 1)
3. **Pointers**: Use of `&c` to get address
4. **Norm 42**: Practical application of all formatting rules
5. **Low Level**: Programming close to the operating system

## 🎓 Why This Implementation?

- **Educational**: Teaches fundamental system concepts
- **Simplicity**: Single responsibility per function
- **Compliance**: Perfect example of Norm 42
- **Foundation**: Base for more complex functions


*Este exercício representa o primeiro passo na jornada de programação da 42, estabelecendo as bases para todos os projetos futuros.*

