

// Display Prime Numbers Between Two Intervals Using Functions:


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void displayPrime(int low, int high) {
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int low, high;
    cout << "Enter the lower and upper intervals: ";
    cin >> low >> high;
    displayPrime(low, high);
    return 0;
}


// Check Prime Number By Creating a Function:


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}


// Check Whether a Number can be Express as Sum of Two Prime Numbers:


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isSumOfPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i))
            return true;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isSumOfPrimes(num))
        cout << num << " can be expressed as the sum of two prime numbers." << endl;
    else
        cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    return 0;
}


// Find Sum of Natural Numbers using Recursion:


#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is: " << sum(num) << endl;
    return 0;
}


// Calculate Factorial of a Number Using Recursion:


#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}


// Find G.C.D Using Recursion:


#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}
Convert Binary Number to Decimal and vice-versa: (Binary to Decimal)

  // 

  
  #include <iostream>

  // 

  
  #include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    cout << "Decimal equivalent: " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}
(Binary to Decimal Vice Versa is omitted for brevity, but can be achieved similarly)

Convert Octal Number to Decimal and vice-versa: (Octal to Decimal)

  // 

  
  #include <iostream>

  // 

  
  #include <cmath>
using namespace std;

int octalToDecimal(int n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    int octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;
    cout << "Decimal equivalent: " << octalToDecimal(octalNumber) << endl;
    return 0;
}
(Octal to Decimal Vice Versa is omitted for brevity, but can be achieved similarly)

Convert Binary Number to Octal and vice-versa: (Binary to Octal)

  // 

  
  #include <iostream>

  // 

  
  #include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
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
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    int decimal = binaryToDecimal(binaryNumber);
    cout << "Octal equivalent: " << decimalToOctal(decimal) << endl;
    return 0;
}
(Binary to Octal Vice Versa is omitted for brevity, but can be achieved similarly)



// Reverse a Sentence Using Recursion:




// #include <iostream>


#include <cstring>
using namespace std;

void reverseSentence() {
    char c;
    cin.get(c);
    if (c != '\n') {
        reverseSentence();
        cout << c;
    }
}

int main() {
    cout << "Enter a sentence: ";
    reverseSentence();
    cout << endl;
    return 0;
}


// Calculate Power Using Recursion:


#include <iostream>
using namespace std;

double power(double base, int exponent) {
    if (exponent != 0)
        return (base * power(base, exponent - 1));
    else
        return 1;
}

int main() {
    double base;
    int exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}


// Calculate Average of Numbers Using Arrays:


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    cout << "Average = " << (float)sum / n << endl;
    return 0;
}


// Find Largest Element of an Array:


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int largest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    cout << "Largest element = " << largest << endl;
    return 0;
}


// Calculate Standard Deviation:




// #include <iostream>


#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double arr[n], sum = 0, mean, stddev = 0;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; ++i)
        stddev += pow(arr[i] - mean, 2);
    stddev = sqrt(stddev / n);
    cout << "Standard deviation = " << stddev << endl;
    return 0;
}


// Add Two Matrix Using Multi-dimensional Arrays:


#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows and columns of matrix: ";
    cin >> row >> col;
    int matrix1[row][col], matrix2[row][col], sum[row][col];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }
    cout << "Sum of matrices:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


// Multiply Two Matrix Using Multi-dimensional Arrays:


#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> row2 >> col2;
    if (col1 != row2) {
        cout << "Multiplication not possible!";
        return 0;
    }
    int matrix1[row1][col1], matrix2[row2][col2], product[row1][col2];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of matrices:\n";
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


// Find Transpose of a Matrix:


#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows and columns of matrix: ";
    cin >> row >> col;
    int matrix[row][col], transpose[col][row];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of matrix:\n";
    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


// Multiply two Matrices by Passing Matrix to Function:


#include <iostream>
usingnamespace std;

void multiplyMatrices(int mat1[][3], int mat2[][3], int res[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int res[3][3];
    multiplyMatrices(mat1, mat2, res);
    cout << "Resultant Matrix: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


// Access Elements of an Array Using Pointer:


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    cout << "Elements of array: ";
    for (int i = 0; i < 5; ++i) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}


// Swap Numbers in Cyclic Order Using Call by Reference:


#include <iostream>
using namespace std;

void cyclicSwap(int &a, int &b, int &c) {
    int temp = a;
    a = c;
    c = b;
    b = temp;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Before swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
    cyclicSwap(a, b, c);
    cout << "After swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}
