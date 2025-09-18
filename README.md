### 🖥️ CPP04 - 1337 Project

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)
![Status](https://img.shields.io/badge/Status-In_Progress-orange) ![Grade](https://img.shields.io/badge/Grade-0%2F80-progress)
 

### Subtype Polymorphism, Abstract Classes, and Interfaces

---

## 📜 Project Overview

This project focuses on C++ concepts such as **subtype polymorphism**, **abstract classes**, and **interfaces**. It requires you to implement classes that utilize these principles to create a simulated world of animals and magical items. The exercises are designed to help you understand how to design and implement classes with proper inheritance and virtual functions, manage dynamic memory with polymorphism, and apply these concepts in a practical context. This project's code must comply with the C++98 standard.

> ⚠️ All code must follow the **C++98 standard**.

---

## 🚀 Features

### ✅ Mandatory Part

  * **Exercise 00: Polymorphism**: Implement a base `Animal` class with derived `Dog` and `Cat` classes. The derived classes must have a `makeSound` function that outputs a specific sound. You will also create `WrongAnimal` and `WrongCat` classes to demonstrate the difference between virtual and non-virtual functions.
  * **Exercise 01: I don't want to set the world on fire**: Add a `Brain` class to your `Dog` and `Cat` classes to demonstrate deep copying. You must ensure that copies of `Dog` and `Cat` objects perform a deep copy of the `Brain` member.
  * **Exercise 02: Abstract class**: Refactor the `Animal` class into an abstract class (`AAnimal`) to prevent it from being instantiated directly.

### ⚠️ Optional Exercise

  * **Exercise 03: Interface & recap**: Implement a system of "Materias," `Characters`, and `MateriaSources` using abstract base classes as interfaces. This exercise involves creating concrete classes for `Ice` and `Cure` Materias, a `Character` class with an inventory, and a `MateriaSource` class for learning and creating Materias.
  * You can pass this module without completing this exercise.

-----

## 🛠️ Installation & Compilation

To compile any of the exercises, navigate to the corresponding directory and run `make`. The `Makefile` provided will compile the source files to the required executable name.

### 📌 Compilation Flags

Your code must be compiled with `c++` and the following flags:

```bash
-Wall -Wextra -Werror -std=c++98
```

The `-std=c++98` flag ensures your code adheres to the C++98 standard.

### 🔧 Cleanup

```bash
make clean      # Removes object files
make fclean     # Removes the executable and object files
make re         # Performs a full rebuild
```

-----

## 📏 Rules

  * **Language Standard**: Your code must follow the C++98 standard.
  * **Forbidden Functions**: The C functions `*printf()`, `*alloc()`, and `free()` are strictly forbidden. Using them will result in a grade of 0.
  * **Forbidden Keywords**: The `using namespace <ns_name>` and `friend` keywords are forbidden unless explicitly stated otherwise, resulting in a -42 grade.
  * **STL**: The Standard Template Library (STL), including containers (`vector`, `list`, `map`, etc.) and algorithms, is forbidden until Modules 08 and 09. Using them will result in a -42 grade.
  * **Memory Management**: When allocating memory with `new`, you must properly deallocate it with `delete` to avoid memory leaks.
  * **Headers**: All header files must include include guards to prevent double inclusion. Not doing so will result in a grade of 0.
  * **Output**: Every output message must end with a newline character and be displayed to the standard output.
  * **Header File Implementations**: Any function implementation placed in a header file (except for function templates) will result in a grade of 0.

-----

For complete project details, see the subject file:
[en.subject.pdf](https://github.com/Redadaghouj/42-CPP04_1337/blob/main/subject/en.subject.pdf)
