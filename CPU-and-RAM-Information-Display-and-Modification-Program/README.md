CPU and RAM Information Display and Modification Program

Description
This C++ program demonstrates the use of the `CPU` and `RAM` classes. It allows the user to display CPU and RAM information and modify their attributes through an interactive menu.

Features
-   Creates instances of the `CPU` and `RAM` classes.
-   Provides a menu-driven interface to
    -   Display CPU information.
    -   Display RAM information.
    -   Edit CPU attributes (clock speed and cores).
    -   Edit RAM attributes (capacity).
    -   Exit the program.
-   Utilizes the `CPU` and `RAM` classes to store and manipulate CPU and RAM data.

Code Structure
The code consists of a single file, `main.cpp`, which contains the main program logic.

Dependencies
-   iostream For inputoutput operations.
-   CPU.h Header file for the `CPU` class.
-   RAM.h Header file for the `RAM` class.

Compilation and Execution
To compile and run the program

1.  Save the files
    -   Save the main program as `main.cpp`.
    -   Ensure `CPU.h`, `CPU.cpp`, `RAM.h`, and `RAM.cpp` are in the same directory.

2.  Compile
    -   Use a C++ compiler (e.g., g++) to compile the code
        ```bash
        g++ CPU.cpp RAM.cpp main.cpp -o system_info
        ```

3.  Execute
    -   Run the executable
        ```bash
        .system_info
        ```