# Car Rental Management System (C++)

A console-based C++ mini-project based on the original `Car` and `Customer` class design. It accepts vehicle and customer details, calculates the rental amount, and displays a rental bill.

## Features

- Enter car ID, vehicle name, and rent per day.
- Enter customer ID, name, contact number, and rental duration.
- Calculate the rental amount.
- Display car and customer information.
- Display the final rental bill.

## Rental calculation

`Total Rental Amount = Rent Per Day × Number Of Rental Days`

## OOP concepts demonstrated

- Classes and objects
- Encapsulation with private data members
- Public member functions
- Forward declaration
- Passing an object by reference
- Friend member function between two classes
- Member function definitions outside the class
- Separate header (`.h`) and implementation (`.cpp`) files

## Project structure

```text
Car_Rental_Management_System/
├── main.cpp
├── Car.h
├── Car.cpp
├── Customer.h
├── Customer.cpp
├── README.md
└── .gitignore
```

## Requirements

- A C++ compiler such as g++.
- C++11 or later.

## Compile

Run this command in the project directory:

```bash
g++ -std=c++11 main.cpp Car.cpp Customer.cpp -o car_rental
```

## Run

Linux/macOS:

```bash
./car_rental
```

Windows PowerShell:

```powershell
.\car_rental.exe
```

## Example calculation

If the rent per day is Rs. 2,500 and the rental duration is 3 days:

`Total Rental Amount = 2500 × 3 = Rs. 7500`

## Design note

The contact number is stored as a `std::string`, rather than an integer, because phone numbers are identifiers, not quantities. This also preserves leading zeroes and avoids integer overflow.

This is an educational, single-car and single-customer billing example. It does not yet include car inventory, availability tracking, booking records, payment processing, or persistent file storage.
