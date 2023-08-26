# Custom `printf` Function Documentation

## Table of Contents
- [Introduction](#introduction)
- [Usage](#usage)
- [Function Signature](#function-signature)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Implementation](#implementation)
- [Examples](#examples)
- [Conclusion](#conclusion)

## Introduction
Welcome! this project is all about building a custom `printf` function! This project aims to replicate the behavior of the standard `printf` function from the C programming language. By creating a custom `printf` function, we can enhance its capabilities to better suit our project's requirements.

## Usage
Our custom `printf` function is designed to allow easy formatting and printing of text to the console. It supports a variety of format specifiers that enable dynamic insertion of values into the output string.

## Function Signature
```c
int _printf(const char *format, ...);
```

## Supported Format Specifiers
Our custom `printf` function supports the following format specifiers:
- `%c` for characters
- `%s` for strings
- `%d` for signed integers
- `%u` for unsigned integers
- `%f` for floating-point numbers
- `%x` for hexadecimal integers
- `%o` for octal integers

## Implementation
Our custom `printf` function is implemented using variadic arguments and a parser to handle format specifiers. It scans the format string and processes each specifier appropriately before printing the final output.

## Examples
```c
#include <stdio.h>
#include "custom_printf.h" // Include our custom printf header

int main() {
    char character = 'A';
    int number = 42;
    float floatNumber = 3.14;
    char stringL = "Alpha Team";

    _printf("Character: %c\n", character);
    _printf("Number: %d\n", number);
    _printf("Float: %f\n", floatNumber);
    _printf("String: %s\n", stringL);

    return 0;
}
```

## Conclusion
Our custom `printf` function is a powerful tool for formatting and printing text in C. By offering support for various format specifiers, it empowers developers to create well-formatted outputs tailored to their specific needs.
