#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::inputCustomerDetails()
{
    cout << "\nEnter the customer ID: ";
    cin >> customer_id;

    cout << "Enter the customer name: ";
    getline(cin >> ws, name);

    // Store a phone number as text so leading zeroes and 10 digits are preserved.
    cout << "Enter the customer contact number: ";
    cin >> contact_number;

    cout << "Enter the number of rental days: ";
    cin >> rental_days;
}

void Customer::displayCustomerDetails() const
{
    cout << "\n----- Customer Details -----\n";
    cout << "Customer ID       : " << customer_id << '\n';
    cout << "Customer Name     : " << name << '\n';
    cout << "Contact Number    : " << contact_number << '\n';
    cout << "Rental Days       : " << rental_days << '\n';
}

void Customer::displayTotalAmount() const
{
    cout << "\n----- Rental Bill -----\n";
    cout << "Total Rental Amount: Rs. " << total_amount << '\n';
}
