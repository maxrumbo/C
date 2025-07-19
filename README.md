# Procedural Programming Projects (C Language) 

Welcome to my repository for the Procedural Programming course, Semester 2! This collection showcases the projects and assignments I've developed using the **C programming language**. It's a journey through the fundamentals of procedural programming, highlighting my growth and understanding of core C concepts.

## About This Course

Procedural Programming was an essential course designed to build a strong foundation in algorithmic thinking and logical problem-solving. We dove deep into the procedural paradigm, using C due to its efficiency, low-level memory control, and its foundational role in computer science. It was a challenging yet incredibly rewarding experience that shaped my understanding of how software works at a more fundamental level.

---

## Key Topics Explored

Throughout this semester, we covered a wide array of crucial C programming topics, each building upon the last. Here's a breakdown:

* **C Basics: `int main() { ... }`, `printf()`, `scanf()`**
    * **Explanation:** Understanding the fundamental structure of a C program, declaring variables, using various data types, arithmetic and logical operators, and performing basic input/output operations.
* **Control Structures: `if-else`, `switch-case`, `for`, `while`, `do-while`**
    * **Explanation:** Implementing conditional logic to execute code blocks based on certain conditions, and using different types of loops for repetitive tasks.
* **Functions: `return_type function_name(parameters) { ... }`**
    * **Explanation:** Defining and calling reusable blocks of code, passing arguments (by value and by reference), and understanding function prototypes for better code organization.
* **Arrays: `data_type array_name[size];`**
    * **Explanation:** Declaring and manipulating collections of elements of the same data type, including single and multi-dimensional arrays for storing structured data.
* **Pointers: `data_type *pointer_name;`, `&variable_name`**
    * **Explanation:** Working with memory addresses directly, performing pointer arithmetic, understanding the relationship between pointers and arrays, and using pointers with functions.
* **Structures (Structs) and Unions: `struct StructName { ... };`, `union UnionName { ... };`**
    * **Explanation:** Creating custom data types to group related variables of different data types, providing a way to handle complex data structures.
* **File I/O: `FILE *fp;`, `fopen()`, `fprintf()`, `fscanf()`, `fclose()`**
    * **Explanation:** Learning to read data from and write data to files (both text and binary), essential for persistent data storage and retrieval.
* **Dynamic Memory Management: `malloc()`, `calloc()`, `realloc()`, `free()`**
    * **Explanation:** Allocating and deallocating memory during program runtime, providing flexibility for managing data structures with variable sizes.
* **Pre-processor Directives: `#include <header.h>`, `#define MACRO_NAME value`**
    * **Explanation:** Using directives to include header files for standard library functions and defining symbolic constants or macros before the compilation process.

---

## Repository Structure

This repository is organized into distinct folders, with each representing a specific module, assignment, or larger project. Think of it as a chronological progression through my learning journey:
Markdown

# Procedural Programming Projects (C Language) 

Welcome to my repository for the Procedural Programming course, Semester 2! This collection showcases the projects and assignments I've developed using the **C programming language**. It's a journey through the fundamentals of procedural programming, highlighting my growth and understanding of core C concepts.

## About This Course

Procedural Programming was an essential course designed to build a strong foundation in algorithmic thinking and logical problem-solving. We dove deep into the procedural paradigm, using C due to its efficiency, low-level memory control, and its foundational role in computer science. It was a challenging yet incredibly rewarding experience that shaped my understanding of how software works at a more fundamental level.

---

## Key Topics Explored

Throughout this semester, we covered a wide array of crucial C programming topics, each building upon the last. Here's a breakdown:

* **C Basics: `int main() { ... }`, `printf()`, `scanf()`**
    * **Explanation:** Understanding the fundamental structure of a C program, declaring variables, using various data types, arithmetic and logical operators, and performing basic input/output operations.
* **Control Structures: `if-else`, `switch-case`, `for`, `while`, `do-while`**
    * **Explanation:** Implementing conditional logic to execute code blocks based on certain conditions, and using different types of loops for repetitive tasks.
* **Functions: `return_type function_name(parameters) { ... }`**
    * **Explanation:** Defining and calling reusable blocks of code, passing arguments (by value and by reference), and understanding function prototypes for better code organization.
* **Arrays: `data_type array_name[size];`**
    * **Explanation:** Declaring and manipulating collections of elements of the same data type, including single and multi-dimensional arrays for storing structured data.
* **Pointers: `data_type *pointer_name;`, `&variable_name`**
    * **Explanation:** Working with memory addresses directly, performing pointer arithmetic, understanding the relationship between pointers and arrays, and using pointers with functions.
* **Structures (Structs) and Unions: `struct StructName { ... };`, `union UnionName { ... };`**
    * **Explanation:** Creating custom data types to group related variables of different data types, providing a way to handle complex data structures.
* **File I/O: `FILE *fp;`, `fopen()`, `fprintf()`, `fscanf()`, `fclose()`**
    * **Explanation:** Learning to read data from and write data to files (both text and binary), essential for persistent data storage and retrieval.
* **Dynamic Memory Management: `malloc()`, `calloc()`, `realloc()`, `free()`**
    * **Explanation:** Allocating and deallocating memory during program runtime, providing flexibility for managing data structures with variable sizes.
* **Pre-processor Directives: `#include <header.h>`, `#define MACRO_NAME value`**
    * **Explanation:** Using directives to include header files for standard library functions and defining symbolic constants or macros before the compilation process.

---

## Repository Structure

This repository is organized into distinct folders, with each representing a specific module, assignment, or larger project. Think of it as a chronological progression through my learning journey:


├── [Assignment_Folder_1]/

│   └── [assignment_1_solution.c]

├── [Assignment_Folder_2]/

│   └── [assignment_2_solution.c]

├── [Final_Project_Name]/

│   ├── [main.c]

│   └── [utility_functions.c]

└── README.md

* **`[Assignment_Folder_X]`**: Contains the source code (`.c` files) for specific assignments or practice exercises.
* **`[Final_Project_Name]`**: Houses the source code for the culminating end-of-semester project (if applicable).
* **`README.md`**: This very file, providing an overview of the repository.

## How to Compile and Run My C Programs

To compile and execute any of the C programs in this repository, you'll need a C compiler (like **GCC**). Follow these steps:

1.  **Clone the Repository:**
    ```bash
    git clone [https://github.com/maxrumbo/YourRepositoryName.git](https://github.com/maxrumbo/YourRepositoryName.git)
    cd YourRepositoryName
    ```
    *(Remember to replace `YourRepositoryName` with your actual repository name!)*

2.  **Navigate to the Desired Project/Assignment Folder:**
    ```bash
    cd [Your_Specific_Project_Folder]
    ```
    *(For example: `cd Final_Project_Name`)*

3.  **Compile the Source Code:**
    ```bash
    gcc -o your_program_output_name your_source_file.c
    ```
    * Replace `your_program_output_name` with what you want your executable file to be called (e.g., `my_app`).
    * Replace `your_source_file.c` with the name of the main C file you want to compile (e.g., `main.c`).
    * If a project involves multiple `.c` files, compile them all at once:
        ```bash
        gcc -o my_complex_app file1.c file2.c file3.c
        ```

4.  **Run the Program:**
    ```bash
    ./your_program_output_name
    ```

---

## Contributions

This repository serves primarily as an academic portfolio. While direct contributions aren't expected, I always welcome constructive feedback or suggestions for code improvements! Feel free to open an issue or simply reach out.

---

## License

All content in this repository is created for educational purposes within the scope of Del Institute of Technology. All Rights Reserved.
