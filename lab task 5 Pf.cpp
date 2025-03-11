//#include <iostream>
//using namespace std;
//
//int main()
// {
//    int number;
//
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    if (number > 0)
//	 {
//        cout << "The number is positive." << endl;
//    }
//
//    return 0;
//}


//                             PROGRAM 2
//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    int number;
//
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    if (number % 2 == 0)
//	 {
//        cout << "The number is even." << endl;
//    }
//
//    return 0;
//}



//                                PROGRAM 3
//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    int num1, num2, num3;
//
//    cout << "Enter three integers: ";
//    cin >> num1 >> num2 >> num3;
//
//    int largest = num1; // consider  the first number is the largest to start with
//
//    if (num2 > largest)
//	 {
//        largest = num2; 
//    }
//
//    if (num3 > largest) 
//	{
//        largest = num3; 
//    }
//
//    cout << "The largest number is " << largest << "." << endl;
//
//    return 0;
//}


                   //  PROGRAM 
// #include <iostream>
//using namespace std;
//
//int main()
// {
//    int marks;
//
//    cout << "Enter student's marks (out of 100): ";
//    cin >> marks;
//
//    if (marks >= 90) 
//	{
//        cout << "Grade: A+" << endl;
//    }
//    if (marks >= 80 && marks < 90)
//	 {
//        cout << "Grade: A" << endl;
//    }
//    if (marks >= 70 && marks < 80)
//	 {
//        cout << "Grade: B" << endl;
//    }
//    if (marks >= 60 && marks < 70) 
//	{
//        cout << "Grade: C" << endl;
//    }
//    if (marks < 60) 
//	{
//        cout << "Grade: Fail" << endl;
//    } 
//    return 0;
//}




                        //Program 4
// #include <iostream>
//using namespace std;
//
//int main()
// {
//    char signal;
//
//    cout << "Enter the color of the traffic signal (R for Red, G for Green, Y for Yellow): ";
//    cin >> signal;
//
//    if (signal == 'R' || signal == 'r') 
//	{
//        cout << "Red: Stop" << endl;
//    }
//    if (signal == 'G' || signal == 'g')
//	 {
//        cout << "Green: Go" << endl;
//    }
//    if (signal == 'Y' || signal == 'y')
//	 {
//        cout << "Yellow: Slow Down" << endl;
//    }
//
//    return 0;
//}                                       

   //                   program 5


 

                      //    Program 6    
//#include <iostream>
//using namespace std;
//int main() 
//{
//    double accountBalance;
//    double withdrawalAmount;
//
//    cout << "Enter your account balance: ";
//    cin >> accountBalance;
//    cout << "Enter the amount to withdraw: ";
//    cin >> withdrawalAmount;
//
//    if (withdrawalAmount <= accountBalance)
//	 {
//        // Deduct the amount from the balance
//        accountBalance -= withdrawalAmount;
//        cout << "Transaction successful. Remaining balance: " << accountBalance << std::endl;
//    } 
//	else
//	 {
//        std::cout << "Insufficient balance" << std::endl;
//    }
//
//    return 0; 
//}
	           
	           //              Program 7
//#include <iostream>
//using namespace std;
//int main()
// {
//    double salary;
//    int yearsOfExperience;
//    cout << "Enter your salary: ";
//    cin >> salary;
//    cout << "Enter your years of work experience: ";
//    cin >> yearsOfExperience;
//
//    // Determine the eligibility
//    if (salary >= 25000 || (yearsOfExperience > 5 && salary >= 20000))
//	 {
//        cout << "You are eligible for a loan." << std::endl;
//    }
//	 else 
//	 {
//        cout << "You are not eligible for a loan." << std::endl;
//    }
//
//    return 0;
//}	           
//           program
#include <iostream>
#include <string>
using namespace std;

int main() {
    string grade;
    int yearsOfService;
    double basicSalary, bonus = 0.0, grossSalary, tax = 0.0, netSalary;

    // Input employee grade
    cout << "Enter employee grade (A, B, C): ";
    cin >> grade;

    // Determine basic salary based on grade
    if (grade == "A") {
        basicSalary = 50000;
    }
    if (grade == "B") {
        basicSalary = 30000;
    }
    if (grade == "C") {
        basicSalary = 20000;
    }
    if (grade != "A" && grade != "B" && grade != "C") {
        cout << "Invalid grade entered." << endl;
        return 1;
    }

    // Input years of service
    cout << "Enter years of service: ";
    cin >> yearsOfService;

    // Determine bonus based on years of service
    if (yearsOfService >= 10) {
        bonus = basicSalary * 0.10;
    }
    if (yearsOfService >= 5 && yearsOfService < 10) {
        bonus = basicSalary * 0.05;
    }

    // Calculate gross salary
    grossSalary = basicSalary + bonus;

    // Calculate tax based on gross salary
    if (grossSalary > 40000) {
        tax = grossSalary * 0.20;
    }
    if (grossSalary >= 30000 && grossSalary <= 40000) {
        tax = grossSalary * 0.10;
    }

    // Calculate net salary
    netSalary = grossSalary - tax;

    // Output
    cout << "Basic Salary: $" << basicSalary << endl;
    cout << "Bonus: $" << bonus << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Tax Deducted: $" << tax << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}

