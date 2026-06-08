#include <iostream>
// What is Iostream?
// Iostream is a header file in C++ that provides input and output stream functionality.
using namespace std;
// What is namespace std?
// The namespace std is a standard namespace in C++ that contains all the standard library functions and objects, such as cout, cin, and endl. By using "using namespace std;", we can avoid having to prefix these functions and objects with "std::" every time we use them.

// What is Mean by Syntax?
// Syntax refers to the set of rules and guidelines that is Given for each programming language. Such as how grammer work in a human language.

// How old are you? -> How you are old? grammar is wrong, syntax is wrong.
// cout >> "Hello, World!"  wrong syntax, it should be cout << "Hello, World!" correct syntax.

// Main Funtion
// It works as the entry point of the program. It is where the execution of the program begins.

int main()
{
    // This is the code that the computer will execute when the program runs.

    cout << "Hello, World!" << endl;

    // What is cout?
    // cout : It is used to output data to the console.

    // What is endl?
    // endl is a manipulator in C++ that inserts a newline character and flushes the output buffer. It is used to move the cursor to the next line after printing a message.

    int age;
    // Variable:
    // A variable is like a box or Container that can hold a value. It has a name and a type.

    // Data Type:
    // 1- int: It is used to store whole numbers (integers) without decimal points. For example, 5, -3, 0.
    // 2- float: It is used to store numbers with decimal points (floating-point numbers). For example, 3.14, -0.5, 2.0.
    // 3- double: It is similar to float but has a larger range and precision. It is used to store numbers with decimal points that require more precision. For example, 3.141592653589793, -0.0000001.
    // 4- char: It is used to store a single character. For example, 'A', 'b', '1'.
    // 5- string: It is used to store a sequence of characters (a string of text). For example, "Hello", "World", "C++".
    // 6- bool: It is used to store a value that can be either true or false. For example, true, false.
    // 7- void: It is used to indicate that a function does not return a value.

    cin >> age;
    // What is cin?
    // cin is used to take input from the user through the console.
    cout << "You are " << age << " years old." << endl;

    // Note on Variables:
    // 1- Variable used to store one data value at a time.
    // 2- Variable must be declared before use.
    // 3- Variable name must start with a letter or an underscore and can be followed by letters, digits, or underscores.
    // 4- Variable names are case-sensitive (age and Age are different variables).
    // 5- Variable can be assigned a value using the assignment operator (=).

    // Assignment Operator:
    // The assignment operator (=) is used to assign a value to a variable. For example, age = 25; assigns the value 25 to the variable age.
    // 25 = age; is incorrect because the left side of the assignment operator must be a variable, not a value.

    // Operators:
    // 1- Arithmetic Operators: +, -, *, /, % (modulus)
    // Note on division operator (/):
    // When both operands are integers, the division operator performs integer division, which means it will return the quotient without the remainder. For example, 5 / 2 will return 2, not 2.5.
    return 0;
}
