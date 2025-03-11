//#include <iostream>
//using namespace std;
//
//int main()
// {
//    // Initialize two integer variables with values of your choice
//    int a = 20;
//    int b = 5;
//
//    // Perform and display the results of the operations
//    cout << "a = " << a << ", b = " << b << endl;
//
//    // Addition
//    cout << "Addition (a + b): " << a + b << endl;
//
//    // Subtraction
//    cout << "Subtraction (a - b): " << a - b << endl;
//
//    // Multiplication
//    cout << "Multiplication (a * b): " << a * b << endl;
//
//    // Division (assuming b is not zero)
//    if (b != 0) 
//	{
//        cout << "Division (a / b): " << a / b << endl;
//    } 
//	else
//	 {
//        cout << "Division by zero is not allowed!" << endl;
//    }
//
//    return 0;
//}


// program 2

//#include <iostream>
//#include <cmath>  // For using pow() function
//
//using namespace std;
//
//int main()
// {
//    // Initialize the coordinates of the two points
//    double x1 = 3.0, y1 = 4.0;  // Coordinates of the first point
//    double x2 = 7.0, y2 = 1.0;  // Coordinates of the second point
//
//    // Calculate the squared distance using the given formula
//    double squared_distance = pow(x2 - x1, 2) + pow(y2 - y1, 2);
//
//    // Display the squared distance
//    cout << "The squared distance between the points (" 
//         << x1 << ", " << y1 << ") and (" 
//         << x2 << ", " << y2 << ") is: " 
//         << squared_distance << endl;
//
//    return 0;
//}
//
//
   //          program 3
   
// #include <iostream>
//#include <iomanip>  // For setting decimal precision
//
//using namespace std;
//
//int main()
// {
//    // Define constants
//    const double SALES_TAX_RATE = 0.06;  // Sales tax rate (6%)
//
//    // Define the prices of the five items
//    double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
//
//    // Display the price of each item
//    cout << "Price of Item 1: $" << fixed << setprecision(2) << item1 << endl;
//    cout << "Price of Item 2: $" << fixed << setprecision(2) << item2 << endl;
//    cout << "Price of Item 3: $" << fixed << setprecision(2) << item3 << endl;
//    cout << "Price of Item 4: $" << fixed << setprecision(2) << item4 << endl;
//    cout << "Price of Item 5: $" << fixed << setprecision(2) << item5 << endl;
//
//    // Calculate the subtotal (sum of all item prices)
//    double subtotal = item1 + item2 + item3 + item4 + item5;
//
//    // Display the subtotal
//    cout << "\nSubtotal: $" << fixed << setprecision(2) << subtotal << endl;
//
//    // Calculate the sales tax (6% of the subtotal)
//    double salesTax = subtotal * SALES_TAX_RATE;
//
//    // Display the sales tax
//    cout << "Sales Tax (6%): $" << fixed << setprecision(2) << salesTax << endl;
//
//    // Calculate the total amount (subtotal + sales tax)
//    double totalAmount = subtotal + salesTax;
//
//    // Display the total amount
//    cout << "\nTotal Amount: $" << fixed << setprecision(2) << totalAmount << endl;
//
//    return 0;
//}
//         program 4

//#include <iostream>
//#include <iomanip>  // For setting decimal precision
//
//using namespace std;
//
//int main()
// {
//    // Initialize the predefined test scores
//    double testScore1 = 85.5;
//    double testScore2 = 92.0;
//    double testScore3 = 78.5;
//
//    // Calculate the average of the three test scores
//    double average = (testScore1 + testScore2 + testScore3) / 3.0;
//
//    // Display the average rounded to two decimal places
//    cout << "The average of the test scores is: " << fixed << setprecision(2) << average << endl;
//
//    return 0;
//}

// program 5
//#include <iostream>
//using namespace std;
//
//int main()
// {
//    // Declare two integer variables
//    int num1, num2;
//
//    // Prompt the user to enter two integers
//    cout << "Enter the first integer: ";
//    cin >> num1;
//
//    cout << "Enter the second integer: ";
//    cin >> num2;
//
//    // Perform arithmetic operations
//    int sum = num1 + num2;
//    int difference = num1 - num2;
//    int product = num1 * num2;
//    int quotient = num1 / num2;  // Integer division
//    int modulus = num1 % num2;   // Modulus
//
//    // Display the results of the operations
//    cout << "\nAddition (num1 + num2): " << sum << endl;
//    cout << "Subtraction (num1 - num2): " << difference << endl;
//    cout << "Multiplication (num1 * num2): " << product << endl;
//
//    // Check for division by zero
//    if (num2 != 0) {
//        cout << "Division (num1 / num2): " << quotient << endl;
//        cout << "Modulus (num1 % num2): " << modulus << endl;
//    } 
//	else
//	 {
//        cout << "Error: Division by zero is not allowed!" << endl;
//    }
//
//    return 0;
//}
//
//               program 6
//#include <iostream>
//#include <iomanip>  // For setting decimal precision
//
//using namespace std;
//
//int main() 
//{
//    // Declare variables to store weight and height
//    double weight, height;
//
//    // Prompt the user to enter their weight and height
//    cout << "Enter your weight in kilograms: ";
//    cin >> weight;
//
//    cout << "Enter your height in meters: ";
//    cin >> height;
//
//    // Calculate BMI using the formula: BMI = weight / (height * height)
//    double bmi = weight / (height * height);
//
//    // Display the BMI rounded to two decimal places
//    cout << "Your BMI is: " << fixed << setprecision(2) << bmi << endl;
//
//    return 0;
//}

//          program 7
//#include <iostream>
//#include <iomanip>  // For setting decimal precision
//
//using namespace std;
//
//int main()
// {
//    // Declare variables for distance, fuel efficiency, and fuel cost
//    double distance, fuelEfficiency, fuelCostPerLiter;
//
//    // Prompt the user to enter the values
//    cout << "Enter the total distance of the trip in kilometers: ";
//    cin >> distance;
//
//    cout << "Enter the vehicle's fuel efficiency (in km/l): ";
//    cin >> fuelEfficiency;
//
//    cout << "Enter the fuel cost per liter in PKR: ";
//    cin >> fuelCostPerLiter;
//
//    // Calculate the total fuel cost using the formula
//    double totalFuelCost = (distance / fuelEfficiency) * fuelCostPerLiter;
//
//    // Display the total fuel cost, rounded to two decimal places
//    cout << fixed << setprecision(2);  // Set precision to 2 decimal places
//    cout << "The total fuel cost for the trip is: " << totalFuelCost << " PKR" << endl;
//
//    return 0;
//}
