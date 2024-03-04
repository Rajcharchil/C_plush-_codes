
//  Program to Find G.C.D Using Recursion


#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "G.C.D of " << num1 << " and " << num2 << " is: " << gcd(num1, num2);
    return 0;
}




//==================================================================================================================
//  Program to Convert Binary Number to Decimal and vice-versa


#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0, i = 0;
    while (n != 0) {
        int rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

int decimalToBinary(int n) {
    int binary = 0, i = 1;
    while (n != 0) {
        int rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int binary, decimal;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;

    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary equivalent: " << decimalToBinary(decimal) << endl;

    return 0;
}




//==================================================================================================================
//  Program to Convert Octal Number to Decimal and vice-versa


#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int n) {
    int decimal = 0, i = 0;
    while (n != 0) {
        int rem = n % 10;
        n /= 10;
        decimal += rem * pow(8, i);
        ++i;
    }
    return decimal;
}

int decimalToOctal(int n) {
    int octal = 0, i = 1;
    while (n != 0) {
        int rem = n % 8;
        n /= 8;
        octal += rem * i;
        i *= 10;
    }
    return octal;
}

int main() {
    int octal, decimal;
    cout << "Enter an octal number: ";
    cin >> octal;
    cout << "Decimal equivalent: " << octalToDecimal(octal) << endl;

    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Octal equivalent: " << decimalToOctal(decimal) << endl;

    return 0;
}




//==================================================================================================================
//  Program to Convert Binary Number to Octal and vice-versa


#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0, i = 0;
    while (n != 0) {
        int rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

int decimalToBinary(int n) {
    int binary = 0, i = 1;
    while (n != 0) {
        int rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int binaryToOctal(int binary) {
    int octal = 0, decimal = binaryToDecimal(binary), i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

int octalToBinary(int octal) {
    int binary = 0, decimal = 0, i = 0;
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }
    i = 1;
    while (decimal != 0) {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}

int main() {
    int binary, octal;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Octal equivalent: " << binaryToOctal(binary) << endl;

    cout << "Enter an octal number: ";
    cin >> octal;
    cout << "Binary equivalent: " << octalToBinary(octal) << endl;

    return 0;
}




//==================================================================================================================
//  program to Reverse a Sentence Using Recursion


#include <iostream>
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
    return 0;
}




//==================================================================================================================
//  Program to Calculate Power Using Recursion


#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent);
    return 0;
}




//==================================================================================================================
//  Program to Calculate Average of Numbers Using Arrays


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n], sum = 0;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    float average = (float)sum / n;
    cout << "Average = " << average;
    return 0;
}




//==================================================================================================================
//  Program to Find Largest Element of an Array


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
    cout << "Largest element: " << largest;
    return 0;
}




//==================================================================================================================
//  Program to Calculate Standard Deviation


#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[], int n) {
    float sum = 0.0, mean, standardDeviation = 0.0;
    for(int i = 0; i < n; ++i) {
        sum += data[i];
    }
    mean = sum / n;
    for(int i = 0; i < n; ++i)
        standardDeviation += pow(data[i] - mean, 2);
    return sqrt(standardDeviation / n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    float data[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i)
        cin >> data[i];
    cout << "Standard Deviation = " << calculateSD(data, n);
    return 0;
}




//==================================================================================================================
//  Program to Add Two Matrix Using Multi-dimensional Arrays


#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    int matrix1[row][col], matrix2[row][col], sum[row][col];

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }

    // Adding Two matrices
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j) {
            cout << sum[i][j] << "  ";
            if(j == col - 1)
                cout << endl;
        }

    return 0;
}




//==================================================================================================================
//  Program to Multiply Two Matrix Using Multi-dimensional Arrays


#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrices cannot be multiplied!";
        return 0;
    }

    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < row2; ++i)
        for (int j = 0; j < col2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }

    // Initializing elements of result matrix to 0.
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and storing result in result matrix
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j)
            for (int k = 0; k < col1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }

    // Displaying the resultant matrix.
    cout << endl << "Product of two matrices is: " << endl;
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j) {
            cout << result[i][j] << "  ";
            if (j == col2 - 1)
                cout << endl;
        }

    return 0;
}




//==================================================================================================================
//  Program to Find Transpose of a Matrix


#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    int matrix[row][col];

    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix[i][j];
        }

    int transpose[col][row];

    // Finding transpose
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {
            transpose[j][i] = matrix[i][j];
        }

    // Displaying the resultant transpose matrix
    cout << endl << "Transpose of the matrix:" << endl;
    for (int i = 0; i < col; ++i)
        for (int j = 0; j < row; ++j) {
            cout << transpose[i][j] << "  ";
            if (j == row - 1)
                cout << endl;
        }

    return 0;
}




//==================================================================================================================
//  Program to Multiply two Matrices by Passing Matrix to Function


#include <iostream>
using namespace std;

void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrices cannot be multiplied!";
        return;
    }

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j) {
            res[i][j] = 0;
        }

    // Multiplying matrices a and b and storing result in result matrix
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrices cannot be multiplied!";
        return 0;
    }

    int mat1[10][10], mat2[10][10], result[10][10];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat1[i][j];
        }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> mat2[i][j];
        }

    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);

    // Displaying the resultant matrix
    cout << endl << "Product of two matrices is:" << endl;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << "  ";
            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}




//==================================================================================================================
//  Program to Access Elements of an Array Using Pointer


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // Assigning the address of arr[0] to ptr
    ptr = arr;

    cout << "Displaying elements of the array using pointer:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i + 1 << " : " << *ptr << endl;
ptr++;
    }

    return 0;
}




//==================================================================================================================
//  Program to Swap Numbers in Cyclic Order Using Call by Reference


#include <iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Before swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
    cyclicSwap(&a, &b, &c);
    cout << "After swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}




//==================================================================================================================
//  Program to Find the Frequency of Characters in a String


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (char c : str) {
        freq[c]++;
    }

    cout << "Frequency of characters in the string: " << endl;
    for (int i = 0; i < 256; ++i) {
        if (freq[i] != 0) {
            cout << "'" << char(i) << "' : " << freq[i] << endl;
        }
    }

    return 0;
}




//==================================================================================================================
//  Program to Find the Number of Vowels, Consonants, Digits, and White Spaces in a String


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (char c : str) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                ++vowels;
            else
                ++consonants;
        } else if (isdigit(c)) {
            ++digits;
        } else if (isspace(c)) {
            ++spaces;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White Spaces: " << spaces << endl;

    return 0;
}




//==================================================================================================================
//  Program to Remove all Characters in a String Except Alphabets.


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
getline(cin, str);

    string result = "";

    for (char c : str) {
        if (isalpha(c)) {
            result += c;
        }
    }

    cout << "String after removing non-alphabetic characters: " << result;

    return 0;
}




//==================================================================================================================
//  Program to Find the Length of a String


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    cout << "Length of the string: " << length;

    return 0;
}




//==================================================================================================================
//  Program to Concatenate Two Strings


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    strcat(str1, str2);

    cout << "Concatenated string: " << str1;

    return 0;
}




//==================================================================================================================
//  Program to Copy Strings


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[100], destination[100];
    cout << "Enter the source string: ";
    cin.getline(source, 100);

    strcpy(destination, source);

    cout << "Copied string: " << destination;

    return 0;
}




//==================================================================================================================
//  Program to Sort Elements in Lexicographical Order (Dictionary Order)


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    sort(str, str + len);

    cout << "String in lexicographical order: " << str;

    return 0;
}




//==================================================================================================================
//  Program to Store Information of a Student in a Structure


#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student student;

    cout << "Enter student's name: ";
    getline(cin, student.name);
    cout << "Enter student's roll number: ";
    cin >> student.rollNumber;
    cout << "Enter student's marks: ";
    cin >> student.marks;

    cout << "\nStudent's Information" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}




//==================================================================================================================
//  Program to Add Two Distances (in inch-feet) System Using Structures


#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

Distance addDistances(Distance d1, Distance d2) {
    Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12.0) {
        sum.inches -= 12.0;
        sum.feet++;
    }
    return sum;
}

int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance:" << endl;
    cout << "Feet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;

    cout << "Enter second distance:" << endl;
    cout << "Feet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;

    sum = addDistances(d1, d2);

    cout << "Sum of distances = " << sum.feet << " feet " << sum.inches << " inches";

    return 0;
}




//==================================================================================================================
//  Program to Add Complex Numbers by Passing Structure to a Function


#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    Complex c1, c2, sum;

    cout << "Enter real and imaginary parts of first complex number:" << endl;
    cout << "Real: ";
    cin >> c1.real;
    cout << "Imaginary: ";
    cin >> c1.imag;

    cout << "Enter real and imaginary parts of second complex number:" << endl;
    cout << "Real: ";
    cin >> c2.real;
    cout << "Imaginary: ";
    cin >> c2.imag;

    sum = addComplex(c1, c2);

    cout << "Sum = " << sum.real << " + " << sum.imag << "i";

    return 0;
}




//==================================================================================================================
//  Program to Calculate Difference Between Two Time Period


#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time difference(Time t1, Time t2) {
    Time diff;
    if (t2.seconds > t1.seconds) {
        --t1.minutes;
        t1.seconds += 60;
    }
    diff.seconds = t1.seconds - t2.seconds;

    if (t2.minutes > t1.minutes) {
        --t1.hours;
        t1.minutes += 60;
    }
    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;

    return diff;
}

int main() {
    Time t1, t2, diff;

    cout << "Enter time t1:" << endl;
    cout << "Hours: ";
    cin >> t1.hours;
    cout << "Minutes: ";
    cin >> t1.minutes;
    cout << "Seconds: ";
    cin >> t1.seconds;

    cout << "Enter time t2:" << endl;
    cout << "Hours: ";
    cin >> t2.hours;
    cout << "Minutes: ";
    cin >> t2.minutes;
    cout << "Seconds: ";
    cin >> t2.seconds;

    diff = difference(t1, t2);

    cout << "Time difference: " << diff.hours << " hours, " << diff.minutes << " minutes, " << diff.seconds << " seconds";

    return 0;
}




//==================================================================================================================
//  Program to Store and Display Information Using Structure


#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    Person p;

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    cout << "\nDisplaying Information" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;

    return 0;
}
