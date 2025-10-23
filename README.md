# C++ Programming Exercises: Arrays, References & Student Management System

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C++17](https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-064F8C?style=for-the-badge&logo=cmake&logoColor=white)
![License](https://img.shields.io/github/license/Lagmouchyoussef/C-Programming-Exercises-Arrays-Pointers-Student-Management-System?style=for-the-badge)
![Last Commit](https://img.shields.io/github/last-commit/Lagmouchyoussef/C-Programming-Exercises-Arrays-Pointers-Student-Management-System?style=for-the-badge)

This repository is a comprehensive collection of C++ programming exercises designed to master fundamental and intermediate concepts. It progresses from basic array manipulation using `std::vector` to understanding pass-by-value vs. pass-by-reference, and culminates in a dynamic, structure-based Student Management System. This project serves as an excellent demonstration of core C++ principles, including the Standard Template Library (STL), RAII (Resource Acquisition Is Initialization), and object-oriented design.

## 📚 Table of Contents

- [Overview](#-overview)
- [Key Features](#-key-features)
- [Project Structure](#-project-structure)
- [Modules & Exercises](#-modules--exercises)
  - [Module 1: Array Utilities with `std::vector`](#module-1-array-utilities-with-stdvector)
  - [Module 2: Parameter Passing (Value vs. Reference)](#module-2-parameter-passing-value-vs-reference)
  - [Module 3: Student Management System](#module-3-student-management-system)
- [Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation & Compilation](#installation--compilation)
  - [Execution](#execution)
- [Usage Example](#-usage-example)
- [Contributing](#-contributing)
- [License](#-license)
- [Author](#-author)

---

## 🌟 Overview

This project is structured into three distinct modules, each targeting a specific area of C++ programming:

1.  **Array Utilities:** A set of functions that operate on `std::vector<int>` to perform common operations, showcasing the power and safety of the STL over C-style arrays.
2.  **Parameter Passing:** A clear illustration of the difference between passing arguments by value and by reference, a critical concept for efficiency and correctness in C++.
3.  **Student Management System:** A capstone exercise that uses `structs` with member functions, `std::string`, and `std::vector` to create a robust system for managing student records and their associated grades, demonstrating modern C++ data handling.

---

## ✨ Key Features

-   **Modern C++ Design:** Leverages C++17 features and idioms, including `std::vector`, `std::string`, and references.
-   **Modular Architecture:** Code is organized into logical modules with clear separation of interface (`.hpp`) and implementation (`.cpp`).
-   **RAII & Memory Safety:** Avoids manual memory management (`new`/`delete`) by using STL containers, which automatically handle memory, preventing leaks.
-   **Professional Build System:** Includes a `CMakeLists.txt` file for cross-platform, dependency-aware building.
-   **Clear Documentation:** Each module and function is documented within the code and explained in this README.

---

## 📂 Project Structure

The repository follows a standard C++ project layout for clarity and maintainability.

```
C-Programming-Exercises-Arrays-Pointers-Student-Management-System/
├── src/
│   ├── main.cpp              # Main program driver, demonstrates all modules
│   ├── array_utils.cpp       # Implementation of array utility functions
│   ├── student_system.cpp    # Implementation of the student management system
│   └── pointer_demo.cpp      # Implementation of the swap functions
├── include/
│   ├── array_utils.hpp       # Header file for array utilities
│   ├── student_system.hpp    # Header file for the student system
│   └── pointer_demo.hpp      # Header file for parameter passing demo
├── CMakeLists.txt            # CMake build configuration file
├── README.md                 # This file
└── LICENSE                   # Project license file
```

---

## 🧩 Modules & Exercises

### Module 1: Array Utilities with `std::vector`

**Objective:** To implement and test fundamental algorithms using the C++ Standard Library's `std::vector`.

**Functions:**
- `void displayArray(const std::vector<int>& arr);`
- `double calculateAverage(const std::vector<int>& arr);`
- `int searchElement(const std::vector<int>& arr, int value);`
- `int findMaximum(const std::vector<int>& arr);`
- `int countOccurrences(const std::vector<int>& arr, int value);`

### Module 2: Parameter Passing (Value vs. Reference)

**Objective:** To understand the practical difference between pass-by-value and pass-by-reference.

**Functions:**
- `void swapByValue(double a, double b);` // Ineffective swap
- `void swapByReference(double& a, double& b);` // Effective, idiomatic C++ swap

### Module 3: Student Management System

**Objective:** To design and implement a dynamic system for managing student data using modern C++ constructs.

**Data Structures:**
- `Grade`: A `struct` containing `std::string moduleName`, `int coefficient`, and `double value`.
- `Student`: A `struct` containing `std::string name`, `int age`, and a `std::vector<Grade>` to hold their grades.

**Core Functionalities:**
- `void displayStudent(const Student& s);`
- `void addGrade(Student& s, const Grade& newGrade);`
- `void deleteGrade(Student& s, size_t index);`
- `void modifyGrade(Student& s, size_t index, double newValue);`
- `double calculateWeightedAverage(const Student& s);`
- `Grade findHighestGrade(const Student& s);`

---

## 🚀 Getting Started

### Prerequisites

-   A C++17 compliant compiler (e.g., `g++` 8+, `clang++` 8+).
-   `CMake` (version 3.10 or newer).
-   A terminal or command-line interface.

### Installation & Compilation

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/Lagmouchyoussef/C-Programming-Exercises-Arrays-Pointers-Student-Management-System.git
    cd C-Programming-Exercises-Arrays-Pointers-Student-Management-System
    ```

2.  **Compile the project with CMake:**
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```
    This will create an executable named `program` inside the `build` directory.

    *To clean the build, simply remove the `build` directory:*
    ```bash
    rm -rf build
    ```

### Execution

After successful compilation, run the program from the `build` directory:

```bash
./program
```

---

## 📖 Usage Example

Running the program will execute a series of demonstrations for each module. The output for the Student Management System might look like this:

```text
--- Student Management System Demo ---

Created student: Alice (age 20)

Adding grades...
Added Math (coef: 3, grade: 85.50)
Added Physics (coef: 2, grade: 92.00)
Added History (coef: 1, grade: 78.00)

--- Student Details ---
Name: Alice
Age: 20
Grades:
  1. Module: Math, Coefficient: 3, Grade: 85.50
  2. Module: Physics, Coefficient: 2, Grade: 92.00
  3. Module: History, Coefficient: 1, Grade: 78.00

--- Calculations ---
Weighted Average: 86.90
Highest Grade: Physics (92.00)

--- Modification ---
Modifying History grade from 78.00 to 88.00...
New Weighted Average: 88.30
```

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/Lagmouchyoussef/C-Programming-Exercises-Arrays-Pointers-Student-Management-System/issues) if you want to contribute.

---

## 📄 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

## 👨‍💻 Author

**Lagmouch Youssef**

-   GitHub: [@Lagmouchyoussef](https://github.com/Lagmouchyoussef)
