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

// Functions Decleration
// Return_type function_name(List_of_parameters){
// Body of fuction
// }

// int factorial(int num)
// {
//     int r = 1;
//     for (int i = num; i > 0; i--)
//     {
//         r = r * i;
//     }
//     return r;
// }

// void greating()
// {
//     cout << "Hello Karim" << endl;
// }

void swap(int a, int b)
{
    cout << "Before in Swap: " << a << " -- " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After in Swap: " << a << " -- " << b << endl;
}

// Main Funtion
// It works as the entry point of the program. It is where the execution of the program begins.

int main()
{
    // greating();
    // cout << "Factorial 6 = " << factorial(6) << endl;
    // cout << "Factorial 5 = " << factorial(5) << endl;
    // cout << "Factorial 8 = " << factorial(8) << endl;

    int a = 200;
    // int b = 5, c = 6, d, e;
    // int *ptr = &a;

    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << a << endl;

    cout << a++ << endl;
    cout << ++a << endl;

    // int b = 7;

    // cout << "Before: " << a << " -- " << b << endl;
    // swap(a, b);
    // cout << "After: " << a << " -- " << b << endl;

    // This is the code that the computer will execute when the program runs.

    // cout << "Hello, World!" << endl;

    // What is cout?
    // cout : It is used to output data to the console.

    // What is endl?
    // endl is a manipulator in C++ that inserts a newline character and flushes the output buffer. It is used to move the cursor to the next line after printing a message.

    // int age;
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

    // cin >> age;
    // // What is cin?
    // // cin is used to take input from the user through the console.
    // cout << "You are " << age << " years old." << endl;

    // Variables and assignment:
    // Syntax of variable declaration and assignment in C++:
    // 1- data_type variable_name = value;
    // 2- data_type variable_name; (declaration without initialization)
    // 3- variable_name = value; (assignment after declaration)

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

    // Variables and Constants:
    // A constant is a value that cannot be changed after it has been assigned. In C++, you can declare a constant using the const keyword. For example, const double PI = 3.14159; declares a constant named PI with the value of 3.14159.

    // Variables casting:
    // Casting is the process of converting a value from one data type to another. In C++, you can perform casting using either C-style casts or C++-style casts. For example, int x = 5; double y = (double)x; will convert the integer value of x to a double and assign it to y.

    // Example of type casting in C++:
    // int a = 5;
    // double b = (double)a; // C++-style cast to convert int to double

    // Shortcuts Notation:
    // 1- a += 5; is equivalent to a = a + 5;
    // 2- a -= 3; is equivalent to a = a - 3
    // 3- a *= 2; is equivalent to a = a * 2;
    // 4- a /= 4; is equivalent to a = a / 4;
    // 5- a %= 3; is equivalent to a = a % 3;

    // Arithmetic Operators:
    // 1- + (Addition): Used to add two operands. For example, 5 + 3 will yield 8.
    // 2- - (Subtraction): Used to subtract the second operand from the first. For example, 5 - 3 will yield 2.
    // 3- * (Multiplication): Used to multiply two operands. For example, 5 * 3 will yield 15.
    // 4- / (Division): Used to divide the first operand by the second. For example, 5 / 2 will yield 2 (integer division) or 2.5 (floating-point division).
    // 5- % (Modulus): Used to find the remainder of the division of the first operand by the second. For example, 5 % 2 will yield 1.

    // Orders of Operations:
    // In C++, the order of operations (also known as operator precedence) determines the sequence in which operators are evaluated in an expression. The order of operations is as follows:
    // 1- Parentheses: Expressions inside parentheses are evaluated first. ()
    // 2- Unary Operators: These include the increment (++) and decrement (--) operators, as well as the unary plus (+) and minus (-) operators. They are evaluated after parentheses. For example, ++a or -b.
    // 3- Multiplication, Division, and Modulus: These operators are evaluated next, from left to right. For example, a * b / c % d. A/b*c%d
    // 4- Addition and Subtraction: These operators are evaluated last, from left to right. For example, a + b - c.

    // increment and decrement operators:
    // 1- Increment Operator (++) : It increases the value of a variable by 1. For example, if a = 5, then a++ will change the value of a to 6.
    // 2- Decrement Operator (--) : It decreases the value of a variable by 1. For example, if a = 5, then a-- will change the value of a to 4.

    // Note on Increment and Decrement Operators:
    // We have 2 types of increment and decrement operators:
    // 1- Post-increment (a++): Use, then do the Operation
    // 2- Pre-increment (++a): Do the Operation, then use

    // int a = 5;           // Declare an integer variable 'a' and initialize it with the value 5
    // cout << ++a << endl; // Output the value of 'a' and then increment it (pre-increment) 6
    // cout << a << endl;   // Output the new value of 'a' after the pre-increment 6
    // cout << a++ << endl; // Output the value of 'a' and then increment it (post-increment) 6
    // cout << a << endl;   // Output the new value of 'a' after the post-increment 7

    // 3- Post-decrement (a--): Use, then do the Operation
    // 4- Pre-decrement (--a): Do the Operation, then use

    // int a = 5;           // Declare an integer variable 'a' and initialize it with the value 5
    // cout << --a << endl; // Output the value of 'a' and then decrement it (pre-decrement) 4
    // cout << a << endl;   // Output the new value of 'a' after the pre-decrement 4
    // cout << a-- << endl; // Output the value of 'a' and then decrement it (post-decrement) 4
    // cout << a << endl;   // Output the new value of 'a' after the

    // Constants declaration:
    // Have 2 ways to declare a constant in C++:
    // 1- Using const keyword:
    // const double PI = 3.14159; // Declare a constant named PI with
    // Syntax : const data_type constant_name = value;
    // 2- Using #define preprocessor directive:
    // #define PI 3.14159 // Define a constant named PI with the value of 3.14159
    // Syntax : #define CONSTANT_NAME value

    // Note on Constants:
    // 1- Constants are used to store values that should not change throughout the program.
    // 2- Constants must be initialized at the time of declaration.
    // 3- Constants can be of any data type (int, float, double, char, etc.).

    // Control Structures in C++:
    // 1- Conditional Statements: These include if, else if, and else statements that allow you to execute different blocks of code based on certain conditions.

    // 1.1 if Statement in C++:
    // The if statement is used to execute a block of code only if a specified condition is true. If the condition is false, the code block will be skipped.

    // Syntax of an if statement in C++:
    // if (condition) {
    //     // code to be executed if the condition is true
    // }

    // 1.2 if-else Statement in C++:
    // The if-else statement allows you to execute one block of code if a condition is true and another block of code if the condition is false.

    // Syntax of an if-else statement in C++:
    // if (condition) {
    //     // code to be executed if the condition is true
    // }
    // else {
    //     // code to be executed if the condition is false
    // }

    // 1.3 else if Statement in C++:
    // The else if statement is used to specify a new condition to test if the previous conditions were false. It allows you to check multiple conditions in a sequence.

    // Syntax of an else if statement in C++:
    // if (condition1) {
    //     // code to be executed if condition1 is true
    // }
    // else if (condition2) {
    //     // code to be executed if condition2 is true
    // }
    //.
    //.
    //.
    // else {
    //     // code to be executed if all previous conditions are false
    // }

    // int grade;
    // cout << "Enter your grade: ";
    // cin >> grade;

    // if (grade >= 60)
    // {
    //     cout << "You passed!" << endl;      // Output if the grade is 60 or above
    //     cout << "Grade: " << grade << endl; // Output the grade entered by the user
    // }
    // else
    // {
    //     cout << "You failed!" << endl;      // Output if the grade is below 60
    //     cout << "Grade: " << grade << endl; // Output the grade entered by the user
    // }

    // if (grade >= 90)
    // {
    //     cout << "Grade: A" << endl; // Output if marks are 90 or above
    // }
    // else if (grade >= 80)
    // {
    //     cout << "Grade: B" << endl; // Output if marks are between 80 and 89
    // }
    // else if (grade >= 70)
    // {
    //     cout << "Grade: C" << endl; // Output if marks are between 70 and 79
    // }
    // else if (grade >= 60)
    // {
    //     cout << "Grade: D" << endl; // Output if marks are between 60 and 69
    // }
    // else
    // {
    //     cout << "Grade: F" << endl; // Output if marks are below 60
    // }

    // Nested if-else statements in C++:

    // Syntax of nested if-else statements in C++:
    // if (condition1) {
    //     // code to be executed if condition1 is true
    //     if (condition2) {
    //         // code to be executed if condition2 is true
    //     }
    //     else {
    //         // code to be executed if condition2 is false
    //     }
    // }
    // else {
    //     // code to be executed if condition1 is false
    //     if (condition3) {
    //         // code to be executed if condition3 is true
    //     }
    //     else {
    //         // code to be executed if condition3 is false
    //     }
    // }

    // How to Create a Condition
    // 1- Comparison Operators: These operators are used to compare two values and return a boolean result (true or false). The comparison operators include:
    // 1- == (Equal to): Returns true if the operands are equal. For example, (5 == 5) will return true.
    // 2- != (Not equal to): Returns true if the operands are not equal. For example, (5 != 3) will return true.
    // 3- > (Greater than): Returns true if the left operand is greater than the right operand. For example, (5 > 3) will return true.
    // 4- < (Less than): Returns true if the left operand is less than the right operand. For example, (3 < 5) will return true.
    // 5- >= (Greater than or equal to): Returns true if the left operand is greater than or equal to the right operand. For example, (5 >= 5) will return true.
    // 6- <= (Less than or equal to): Returns true if the left operand is less than or equal to the right operand. For example, (3 <= 5) will return true.

    // Switch statement in C++:
    // The switch statement is a control structure that allows you to execute different blocks of code based on the value of a single expression. It is often used as an alternative to multiple if-else statements when you have a variable that can take on a limited set of values.

    // Syntax of a switch statement in C++:
    // switch (expression or variable) {
    //     case constant1:
    //         // code to be executed if the expression matches constant1
    //         break;
    //     case constant2:
    //         // code to be executed if the expression matches constant2
    //         break;
    //     default:
    //         // code to be executed if the expression doesn't match any case
    // }

    // // Example of a switch statement in C++:
    // int day;
    // cout << "Enter a number (1-7) to represent a day of the week: ";
    // cin >> day; // Take input from the user

    // switch (day)
    // {
    // case 1:
    //     cout << "Sunday" << endl; // Output if day is 1
    //     break;
    // case 2:
    //     cout << "Monday" << endl; // Output if day is 2
    //     break;
    // case 3:
    //     cout << "Tuesday" << endl; // Output if day is 3
    //     break;
    // case 4:
    //     cout << "Wednesday" << endl; // Output if day is 4
    //     break;
    // case 5:
    //     cout << "Thursday" << endl; // Output if day is 5
    //     break;
    // case 6:
    //     cout << "Friday" << endl; // Output if day is 6
    //     break;
    // case 7:
    //     cout << "Saturday" << endl; // Output if day is 7
    //     break;
    // default:
    //     cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    // }

    // Loops in C++:
    // Loops are used to execute a block of code repeatedly as long as a specified condition is true. C++ provides several types of loops, including for loops, while loops, and do-while loops.

    // 1- for Loop in C++:
    // A for loop is used when the number of iterations is known beforehand. It consists of
    // three parts: initialization, condition, and increment/decrement.

    // 2- while Loop in C++:
    // A while loop is used when the number of iterations is not known beforehand. It continues to execute a block of code as long as a specified condition is true.

    // 3- do-while Loop in C++:
    // A do-while loop is similar to a while loop, but it guarantees that the block of code will be executed at least once, even if the condition is false. The condition is evaluated after the block of code is executed.

    // While Loop in C++:
    // Syntax of a while loop in C++:
    // while (condition) {
    //     // code to be executed as long as the condition is true
    // }

    // Example of a while loop in C++:
    // int input;
    // cout << "Enter a positive number (or a negative number to exit): ";
    // cin >> input; // Take input from the user

    // while (input >= 0)
    // {
    //     cout << "You entered: " << input << endl;
    //     cout << "Enter another positive number (or a negative number to exit): ";
    //     cin >> input; // Take input from the user
    // }

    // For Loop in C++:
    // Syntax of a for loop in C++:
    // for (initialization; condition; increment/decrement) {
    //     // code to be executed for each iteration
    // }

    // Example of a for loop in C++:
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Iteration: " << i << endl; // Output the current iteration number
    // }

    // Do-While Loop in C++:
    // Syntax of a do-while loop in C++:
    // do {
    //     // code to be executed at least once and then repeatedly as long as the condition
    // } while (condition);

    // int input;
    // do
    // {
    //     cout << "Enter a positive number (or a negative number to exit): ";
    //     cin >> input; // Take input from the user
    //     cout << "You entered: " << input << endl;

    // } while (input >= 0);
    // for (int lineNum = 1; lineNum <= 5; lineNum++)
    // {
    //     for (int col = 1; col <= lineNum; col++)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << "New Line" << endl;
    //     for (int j = 0; j <= 6; j++)
    //     {
    //         cout << "New Col\t";
    //     }
    //     cout << endl;
    // }

    // Array:
    // Collection of data from the same type

    // Syntax of Array:
    // 1- data_type Array_name [size_of_array];
    // 2- data_type Array_nane[] = {item1,item2,item3,........,itemN}

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    return 0;
}
