Date Handling Program

Description
This C++ program defines and utilizes a `Date` class to handle date information. It allows for the creation, modification, and display of date objects.

Features
-   Defines a `Date` class with day, month, and year attributes.
-   Provides a default constructor to initialize Date objects to 25/7/2006[cite: 5, 6].
-   Includes getter methods to access the day, month, and year[cite: 6, 7, 8, 9].
-   Includes setter methods to modify the day, month, and year[cite: 7, 9, 10].
-   Offers a `displayDate` method to output the date in the format day/month/year[cite: 10, 11].
-   Demonstrates the creation of Date objects and setting their values.
-   Takes user input to create a Date object representing a birthdate[cite: 2, 3, 4].

Code Structure
The code is divided into three files:
-   `header.h`: Contains the declaration of the `Date` class.
-   `Date Handler.cpp`: Contains the implementation of the `Date` class methods.
-   `main.cpp`: Contains the main program logic that uses the `Date` class.

Dependencies
-   iostream: For input/output operations.
-   string: For string operations (though not directly used in the current implementation, it is included).

Compilation and Execution
To compile and run the program:

1.  **Save the files:**
    -   Save the class declaration as `header.h`.
    -   Save the class implementation as `Date Handler.cpp`.
    -   Save the main program as `main.cpp`.

2.  **Compile:**
    -   Use a C++ compiler (e.g., g++) to compile the code:
        ```bash
        g++ Date Handler.cpp main.cpp -o date_program
        ```

3.  **Execute:**
    -   Run the executable:
        ```bash
        ./date_program
        ```