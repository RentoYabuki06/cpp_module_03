# 42tokyo_cpp03

This directory contains projects for the 42Tokyo C++ Module 03, demonstrating inheritance, polymorphism, and other object-oriented programming concepts in C++98.

## Overview

The module features a series of exercises building a hierarchy of robot trap classes:

- **ClapTrap**: Base class with basic functionality
- **ScavTrap**: Derived from ClapTrap with enhanced abilities
- **FragTrap**: Another derived class with different specializations
- **DiamondTrap**: Multiple inheritance example (diamond inheritance pattern)

## Project Structure

### ex00: Basic ClapTrap

- **Description**: Implements the `ClapTrap` class, a basic robot with fundamental functionality
- **Features**:
  - 10 hit points, 10 energy points, 0 attack damage
  - Methods for attacking, taking damage, and repairing
  - Complete constructors, destructors, and rule-of-three implementation
- **Files**:
  - ClapTrap.hpp: Class declaration with member variables and methods
  - ClapTrap.cpp: Implementation of the ClapTrap class
  - main.cpp: Demonstrates the functionality with various test cases
  - Makefile: Builds the project with appropriate flags

### ex01: ScavTrap Extension

- **Description**: Extends `ClapTrap` with the `ScavTrap` class, showing basic inheritance
- **Features**:
  - Enhanced stats: 100 hit points, 50 energy points, 20 attack damage
  - Overridden attack method with different behavior
  - Special `guardGate` ability
  - Proper inheritance of constructors and destructors
- **Files**:
  - Includes all files from ex00
  - ScavTrap.hpp: Declaration of the ScavTrap class inheriting from ClapTrap
  - ScavTrap.cpp: Implementation of ScavTrap methods
  - main.cpp: Tests comparing ClapTrap and ScavTrap functionality

### ex02: FragTrap Addition

- **Description**: Adds another derived class `FragTrap` alongside ScavTrap
- **Features**:
  - Different stats: 100 hit points, 100 energy points, 30 attack damage
  - Unique `highFivesGuys` method requesting positive high fives
  - Proper implementation of orthodox canonical form
- **Files**:
  - Includes all files from ex01
  - FragTrap.hpp: Declaration of the FragTrap class inheriting from ClapTrap
  - FragTrap.cpp: Implementation of FragTrap methods
  - main.cpp: Testing ClapTrap, ScavTrap, and FragTrap together

### ex03: DiamondTrap Multiple Inheritance

- **Description**: Implements the `DiamondTrap` class using virtual inheritance to solve the diamond problem
- **Features**:
  - Inherits from both ScavTrap and FragTrap
  - Uses ScavTrap's attack function
  - Combines attributes from both parent classes:
    - FragTrap's hit points (100)
    - FragTrap's attack damage (30)
    - ScavTrap's energy points (50)
  - Maintains both its own name and the ClapTrap name
  - Special `whoAmI()` method showing both names
  - Virtual inheritance to avoid duplicate ClapTrap members
- **Files**:
  - Includes all files from ex02
  - DiamondTrap.hpp: Class inheriting from both ScavTrap and FragTrap
  - DiamondTrap.cpp: Implementation of DiamondTrap methods
  - main.cpp: Testing the diamond inheritance structure

## Technical Details

- All code compiles with C++98 standard using flags: `-Wall -Wextra -Werror -std=c++98 -pedantic -Wshadow`
- Proper memory management and Orthodox Canonical Form implementation
- Output messages for all constructors and destructors to visualize the object lifecycle
- Uses virtual inheritance to solve the diamond problem in multiple inheritance

## Compilation & Execution

Each exercise has its own Makefile:

```bash
# To build an exercise
cd ex00  # or ex01, ex02, ex03
make

# To run
./firstClapTrap  # or secondClapTrap, thirdClapTrap, forthClapTrap

# To clean
make clean   # removes object files
make fclean  # removes object files and executable
make re      # rebuilds the project
```

The executables demonstrate various interactions between the trap classes, including attacks, damage, repairs, and special abilities.