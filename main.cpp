#include <iostream>
using namespace std;

int main() {
    // Define the base amounts of ingredients for 48 cookies
    const double SUGAR_PER_48_COOKIES = 1.5;
    const double BUTTER_PER_48_COOKIES = 1.0;
    const double FLOUR_PER_48_COOKIES = 2.75;
    const int BASE_COOKIES = 48;

    // Ask the user how many cookies they want to make
    int desiredCookies;
    cout << "How many cookies would you like to make? ";
    cin >> desiredCookies;

    // Calculate the ratio of desired cookies to base cookies
    double ratio = static_cast<double>(desiredCookies) / BASE_COOKIES;

    // Calculate the required ingredients for the desired number of cookies
    double sugarNeeded = SUGAR_PER_48_COOKIES * ratio;
    double butterNeeded = BUTTER_PER_48_COOKIES * ratio;
    double flourNeeded = FLOUR_PER_48_COOKIES * ratio;

    // Display the results
    cout << "To make " << desiredCookies << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}