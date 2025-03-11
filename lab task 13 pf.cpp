
//#include <iostream>
//#include <string>
//using namespace std;
//struct student 
//{
//    string firstName;
//    string lastName;
//    int rollNo;
//    float marks;
//    void displayStudentInfo(student stud)
// {
//        cout << "\nStudent Information:\n";
//        cout << "Student Name: " << firstName << " " << lastName << "\n";
//        cout << "Roll No: " << rollNo << "\n";
//        cout << "Marks: " << marks << "\n";
//    }
//};
//
//int main() 
//{
//    student stud; 
//    stud.firstName = "Tayyab";
//    stud.lastName = "Hanif";
//    stud.rollNo = 11;
//    stud.marks = 25;
//    stud.displayStudentInfo(stud);
//    return 0;
//}



     //                prograsm 2


//#include <iostream>
//#include <string>
//using namespace std;
//
//struct student 
//{
//    string firstName;
//    string LastName;
//    int RollNo;
//    float marks;
//
//    void displaystudentInfo()
// {
//        cout << "Student Name: " << firstName << " " << LastName << endl;
//        cout << "Roll No: " << RollNo << endl;
//        cout << "Marks: " << marks << endl;
//    }
//};
//
//int main() 
//{
//    int Numstudents;
//    cout << "Enter number of students: ";
//    cin >> Numstudents;
//
//    student* stud = new student[Numstudents];  // Dynamic array allocation
//
//    for (int i = 0; i < Numstudents; i++) 
//{
//        cout << "Enter details for student No. " << i + 1 << ":\n";
//        cout << "First Name: ";
//        cin >> stud[i].firstName;
//        cout << "Last Name: ";
//        cin >> stud[i].LastName;
//        cout << "Roll No: ";
//        cin >> stud[i].RollNo;
//        cout << "Marks: ";
//        cin >> stud[i].marks;
//    }
//
//    cout << "\n\nAll Students Information:\n";
//    for (int j = 0; j < Numstudents; j++) {
//        cout << "\nStudent " << j + 1 << " Details:\n";
//        stud[j].displaystudentInfo();
//        cout << "\n----------------------\n";
//    }
//
//    delete[] stud;  
//
//    return 0;
//}


// program 4


//#include <iostream>
//#include <string>
//using namespace std;
//struct student
// {
//    string firstName;
//    string lastName;
//    int rollNumber;
//    float marks;
//    void displayStudentInfo()
// {
//        cout << "Student Name: " << firstName << " " << lastName << endl;
//        cout << "Roll Number: " << rollNumber << endl;
//        cout << "Marks: " << marks << endl;
//    }
//};
//
//int main()
// {
//    student *ptr = new student;
//    cout << "Enter Student Details:\n";
//    cout << "First Name: ";
//    cin >> ptr->firstName;
//    cout << "Last Name: ";
//    cin >> ptr->lastName;
//    cout << "Roll Number: ";
//    cin >> ptr->rollNumber;
//    cout << "Marks: ";
//    cin >> ptr->marks;
//    cout << "\nDisplaying Student Information:\n";
//    ptr->displayStudentInfo();
//    delete ptr;
//    return 0;
//}

