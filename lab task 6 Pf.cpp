//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter an integer number:";
//	cin>>n;
//	if(n>0)
//	{
//		cout<<"Number is positive.";
//	}
//	else if(n<0)
//	{
//		cout<<"Number is negative.";
//	}
//	else
//	cout<<"Number is equal to zero.";
//}

//                         Program 2

//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    float temperature;
//
//    cout << "Enter the temperature in Celcius: ";
//    cin >> temperature;
//
//    if (temperature >= 40.0)
//	 {
//        cout << "It's extremely hot! Stay indoors to protect your health." << endl;
//    }
//	 else if (temperature >= 30.0)
//	  {
//        cout << "It's quite hot! Drink plenty of water to stay hydrated." << endl;
//    }
//	 else if (temperature >= 20.0)
//	  {
//        cout << "The weather is pleasant. Enjoy your outdoor activities!" << endl;
//    }
//	 else
//	  {
//        cout << "It's quite cool. Wear warm clothes to stay comfortable." << endl;
//    }
//
//    return 0;
//}

//                  Program 3
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() 
//{
//    string username;
//    string password;
//
//    
//    const string correctUsername = "admin";
//    const string correctPassword = "12345";
//
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//    
//    if (username == correctUsername)
//	 {
//        if (password == correctPassword) 
//		{
//            cout << "Access Granted." << endl;
//        } 
//		else
//		 {
//            cout << "Wrong Password." << endl;
//        }
//    } 
//	else
//	 {
//        cout << "User Not Found." << endl;
//    }
//
//    return 0;
//}       

//  Program 4

//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    int age;
//    double income;
//
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "Enter your annual income: $";
//    cin >> income;
//
//    if (age >= 18)
//	 {
//        if (income >= 30000)
//		
//		 {
//            cout << "Congratulations! You are eligible for a loan." << endl;
//        }
//		 else
//		  {
//            cout << "You meet the age requirement but are not eligible for a loan because your income is below $30,000." << endl;
//        }
//    }
//	 else
//	  {
//        cout << "You are not eligible for a loan because you are under 18 years of age." << endl;
//    }
//
//    return 0;
//}

//               Program 5
//#include <iostream>
//using namespace std;
//
//struct Student
// {
//    int marks1, marks2, marks3;
//    int totalMarks;
//    float percentage;
//    char grade1, grade2, grade3;
//    string result;
//    string scholarshipType;
//};
//
//char calculateGrade(int marks) 
//{
//    float percentage = (marks / 100.0) * 100;
//    if (percentage >= 90)
//        return 'A';
//    else if (percentage >= 80)
//        return 'B';
//    else if (percentage >= 70)
//        return 'C';
//    else if (percentage >= 60)
//        return 'D';
//    else
//        return 'F';
//}
//
//int main()
// {
//    Student student;
//
//    // Input marks for three subjects
//    cout << "Enter marks for subject 1: ";
//    cin >> student.marks1;
//    cout << "Enter marks for subject 2: ";
//    cin >> student.marks2;
//    cout << "Enter marks for subject 3: ";
//    cin >> student.marks3;
//
//    // Calculate grades for each subject
//    student.grade1 = calculateGrade(student.marks1);
//    student.grade2 = calculateGrade(student.marks2);
//    student.grade3 = calculateGrade(student.marks3);
//
//    // Check for failure condition
//    if (student.grade1 == 'F' || student.grade2 == 'F' || student.grade3 == 'F') 
//	{
//        student.result = "Failed";
//        cout << student.result << endl;
//        return 0;
//    }
//
//    // Calculate total marks and percentage
//    student.totalMarks = student.marks1 + student.marks2 + student.marks3;
//    student.percentage = (student.totalMarks / 300.0) * 100;
//
//    // Determine scholarship eligibility
//    if (student.grade1 == 'A' && student.grade2 == 'A' && student.grade3 == 'A' && student.totalMarks >= 270) 
//	{
//        student.scholarshipType = "Merit Scholarship";
//    } 
//	else if ((student.grade1 == 'A' || student.grade1 == 'B') && 
//               (student.grade2 == 'A' || student.grade2 == 'B') && 
//               (student.grade3 == 'A' || student.grade3 == 'B') && student.totalMarks >= 240)
//			    {
//        student.scholarshipType = "Regular Scholarship";
//    }
//	 else
//	  {
//        student.scholarshipType = "No Scholarship";
//    }
//
//    // Output results
//    cout << "Total Marks: " << student.totalMarks << endl;
//    cout << "Percentage: " << student.percentage << "%" << endl;
//    cout << "Grade in Subject 1: " << student.grade1 << endl;
//    cout << "Grade in Subject 2: " << student.grade2 << endl;
//    cout << "Grade in Subject 3: " << student.grade3 << endl;
//    cout << "Scholarship Eligibility: " << student.scholarshipType << endl;
//
//    return 0;
//}
//                           program 6

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string username, password, role;

    const string ADMIN_USERNAME = "admin";
    const string ADMIN_PASSWORD = "password123";

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == ADMIN_USERNAME && password == ADMIN_PASSWORD)
	 {
        cout << "Authentication Successful" << endl;

        cout << "Enter role (Admin, Guest, or other): ";
        cin >> role;

        if (role == "Admin")
		 {
            cout << "Full Access" << endl;
        } 
		else if (role == "Guest") 
		{
            cout << "Limited Access" << endl;
        } 
		else
		 {
            cout << "No Access" << endl;
        }
    }
	 else 
	 {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
