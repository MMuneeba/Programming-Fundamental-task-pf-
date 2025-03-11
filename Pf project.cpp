#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

// Structure to store the menu item details
struct MenuItem
{
    string name;
    float price;
};

// Function to display the menu categories
void displayMenu(const vector<MenuItem>& menu, const string& category)
{
    cout << "\n------ " << category << " Menu ------\n";
    cout << "ID\tItem\t\t\t\tPrice\n";
    cout << "--------------------------------------\n";
    for (size_t i = 0; i < menu.size(); i++) {
        cout << i + 1 << ". " << menu[i].name << "\t\t" << fixed << setprecision(2) << menu[i].price << endl;
    }
    cout << "--------------------------------------\n";
}

// Function to select menu item and quantity
bool selectItemAndQuantity(int& selectedItem, int& quantity, int menuSize)
{
    cout << "\nEnter item number to order (0 to finish): ";
    cin >> selectedItem;
    if (selectedItem == 0)
    {
        return false; // Exit ordering
    }
    if (selectedItem < 1 || selectedItem > menuSize)
    {
        cout << "Invalid item number. Please try again.\n";
        return true; // Continue ordering
    }
    cout << "Enter quantity: ";
    cin >> quantity;
    if (quantity <= 0)
    {
        cout << "Invalid quantity. Please try again.\n";
        return true; // Continue ordering
    }
    return true; // Continue ordering
}

// Function to calculate the total amount
float calculateTotal(const vector<int>& order, const vector<int>& quantity, const vector<MenuItem>& menu)
{
    float total = 0;
    for (size_t i = 0; i < order.size(); i++)
    {
        total += menu[order[i] - 1].price * quantity[i];
    }
    return total;
}

// Function to apply discounts
float applyDiscount(float total)
{
    if (total > 100)
    {
        cout << "\nCongratulations! You've earned a 10% discount!\n";
        total *= 0.90; // Apply 10% discount
    }
    return total;
}

// Function to display the final bill
void displayBill(const vector<int>& order, const vector<int>& quantity, const vector<MenuItem>& menu, float total)
{
    cout << "\n------ Final Bill ------\n";
    cout << "Item\t\t\tQuantity\tPrice\t\tTotal\n";
    cout << "-----------------------------------------------\n";
    for (size_t i = 0; i < order.size(); i++)
    {
        cout << menu[order[i] - 1].name << "\t\t" << quantity[i] << "\t\t"
             << fixed << setprecision(2) << menu[order[i] - 1].price << "\t\t"
             << fixed << setprecision(2) << menu[order[i] - 1].price * quantity[i] << endl;
    }
    cout << "-----------------------------------------------\n";
    cout << "Total Before Discount: " << fixed << setprecision(2) << total << endl;

    // Apply discount
    total = applyDiscount(total);
    cout << "Total After Discount: " << fixed << setprecision(2) << total << endl;

    // Tax calculation (e.g., 5% tax)
    float tax = total * 0.05;
    cout << "Tax (5%): " << fixed << setprecision(2) << tax << endl;

    // Final amount after tax
    float finalAmount = total + tax;
    cout << "Final Amount to Pay: " << fixed << setprecision(2) << finalAmount << endl;
    cout << "-------------------------------\n";
}

int main()
{
    // Pakistani, Chinese, and Italian Menu Items
    vector<MenuItem> pakistaniMenu =
    {
        {"Biryani", 7.99},
        {"Nihari", 8.49},
        {"Chapli Kebab", 6.99},
        {"Seekh Kebab", 5.99},
        {"Chicken Karahi", 9.99},
        {"Aloo Gosht", 7.49},
        {"Saag", 6.49},
        {"Peshawari Naan", 2.49},
        {"Samosas", 3.99},
        {"Gulab Jamun", 2.99}
    };

    vector<MenuItem> chineseMenu =
    {
        {"Sweet and Sour Chicken", 10.99},
        {"Kung Pao Chicken", 9.49},
        {"Chow Mein", 8.99},
        {"Spring Rolls", 3.49},
        {"Dumplings", 6.49},
        {"Fried Rice", 5.99},
        {"Kung Pao Shrimp", 12.99},
        {"Hot and Sour Soup", 4.99},
        {"Beef with Broccoli", 9.99},
        {"General Tso's Chicken", 11.99}
    };

    vector<MenuItem> italianMenu =
    {
        {"Pizza Margherita", 8.99},
        {"Spaghetti Carbonara", 10.49},
        {"Lasagna", 11.99},
        {"Fettuccine Alfredo", 9.49},
        {"Minestrone Soup", 4.99},
        {"Caprese Salad", 6.49},
        {"Eggplant Parmesan", 9.99},
        {"Marinara Pasta", 8.49},
        {"Tiramisu", 5.99},
        {"Cannoli", 4.49}
    };

    // Variables
    vector<int> order; // Store item numbers
    vector<int> quantity; // Store quantities
    float totalAmount = 0;
    int choice, cuisineChoice;

    do
    {
        // Ask for cuisine selection
        cout << "\nSelect Cuisine:\n";
        cout << "1. Pakistani\n2. Chinese\n3. Italian\nEnter choice: ";
        cin >> cuisineChoice;

        switch (cuisineChoice)
        {
        case 1:
            displayMenu(pakistaniMenu, "Pakistani");
            break;
        case 2:
            displayMenu(chineseMenu, "Chinese");
            break;
        case 3:
            displayMenu(italianMenu, "Italian");
            break;
        default:
            cout << "Invalid choice, please try again.\n";
            continue;
        }

        int selectedItem, quantityInput;
        bool continueOrdering = true;

        while (continueOrdering)
        {
            // Select item and quantity
            continueOrdering = selectItemAndQuantity(selectedItem, quantityInput,
                                                      (cuisineChoice == 1) ? pakistaniMenu.size() :
                                                      (cuisineChoice == 2) ? chineseMenu.size() :
                                                      italianMenu.size());
            if (continueOrdering)
            {
                order.push_back(selectedItem); // Save the order
                quantity.push_back(quantityInput); // Save the quantity
            }
        }

        cout << "\nDo you want to order from another cuisine? (1 = Yes, 0 = No): ";
        cin >> choice;
    } while (choice == 1);

    // Calculate the total
    if (cuisineChoice == 1)
    {
        totalAmount = calculateTotal(order, quantity, pakistaniMenu);
    }
    else if (cuisineChoice == 2)
    {
        totalAmount = calculateTotal(order, quantity, chineseMenu);
    }
    else
    {
        totalAmount = calculateTotal(order, quantity, italianMenu);
    }

    // Display the final bill
    if (cuisineChoice == 1)
    {
        displayBill(order, quantity, pakistaniMenu, totalAmount);
    }
    else if (cuisineChoice == 2)
    {
        displayBill(order, quantity, chineseMenu, totalAmount);
    }
    else
    {
        displayBill(order, quantity, italianMenu, totalAmount);
    }

    return 0;
}