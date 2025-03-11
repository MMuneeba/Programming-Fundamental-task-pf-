//#include <iostream>
//#include <cmath>  
//using namespace std;
//int main() 
//{
//    double num;
//    cout << "Enter a number: ";
//    cin >> num;
//    double squareRoot = sqrt(num);
//    double absoluteValue = fabs(num);
//    double sinofValue = sin(num);
//    double cosofValue = cos(num);
//    double powerOfThree = pow(num,3);
//    cout << "Square Root: " << squareRoot << endl;
//    cout << "Absolute Value: " << absoluteValue << endl;
//    cout << "Sine: " << sinofValue << endl;
//    cout << "Cosine: " << cosofValue << endl;
//    cout << "Power of 3: " << powerOfThree << endl;
//    return 0;
//}

// program 2

//#include <iostream>
//using namespace std;
//void greetingMessage() 
//{
//    cout << "Hello, Welcome to C++ Functions!";
//}
//int main() 
//{
//    greetingMessage();
//    return 0;
//}

//      program 3

//#include <iostream>
//using namespace std;
//void checkEvenOdd(int num) 
//{
//    if (num%2==0) 
//{
//	cout << num << " is Even" << endl;
//}
//     else
// {
//        cout << num << " is Odd" << endl;
//    }
//}
//int main() 
//{
//    int num;
//    cout << "Enter a number to check even or odd: ";
//    cin >> num;
//    checkEvenOdd(num);
//    return 0;
//}


// program 4

//#include <iostream>
//using namespace std;
//
//int factorial(int num)
// {
//    int fact = 1;
//    for (int i=1;i<=num;i++) 
//{
//        fact *= i;
//    }
//    return fact;
//}
//int main()
// {
//    int num;
//    cout << "Enter a number to calculate factorial: ";
//    cin >> num;
//    cout << "Factorial of " << num << " is " << factorial(num) << endl;
//    return 0;
//}

// program 5


//#include <iostream>
//using namespace std;
//double add(double a, double b) 
//{
//    return a + b;
//}
//double subtract(double a, double b)
// {
//    return a - b;
//}
//double multiply(double a, double b) 
//{
//    return a * b;
//}
//double divide(double a, double b)
// {
//    if (b == 0)
// {
//        cout << "Error! Division by zero is not allowed." << endl;
//        return 0;
//    }
// else
// {
//    return a / b;
//    }
//}
//int main() 
//{
//    int choice;
//    double num1,num2,result;
//    do {
//        cout << "\nCalculator Menu:\n";
//        cout << "1. Addition\n";
//        cout << "2. Subtraction\n";
//        cout << "3. Multiplication\n";
//        cout << "4. Division\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        if (choice == 5)
// {
//            cout << "Exiting the program.\n";
//            break;
//        }
//        cout << "Enter two numbers: ";
//        cin >> num1 >> num2;
//        switch(choice) {
//            case 1: result = add(num1, num2); break;
//            case 2: result = subtract(num1, num2); break;
//            case 3: result = multiply(num1, num2); break;
//            case 4: result = divide(num1, num2); break;
//            default: cout << "Invalid choice! Try again.\n"; continue;
//        }
//        cout << "Result: " << result << endl;
//    } 
//while (true);
//    return 0;
//}

// program 6

//#include <iostream>
//#include <iomanip>
//using namespace std;
//void displayMenu()
// {
//    cout << "\nRestaurant Menu:\n";
//    cout << "1. Fish Platter - $5.00\n";
//    cout << "2. Biryani - $8.50\n";
//    cout << "3. Hamburger - $7.00\n";
//    cout << "4. Cake - $4.50\n";
//    cout << "5. Pasta - $2.00\n";
//    cout << "6. Exit\n";
//}
//double calculateCost(int choice, int quantity)
// {
//    double prices[] = {5.00, 8.50, 7.00, 4.50, 2.00};  
//    return prices[choice-1] * quantity;
//}
//double calculateFinalBill(double total)
// {
//    double tax = total * 0.10; 
//    return total + tax;
//}
//int main()
// {
//    int choice, quantity;
//    double total = 0;
//    do
// {
//        displayMenu();
//        cout << "Select an item (1-6): ";
//        cin >> choice;
//        if (choice == 6)
// {
//            break;
//        }
//        if (choice < 1 || choice > 5) 
//{
//            cout << "Invalid choice! Please select again.\n";
//            continue;
//        }
//        cout << "Enter quantity: ";
//        cin >> quantity;
//        total += calculateCost(choice, quantity);
//        cout << "Item added to your bill.\n";
//    } 
//while(true);
//    double finalAmount = calculateFinalBill(total);
//    cout << fixed << setprecision(2);
//    cout << "Subtotal: $" << total << endl;
//    cout << "Service Charge (10%): $" << total * 0.10 << endl;
//    cout << "Total Amount: $" << finalAmount << endl;
//    return 0;
//}
