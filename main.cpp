#include <iostream>
/*
 *
 *
Lab Requirements



16 Document any error messages for the lab assessment that might occur during your lab. - ??????












31 Close Visual Studio and take the lab assessment.

 */
// 23 Create a simple class in your C++ application called Person. - DONE
class Person
{

// 24 Give Person member variables for name, age, height, and weight.  Feel free to make these private with public accessors or make them public without accessors.  It is not important for this exercise.
public:
    std::string name;
    int age;
    int height;
    double weight;

};
void PassByValue(int number);
void PassByRef(int& number);
void ModifyPerson(Person);

// 1 Create a new C++ console application called PointersLab  - DONE
int main() {

    // 2 In your main() function, create two variables.  One variable needs to an intrinsic integer variable named num1 and the second needs to be a pointer to an int pNum. - DONE
    // 3 Assign the value 3 to num1. - DONE
    int num1 = 3;
    int* pNum = &num1;

    // 4 Assign the value 5 to the memory location stored in pNum.  (Hint, there is a special operator used for this) - DONE
    *pNum = 5;

    // 5 Create a function called PassByValue that accepts an integer argument. - DONE
    // 7 Call PassByValue and pass in num1 as the argument. - DONE
    PassByValue(num1);

    // 9 After the call returns to main(), output the value of num1 to the console window again. - DONE
    std::cout << "num1 = " << num1 << '\n';

    // 10 Create a function called PassByRef that accepts a reference variable as an argument - DONE
    // 11 Call PassByRef and send pNum as the argument. - DONE
    PassByRef(*pNum);

    // 14 After the call returns to main(), output the value of pNum to the console. - DONE
    std::cout << "*pNum = " << *pNum << '\n';

    // 15 Call PassByValue and pass in pNum as an argument. - DONE
    PassByValue(*pNum);

    std::cout << "*pNum = " << *pNum << '\n';

    // 17 Create a pointer variable to a double, and allocate memory for it using the new keyword. - DONE
    double *pDouble = new double;

    // 18 Assign a value to the memory location. - DONE
    *pDouble = 33;

    // 19 Use the dereference operator, get the value and output it to the console. - DONE
    std::cout << "*pDouble = " << *pDouble << '\n';

    // 20 Deallocate the memory for that variable. - DONE
    delete pDouble;

    // 21 Output the value stored in the memory location for that variable again. - DONE
    std::cout << "after deallocation *pDouble = " << *pDouble << '\n';

    // 22 Document any errors experienced for the lab assessment. -  ??????
    // after deallocation *pDouble = 3.18449e-314



    // 26 Instantiate a Person object in your main() method and assign values to the member variables.
    Person p1;

    p1.name = "Adam";
    p1.age = 16;
    p1.height = 145;
    p1.weight = 123.5;

    // 27 Output the values stored in the member variables to the console window

    std::cout << "p1.name = " << p1.name << ", " << "p1.height = " << p1.height << ", " << "p1.weight = " << p1.weight << ", " << "p1.age = " << p1.age << '\n';

    // 28 Call the ModifyPerson() function, passing in your Person object you just created.
    ModifyPerson(p1);

   // 30 Back in main(), output the values stored in the Person object you created.  Did the name change?  It should have if you passed the object correctly to the function.


    return 0;

}
void PassByValue(int number)
{
    // 6 Inside PassByValue, output a text string indicating the name of the function you are in. - DONE
    std::cout << "This is PassByValue function\n";

    // 8 Modify the value of num1 inside the PassByValue function and output the new value to the console window. -DONE
    number = 76;
    std::cout << "number = " << number << '\n';
}
void PassByRef(int& number)
{

    // 12 Output a statement indicating the current function name. - DONE
    std::cout << "This is PassByRef function\n";

    // 13 Modify the value of pNum, setting it to 50,  and output the value to the console. - DONE
    number = 50;
    std::cout << "number = " << number << '\n';

}

// 25 Create a function in your application called ModifyPerson() that accepts a Person object as an argument.  NOTE: This function should be in the application area and not inside the Person class.
void ModifyPerson(Person p1)
{
    // 29 Inside the ModifyPerson() function, change the value in the name member variable.
    p1.name = "George";
    p1.age = 106;
    p1.height = 110;
    p1.weight = 76.3;

    std::cout << "p1.name = " << p1.name << ", " << "p1.height = " << p1.height << ", " << "p1.weight = " << p1.weight << ", " << "p1.age = " << p1.age << '\n';

}
