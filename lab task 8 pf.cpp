//#include<iostream>
//using namespace std;
//int main()
// {
//	int a; int b=0; int c;
//	cout << "Enter a number: ";
//	cin >> a;
//	while(b<10) 
//{
//		b++;
//		c=a*b;
//		cout << "\n" << a << " * " << b << " = " << c;
//	}
// return 0;
//}

//                 Program 2

//#include<iostream>
//using namespace std;
//int main()
 //{
//	int a=1,sum=0;
//	while(a<=5)
// {
//		sum=sum+a;
//		a++;
//	} 
//	cout << sum;
//	return 0;
//}

//                  Program 3



//#include<iostream>
//using namespace std;
//int main()
// {
//	int num;
//	cout << "Enter the number: "; cin >> num;
//	while (num<0)
// {
//		cout << "You entered a negative number. \nRe enter: " << endl; cin >> num;
//	}
//	cout << "The number is positive." << endl;
//	return 0;
//}

          //       Program 4

//#include<iostream>
//using namespace std;
//int main()
// {
//	int N,n=1;
//	cout << "Enter a number: ";
//	cin >> N;
//	while(n<=N) 
//{
//		cout << n << endl;
//		n++;
//	}
//	return 0;
//}

      //         Program 5

//#include<iostream>
//using namespace std;
//int main() 
//{
//	int balance=1000; char choice;
//	int dep_money; int withdrawcash; int currentbalance;
//	cout << "\nMenu of the Banking System\n";
//	cout << "--------------";
//	while(choice!='4') 
//	{
//		
//		cout << "\n\nChoice 1 is to deposit money. 2 is to withdraw. 3 is to check balance.";
//		cout << "\n\nEnter choice 4 if you want to exit the menu.";
//		cout << "\n\nEnter Choice: ";
//		cin >> choice;
//		switch (choice)
//		 {
//			case '1':
//				cout << "\nYou chose depositing money option.";
//				cout << "\nEnter the amount you want to deposit: ";
//				cin >> dep_money;
//				if(dep_money>0) 
//				{
//					balance=balance+dep_money;
//					cout << "Your deposited money is " << dep_money << "$ and now your current account balance is: " << balance << "$";
//				} else
//				 {
//					cout << "\nWrong input entered.";
//				} break;
//			 case '2':
//			cout << "\nYou chose withdraw money option.";
//			cout << "\nEnter the amount you want to withdraw: ";
//			cin >> withdrawcash;
//			if(withdrawcash<=0) 
//			{
//				cout << "\nWrong amount entered.";
//			}
//			 else if(withdrawcash>balance)
//			 {
//			    cout << "\nInsufficient balance";
//			}
//			 else
//			  {
//				balance=balance-withdrawcash;
//				cout << "\nYour withdraw amount is " << withdrawcash << "$ and now your current account balance is: " << balance << "$";
//			} 
//			break;
//	     case '3':
//	        cout << "\nYou want to check your balance.";
//	        cout << "\nYour current account balance is: " << balance << "$."; 
//	        break;
//	        case '4':
//	        	cout << "\nMenu closed.";
//	        	break;
//	        default:
//	        	cout << "\nYou entered wrong choice.\n";
//	        	break; 
//				}
//	        
//} cout << "\nThank you for using the menu";   return 0;
//}

//              Program 4


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
// {
//    string correctPassword = "12345"; 
//    string enteredPassword;          
//    cout << "Please enter the correct password:" << endl;
//
//    do 
//{
//        cout << "Enter password: ";
//        cin >> enteredPassword;
//
//        if (enteredPassword!=correctPassword)
// {
//            cout << "Incorrect password. Please try again." << endl;
//        }
//    }
// while (enteredPassword!=correctPassword);
//
//    cout << "Password is correct. Access granted!";
//
//    return 0;
//}

//                   Program 5

//#include<iostream>
//#include<iomanip> 
//#include<windows.h> 
//using namespace std;
//void setColor(int color)
// {
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
//}
//void displayMenu()
// {
//    setColor(10); 
//    cout << "================ MENU ================\n";
//    cout << "1. Breakfast\n";
//    cout << "2. Lunch\n";
//    cout << "3. Dinner\n";
//    cout << "4. Exit\n";
//    cout << "=====================================\n";
//    setColor(7); 
//}
//void displaySubMenu(int choice)
// {
//    setColor(10);
//    switch (choice)
//	 {
//        case 1:
//            cout << "Breakfast Menu:\n";
//            cout << "1. Anda Paratha (Rs. 40)\n";
//            cout << "2. Nan Channy (Rs. 60)\n";
//            cout << "3. Siri Paye (Rs. 150)\n";
//            cout << "4. Tea (Rs. 15)\n";
//            break;
//        case 2:
//            cout << "Lunch Menu:\n";
//            cout << "1. Chicken Karahi (Rs. 1050/KG)\n";
//            cout << "2. Mutton Karahi (Rs. 1800/KG)\n";
//            cout << "3. Egg Fried Rice (Rs. 450/plate)\n";
//            cout << "4. BBQ (Rs. 1050/dozen)\n";
//            break;
//        case 3:
//            cout << "Dinner Menu:\n";
//            cout << "1. Chicken Karahi (Rs. 1050/KG)\n";
//            cout << "2. Mutton Karahi (Rs. 1800/KG)\n";
//            cout << "3. Egg Fried Rice (Rs. 450/plate)\n";
//            cout << "4. BBQ (Rs. 1050/dozen)\n";
//            cout << "5. Saji (Rs. 800/KG)\n";
//            break;
//    }
//    cout << "=====================================\n";
//    setColor(7); 
//}
//
//double calculateBill(int item, int quantity, int mainChoice)
// {
//    double price = 0;
//
//    switch (mainChoice) 
//	{
//        case 1: 
//            if (item==1) price = 40 * quantity;
//            else if (item==2) price = 60 * quantity;
//            else if (item==3) price = 150 * quantity;
//            else if (item==4) price = 15 * quantity;
//            break;
//        case 2: 
//        case 3: 
//            if (item == 1) price = 1050 * quantity;
//            else if (item == 2) price = 1800 * quantity;
//            else if (item == 3) price = 450 * quantity;
//            else if (item == 4) price = 1050 * quantity;
//            else if (item == 5 && mainChoice == 3) price = 800 * quantity;
//            break;
//    }
//
//    return price;
//}
//
//
//int main()
// {
// 
//    int mainChoice, subChoice, quantity;
//    double totalBill = 0;
//    char continueOrdering;
//
//    do
//	 {
//        system("cls");
//        displayMenu();
//        cout << "Select a Main Menu Option: ";
//        cin >> mainChoice;
//
//        if (mainChoice==4) 
//		break; 
//
//        if (mainChoice < 1 || mainChoice > 4)
//		 {
//            setColor(4); 
//            cout << "Invalid choice! Please try again.\n";
//            setColor(7); 
//            system("pause");
//            continue;
//        }
//
//        displaySubMenu(mainChoice);
//        cout << "Select an item: ";
//        cin >> subChoice;
//
//        // Validate submenu choice
//        if ((mainChoice == 1 && (subChoice < 1 || subChoice > 4)) ||
//            ((mainChoice == 2 || mainChoice == 3) && (subChoice < 1 || subChoice > 5))) {
//            setColor(4); 
//            cout << "Invalid item! Please try again.\n";
//            setColor(7); 
//            system("pause");
//            continue;
//        }
//
//        cout << "Enter quantity: ";
//        cin >> quantity;
//
//        if (quantity <= 0)
//		 {
//            setColor(4); // Red color for errors
//            cout << "Quantity must be greater than zero!\n";
//            setColor(7); // Default color
//            system("pause");
//            continue;
//        }
//
//        double bill = calculateBill(subChoice, quantity, mainChoice);
//        totalBill += bill;
//
//        setColor(10); 
//        cout << "Item added to your order! Current total: Rs. " << totalBill << "\n";
//        setColor(7); 
//        cout << "Do you want to order more? (y/n): ";
//        cin >> continueOrdering;
//    }
//	 while (continueOrdering == 'y' || continueOrdering == 'Y');
//    system("cls");
//    setColor(14); 
//    cout << "================ FINAL BILL ================\n";
//    cout << "Total Amount: Rs. " << fixed << setprecision(2) << totalBill << "\n";
//    cout << "Thank you for dining with us!\n";
//    cout << "===========================================\n";
//    setColor(7); 
//    return 0;
//}
//
