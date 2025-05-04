# 42tokyo_cpp03

This directory contains projects for the 42Tokyo C++ Module 03. The projects demonstrate the use of inheritance, polymorphism, and other object-oriented programming concepts in C++.

## Project Structure

### ex00
- **Description**: Implements the `ClapTrap` class, which represents a basic robot with attack, repair, and damage-taking functionalities.
- **Files**:
  - `ClapTrap.hpp`: Header file defining the `ClapTrap` class.
  - `ClapTrap.cpp`: Implementation of the `ClapTrap` class.
  - `main.cpp`: Demonstrates the functionality of the `ClapTrap` class.
  - `Makefile`: Build script for compiling the project.

### ex01
- **Description**: Extends the `ClapTrap` class by introducing the `ScavTrap` class, which adds a special "Gate Keeper" mode.
- **Files**:
  - `ClapTrap.hpp` and `ClapTrap.cpp`: Base class implementation.
  - `ScavTrap.hpp` and `ScavTrap.cpp`: Derived class with additional functionality.
  - `main.cpp`: Demonstrates the functionality of both `ClapTrap` and `ScavTrap`.
  - `Makefile`: Build script for compiling the project.

### ex02
- **Description**: Adds another derived class, `FragTrap`, which introduces a "High Five" feature. Demonstrates multiple inheritance.
- **Files**:
  - `ClapTrap.hpp` and `ClapTrap.cpp`: Base class implementation.
  - `ScavTrap.hpp` and `ScavTrap.cpp`: Derived class with "Gate Keeper" mode.
  - `FragTrap.hpp` and `FragTrap.cpp`: Derived class with "High Five" feature.
  - `main.cpp`: Demonstrates the functionality of all classes.
  - `Makefile`: Build script for compiling the project.

### ex03
- **Description**: Introduces the `DiamondTrap` class, which inherits from both `ScavTrap` and `FragTrap` using virtual inheritance. Demonstrates complex inheritance hierarchies.
- **Files**:
  - `ClapTrap.hpp` and `ClapTrap.cpp`: Base class implementation.
  - `ScavTrap.hpp` and `ScavTrap.cpp`: Derived class with "Gate Keeper" mode.
  - `FragTrap.hpp` and `FragTrap.cpp`: Derived class with "High Five" feature.
  - `DiamondTrap.hpp` and `DiamondTrap.cpp`: Derived class combining features of `ScavTrap` and `FragTrap`.
  - `main.cpp`: Demonstrates the functionality of all classes, including `DiamondTrap`.
  - `Makefile`: Build script for compiling the project.