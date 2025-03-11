//#include<iostream>
//using namespace std;
//int main() 
//{
//    int num = 10;       
//    int *ptr = &num;    
//    cout << "Value of num: " << *ptr << endl;
//    return 0;
//}

// program 2

//#include<iostream>
//using namespace std;
//int main() 
//{
//    int num = 20;
//    int *ptr = &num;
//    cout << "Original value: " << num << endl;
//    *ptr = 50;  
//    cout << "Modified value: " << num << endl;
//    return 0;
//}

// program 3

//#include<iostream>
//using namespace std;
//int main()
// {
//    int arr[]={1,3,5,7,9};
//    int *ptr = arr;  
//    cout << "Array elements: ";
//    for (int i = 0; i < 5; i++) 
//{
//        cout << *(ptr+i) << " ";  
//    }
//    cout << endl;
//    return 0;
//}

// program 4

//#include<iostream>
//using namespace std;
//void swap(int *a, int *b)
// {
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//int main() 
//{
//    int x = 10, y = 20;
//    cout << "Before swapping: x = " << x << ", y = " << y << endl;
//    swap(&x, &y);
//    cout << "After swapping: x = " << x << ", y = " << y << endl;    
//    return 0;
//}

// program 5

//#include <iostream>
//using namespace std;
//
//int main()
// {
//    int *ptr = NULL; 
//    if (ptr==NULL)
// {
//        cout << "Pointer is null, does not point to valid memory." << endl;
//    }
// else
// {
//        cout << "Pointer address: " << ptr << endl;
//    }
//    return 0;
//}

// program 6


//#include <iostream>
//using namespace std;
//int main() {
//    int num=70;
//    void *ptr = &num;  
//    cout << "Value of num using void pointer: " << *(static_cast<int*>(ptr)) << endl;
//    return 0;
//}
