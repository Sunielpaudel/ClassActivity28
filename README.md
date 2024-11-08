# Double to String Converter Project

This project provides a simple C++ utility to convert `double` values to `std::string` format with a specified number of decimal places. This is achieved through a reusable function defined in the `converted` namespace. The project is organized into separate header (`.hpp`) and implementation (`.cpp`) files, with a `main.cpp` file for testing the functionality.

## Objectives

The objectives of this project are:

- **Modularity**: To demonstrate how to separate code into header (`.hpp`) and source (`.cpp`) files for better organization and reusability.
- **Namespace Usage**: To encapsulate code within a namespace (`converted`) to avoid naming conflicts and enhance code organization.
- **Precision Control**: To provide a way to format `double` values into strings with a specified number of decimal places.
- **Practical Application**: To showcase a practical example of converting numerical data to string format in C++ for formatted output or further processing.

## Project Structure

The project is divided into the following files:

- **`doubleToString.hpp`**: This header file contains the declaration of the `doubleToString` function within the `converted` namespace.
- **`doubleToString.cpp`**: This implementation file contains the definition of the `doubleToString` function, where the logic for converting a `double` to a `std::string` with specified precision is implemented.
- **`main.cpp`**: This file tests the `doubleToString` function by converting a sample `double` value and printing the result.

### File Breakdown

- **`doubleToString.hpp`**
  - Declares the `doubleToString` function.
  - Encapsulates the function in the `converted` namespace.
  - Includes header guards to prevent multiple inclusions.

- **`doubleToString.cpp`**
  - Defines the `doubleToString` function.
  - Uses `<sstream>` and `<iomanip>` libraries to format the `double` value with fixed decimal precision.

- **`main.cpp`**
  - Tests the `doubleToString` function by calling it with a sample `double` value and specified precision.
  - Outputs the converted `std::string` to the console.

## Screenshots

![Screenshot (27)](https://github.com/user-attachments/assets/37456681-0352-43c8-ad46-223f410c27c4)

## Author
**. Kailash Paudel**
