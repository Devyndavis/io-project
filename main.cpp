#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Variables
    double principal, rate, amount;
    int timesCompounded;

    // Get user input
    cout << "Enter the principal amount ($): ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert annual interest rate percentage to a decimal
    rate = rate / 100;

    // Calculate the amount in savings
    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);

    // Calculate the interest earned
    double interest = amount - principal;

    // Set precision for output
    cout << fixed << setprecision(2);

    // Display the results
    cout << "\nInterest rate: " << (rate * 100) << "%" << endl;
    cout << "Times compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in savings: $" << amount << endl;

    return 0;
}