//#include <iostream>
//using namespace std;
//
//int main()
// {
//    char ope;
//    float num1, num2;
//
//    cout << "Enter an operator (+, -, *, /): ";
//    cin >> ope;
//    cout << "Enter two operands: ";
//    cin >> num1 >> num2;
//
//    switch(ope) 
//	{
//        case '+':
//            cout << num1 << " + " << num2 << " = " << num1 + num2;
//            break;
//        case '-':
//            cout << num1 << " - " << num2 << " = " << num1 - num2;
//            break;
//        case '*':
//            cout << num1 << " * " << num2 << " = " << num1 * num2;
//            break;
//        case '/':
//            if(num2 != 0)
//                cout << num1 << " / " << num2 << " = " << num1 / num2;
//            else
//                cout << "Division by zero is not allowed.";
//            break;
//        default:
//            cout << "Invalid operator!";
//            break;
//    }
//
//    return 0;
//}


//                             PROGRAM 2

//#include <iostream>
//using namespace std;
//
//int main()
// {
//    int day;
//    cout << "Enter a number (1-7): ";
//    cin >> day;
//
//    switch(day)
//	 {
//        case 1:
//            cout << "Monday";
//            break;
//        case 2:
//            cout << "Tuesday";
//            break;
//        case 3:
//            cout << "Wednesday";
//            break;
//        case 4:
//            cout << "Thursday";
//            break;
//        case 5:
//            cout << "Friday";
//            break;
//        case 6:
//            cout << "Saturday";
//            break;
//        case 7:
//            cout << "Sunday";
//            break;
//        default:
//            cout << "Error: Please enter a number between 1 and 7.";
//            break;
//    }
//
//    return 0;
//}


//                       PROGRAM 3

//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main() 
//{
//    int shape;
//    cout << "Select a shape (1 for Circle, 2 for Rectangle, 3 for Triangle): ";
//    cin >> shape;
//
//    switch(shape)
//	 {
//        case 1:
//        	{
//			
//		 
//            // Area of a Circle
//            float radius;
//            cout << "Enter the radius of the circle: ";
//            cin >> radius;
//            float area = M_PI * radius * radius;
//            cout << "The area of the circle is: " << area;
//            break;
//    }
//        case 2:
//		{
//            // Area of a Rectangle
//            float length, width;
//            cout << "Enter the length and width of the rectangle: ";
//            cin >> length >> width;
//            float area = length * width;
//            cout << "The area of the rectangle is: " << area;
//            break;
//    }
//        case 3: 
//          {
//		    // Area of a Triangle
//            float base, height;
//            cout << "Enter the base and height of the triangle: ";
//            cin >> base >> height;
//            float area = 0.5 * base * height;
//            cout << "The area of the triangle is: " << area;
//            break;
//    }
//        default:
//            cout << "Error: Invalid shape selected. Please select 1, 2, or 3.";
//            break;
//    }
//
//    return 0;
//}

//                           PROGRAM 4

//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    double amount, convertedAmount;
//    int choice;
//
//    const double USD_to_PKR = 281.74;
//    const double USD_to_INR = 82.50;
//    const double USD_to_EUR = 0.90;
//
//    cout << "Currency Converter" << endl;
//    cout << "1. USD to PKR" << endl;
//    cout << "2. USD to INR" << endl;
//    cout << "3. USD to Euros" << endl;
//    cout << "Enter your choice: ";
//    cin >> choice;
//
//    cout << "Enter the amount in USD: ";
//    cin >> amount;
//
//    switch (choice)
//	 {
//        case 1:
//            convertedAmount = amount * USD_to_PKR;
//            cout << "Converted amount: " << convertedAmount << " PKR" << endl;
//            break;
//        case 2:
//            convertedAmount = amount * USD_to_INR;
//            cout << "Converted amount: " << convertedAmount << " INR" << endl;
//            break;
//        case 3:
//            convertedAmount = amount * USD_to_EUR;
//            cout << "Converted amount: " << convertedAmount << " Euros" << endl;
//            break;
//        default:
//            cout << "Invalid choice" << endl;
//    }
//
//    return 0;
//}

//                            program 4
#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
    int category, item, quantity;
    double price = 0.0, total = 0.0, discount = 0.0, finalTotal = 0.0;

    cout << "Welcome to the Shopping System" << endl;
    cout << "Select a category:" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Groceries" << endl;
    cin >> category;

    switch (category) 
	{
        case 1: // Electronics
            cout << "Select an item:" << endl;
            cout << "1. Laptop ($1000)" << endl;
            cout << "2. Smartphone ($700)" << endl;
            cout << "3. Headphones ($150)" << endl;
            cin >> item;

            if (item == 1) price = 1000;
            else if (item == 2) price = 700;
            else if (item == 3) price = 150;
            else
			 {
                cout << "Invalid item selection." << endl;
                return 1;
            }
            break;

        case 2: // Clothing
            cout << "Select an item:" << endl;
            cout << "1. Jacket ($120)" << endl;
            cout << "2. T-shirt ($40)" << endl;
            cout << "3. Jeans ($60)" << endl;
            cin >> item;

            if (item == 1) price = 120;
            else if (item == 2) price = 40;
            else if (item == 3) price = 60;
            else {
                cout << "Invalid item selection." << endl;
                return 1;
            }
            break;

        case 3: // Groceries
            cout << "Select an item:" << endl;
            cout << "1. Milk (1 Liter - $2)" << endl;
            cout << "2. Bread (1 Loaf - $3)" << endl;
            cout << "3. Eggs (1 Dozen - $5)" << endl;
            cin >> item;

            if (item == 1) price = 2;
            else if (item == 2) price = 3;
            else if (item == 3) price = 5;
            else {
                cout << "Invalid item selection." << endl;
                return 1;
            }
            break;

        default:
            cout << "Invalid category selection." << endl;
            return 1;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;

    if (total >= 100 && total <= 500) discount = total * 0.10;
    else if (total > 500) discount = total * 0.20;

    finalTotal = total - discount;

    cout << fixed << setprecision(2);
    cout << "\nInvoice" << endl;
    cout << "--------------------------" << endl;
    cout << "Total amount: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final total: $" << finalTotal << endl;
    cout << "--------------------------" << endl;

    return 0;
}