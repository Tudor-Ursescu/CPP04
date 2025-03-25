# C++ Module 04 - Subtype Polymorphism, Abstract Classes, and Interfaces

## 🔍 Overview
This module introduces **polymorphism**, **abstract classes**, and **interfaces** in C++ through a series of exercises that build upon one another. The goal is to develop an understanding of virtual functions, deep copies, and proper memory management.

## Exercises
### 🦠 Exercise 00: Polymorphism

- Implement a base class **Animal** with:

    - Protected attribute: `std::string type;`

    - A virtual function: `virtual void makeSound() const;`

- Implement **Dog** and **Cat** classes that inherit from **Animal**:

    - Set `type` to "Dog" or "Cat" respectively.

    - Override `makeSound()` to print appropriate sounds.

- Implement **WrongAnimal** and *WrongCat* to demonstrate incorrect polymorphism behavior.

- Ensure constructors and destructors display specific messages.

### 🔥 Exercise 01: I Don’t Want to Set the World on Fire

-Implement a **Brain** class containing a `std::string ideas[100];`

- Modify **Dog** and **Cat** to have a private `Brain*` attribute:

    - Allocate `Brain` dynamically in constructor.

    - Deallocate `Brain` in destructor.

- Create an array of **Animal** objects (half Dogs, half Cats) and delete them properly.

- Implement **deep copies** for Dogs and Cats.

- Check for memory leaks.

### ❓ Exercise 02: Abstract Class

- Modify **Animal** to be an **abstract** class:

    - Make `makeSound()` a **pure virtual function**.

    - This prevents direct instantiation of `Animal`.

- Ensure all previous functionality remains intact.

## 🔄 Exercise 03: Interface & Recap

- Implement an **AMateria** class with:

    - `std::string type;`

    - `AMateria(std::string const & type);`

    - `std::string const & getType() const;`

    - `virtual AMateria* clone() const = 0;`

    - `virtual void use(ICharacter& target);`

- Implement concrete **Materia** classes: `Ice` and `Cure`

    - `clone()` returns a new instance of the same type.

    - `use()` prints appropriate messages.

- Implement an **ICharacter** interface with:

    - `equip()`, `unequip()`, `use()` methods.

- Implement **Character** class:

    - Has a **4-slot inventory** for Materia.

    - Uses deep copy for assignment and copy constructor.

- Implement an **IMateriaSource** interface and **MateriaSource** class:

    - Stores and creates learned Materia.

- Ensure proper memory management and **avoid leaks**.

## 🔧  Compilation & Execution

- Use a **Makefile** with standard rules (`all`, `clean`, `fclean`, `re`).

- Compile with:
```sh
make
./your_program
```
## 🚫 Forbidden Functions

- **None** (all standard functions are allowed).

## 📐 Testing

- Implement additional test cases beyond the provided examples.

- Ensure proper output and behavior of constructors, destructors, and functions.

- Verify deep copies and correct polymorphism behavior.

- Use tools like `valgrind` to check for memory leaks.

## 📝 Notes

- Proper use of **virtual functions**, **inheritance**, and **dynamic memory allocation** is crucial.

- Follow **Rule of Three (or Five)** for classes managing dynamic resources.

- Recommended compiler flags: `-Wall -Wextra -Werror`.
## 👥 Author
[**Tudor Ursescu**](https://github.com/Tudor-Ursescu)
## 📜 License
This is an open-source project, and you are free to use, modify, and distribute it as you see fit.