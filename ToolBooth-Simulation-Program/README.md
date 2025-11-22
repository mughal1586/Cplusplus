Toolbooth Simulation Program

Description
This C++ program simulates a tollbooth, tracking the number of cars passing through and the total money collected. It provides functionality to record paying and non-paying cars, and displays the accumulated statistics.

Features
- Tracks the total number of cars that have passed through the tollbooth.
- Records the total money collected from paying cars.
- Allows for the simulation of paying cars (with a default fee of $5.0) and non-paying cars.
- Displays the current total number of cars and the total money collected.

Code Structure
The program consists of:
- `header.h`: Declaration of the `toolbooth` class.
- `toolbooth.cpp`: Implementation of the `toolbooth` class methods.
- `main.cpp`: Main program that creates a `toolbooth` object, simulates car passage, and displays results.

Dependencies
- iostream: For input/output operations.
- string: Included in the header, although not directly used in the provided use case, it's present for potential future string manipulation.

Compilation and Execution
To compile and run the program, follow these steps:

1.  **Save the files:**
    -   Save the class declaration as `header.h`.
    -   Save the class implementation as `toolbooth.cpp`.
    -   Save the main program as `main.cpp`.

2.  **Compile the program:**
    -   Using a C++ compiler (like g++), compile the files. For example, using g++:
        ```bash
        g++ toolbooth.cpp main.cpp -o toolbooth_simulation
        ```

3.  **Execute the program:**
    -   Run the compiled executable:
        ```bash
        ./toolbooth_simulation
        ```