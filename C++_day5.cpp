// Program to Create Pyramid and Pattern:



#include <iostream>
using namespace std;

void printPyramid(int rows) {
    for(int i = 1; i <= rows; ++i) {
        for(int space = 1; space <= rows - i; ++space)
            cout << " ";
        for(int j = 1; j <= 2 * i - 1; ++j)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows for pyramid: ";
    cin >> rows;
    printPyramid(rows);
    return 0;
}


// Simple Calculator using switch...case:

  
  
  #include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}


// Display Prime Numbers Between Two Intervals Using Functions:



#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; ++i) {
        if(num % i == 0) return false;
    }
    return true;
}

void displayPrimes(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for(int i = start; i <= end; ++i) {
        if(isPrime(i)) cout << i << " ";
    }
}

int main() {
    int start, end;
    cout << "Enter starting and ending intervals: ";
    cin >> start >> end;
    displayPrimes(start, end);
    return 0;
}


// Check Prime Number By Creating a Function:



#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; ++i) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num))
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";
    return 0;
}


// Check Whether a Number can be Express as Sum of Two Prime Numbers:



#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; ++i) {
        if(num % i == 0) return false;
    }
    return true;
}

bool checkSumOfPrimes(int num) {
    for(int i = 2; i <= num/2; ++i) {
        if(isPrime(i) && isPrime(num - i))
            return true;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(checkSumOfPrimes(num))
        cout << num << " can be expressed as the sum of two prime numbers.";
    else
        cout << num << " cannot be expressed as the sum of two prime numbers.";
    return 0;
}


// Find Sum of Natural Numbers using Recursion:



#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if(n == 0)
        return 0;
    else
        return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum = " << sumOfNaturalNumbers(n);
    return 0;
}


// Calculate Factorial of a Number Using Recursion:



#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << "Factorial = " << factorial(n);
    return 0;
}


// Find G.C.D Using Recursion:



#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD = " << gcd(num1, num2);
    return 0;
}


// Convert Binary Number to Decimal and vice-versa:

  

#include <iostream>

  

#include <cmath>
using namespace std;

int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    long long binary;
    int decimal;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << binary << " in decimal = " << binaryToDecimal(binary) << endl;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << decimal << " in binary = " << decimalToBinary(decimal) << endl;
    return 0;
}


// Convert Octal Number to Decimal and vice-versa:

  

#include <iostream>

  

#include <cmath>
using namespace std;

int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
    }
    return decimalNumber;
}

int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

int main() {
    int octal, decimal;
    cout << "Enter an octal number: ";
    cin >> octal;
    cout << octal << " in decimal = " << octalToDecimal(octal) << endl;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << decimal << " in octal = " << decimalToOctal(decimal) << endl;
    return 0;
}
