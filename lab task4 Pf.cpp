//#include <iostream>
//using namespace std;
//int main()
// {
//    int number;
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    // Using ternary operator to check if the number is even or odd
//    string result = (number % 2 == 0) ? "even" : "odd";
//    cout << "The number " << number << " is " << result << "." << endl;
//
//    return 0;
//}



//                          program 2
//#include <iostream>
//using namespace std;
//
//int main()
// {
//    int age;
//    cout << "Enter the age: ";
//    cin >> age;
//
//    // Using ternary operator to classify the age
//    string category = (age < 13) ? "child" : (age <= 19) ? "teenager" : "adult";
//
//    // Formatted output
//    cout << "Age " << age << " falls under the category " << category << "." << endl;
//
//    return 0;
//}



//                       Program 3


#include <iostream>
using namespace std;

int main() 
{
    double balance;
    bool isLoyal;

    //  input 
    cout << "Enter the account balance: ";
    cin >> balance;
    cout << "Is the customer loyal? (1 for Yes, 0 for No): ";
    cin >> isLoyal;
    string accountType = (balance < 100) ? "Low Balance Account" :
                         (balance <= 500) ? "Standard Account" :
                         "Premium Account";
    string specialOffer = (balance > 200 && isLoyal) ? "Eligible for special offers" : "Not eligible for special offers";

    //  output
    cout << "Account balance: $" << balance << endl;
    cout << "Account type: " << accountType << endl;
    cout << "Special offer: " << specialOffer << endl;

    return 0;
}
