# Exercise 07 - ft_putnbr

## 📋 Exercise Description

Implementation of a function that prints an integer to standard output, handling all edge cases including negative numbers and the minimum integer value, strictly following **Norm 42** rules.

## 🎯 Objective

Create a `ft_putnbr` function that:

- Receives an integer as parameter
- Prints the complete number to standard output
- Handles negative numbers with proper sign display
- Manages edge case of INT_MIN (-2,147,483,648)
- Uses recursive approach for digit extraction
- Follows all Norm 42 rules

## 📁 Files

- `ft_putnbr.c` - Function implementation

## 🔧 Implemented Function

```c
void ft_putnbr(int nb);
```

### Prototype

- **Name**: `ft_putnbr`
- **Parameters**: `int nb` - integer to be printed
- **Return**: `void` (returns no value)

## Como Funciona

A função ft_putnbr utiliza recursão para imprimir cada dígito do número inteiro fornecido. Aqui está o fluxo básico:

1. Tratamento de Casos Especiais: Verifica se o número é INT_MIN.
2. Processamento de Sinal: Para números negativos, imprime o sinal '-' e chama a função recursivamente com o valor positivo.
3. Extração Recursiva de Dígitos: O número é dividido por 10 para extrair os dígitos um a um.
4. Caso Base: Quando o número é um único dígito, ele é convertido em caractere e impresso.

## Conceitos Pedagógicos

A implementação da ft_putnbr aborda vários conceitos importantes:

- Recursão: A função chama a si mesma para processar cada dígito do número.
- Tratamento de Casos Especiais: O caso do INT_MIN é tratado de forma especial para evitar overflow.
- Decomposição Matemática: O uso de divisão e módulo para extrair dígitos individuais.
- Modularização de Funções: Uso eficaz de funções auxiliares.

## Detalhes Técnicos

- Limites Inteiros: Compreensão do INT_MIN e INT_MAX.
- Uso de Memória: A profundidade máxima da recursão é de 10 níveis para números de até 10 dígitos.
- Desempenho: A complexidade de tempo é O(log₁₀(n)), onde n é o número de entrada.

## Por Que Esta Implementação?

- Educacional: Introduz conceitos de recursão e manipulação avançada de números.
- Robusta: Lida corretamente com todas as entradas inteiras possíveis.
- Elegante: Solução recursiva limpa sem loops complexos.
- Conforme à Norm: Adesão perfeita aos padrões da 42.
- Fundamental: Bloco de construção essencial para operações de I/O numérico.

---

*Este exercício introduz conceitos fundamentais de recursão, demonstrando ao mesmo tempo um manuseio robusto de inteiros e gerenciamento de casos extremos.*
