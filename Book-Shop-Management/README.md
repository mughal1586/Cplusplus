C++ Book Store Management System

Description
This C++ program simulates a book store management system. It allows administrators to add new books, view all books, manage inventory, and view sales and revenue. Users can check the availability of books, sell books to customers, and view sales history.

Features
- Defines a book struct to store book details (name, price, ISBN, stock).
- Defines a sales struct to store sales data (book name, quantity sold, price per book, total price).
- Allows administrators to add new books to the inventory.
- Displays all books in the inventory.
- Allows administrators to manage inventory (update price and stock).
- Allows users to check the availability of books.
- Simulates the process of selling a book to a customer.
- Generates a receipt for the sale.
- Displays sales history and revenue.

Code Structure
The code consists of a single file:

- main.cpp: Contains the main function that uses the book and sales structs to simulate the book store management system.

Dependencies
- iostream: For input/output operations.
- string: For using string data type.

Compilation and Execution
To compile and run the program, save the file with a .cpp extension (e.g., main.cpp) and use a C++ compiler.

Usage
1. Run the program and select the user type (administrator or user).
2. If you are an administrator, you can add new books, view all books, manage inventory, and view sales and revenue.
3. If you are a user, you can check the availability of books, sell books to customers, and view sales history.

Notes
- The program uses a simple text-based interface.
- The program does not store data persistently; all data is lost when the program is closed.
- The program does not handle errors robustly; it may crash or produce unexpected results if invalid input is provided.
