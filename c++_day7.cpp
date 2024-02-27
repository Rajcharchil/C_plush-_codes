// Find Largest Element of an Array:


#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest element of the array: " << max << endl;

    return 0;
}
// Calculate Standard Deviation:


// #include <iostream>


#include <cmath>
using namespace std;

int main() {
    double arr[] = {2.5, 3.5, 4.5, 5.5, 6.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    double mean = 0.0, sum = 0.0, std_deviation = 0.0;

    for(int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    mean = sum / n;
    for(int i = 0; i < n; ++i) {
        std_deviation += pow(arr[i] - mean, 2);
    }

    cout << "Standard Deviation = " << sqrt(std_deviation / n) << endl;

    return 0;
}
// Add Two Matrix Using Multi-dimensional Arrays:


#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    cout << "Enter elements of matrix1:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix2:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix2[i][j];
        }
    }

    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
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
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Multiplication not possible!";
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Multiplication
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Find Transpose of a Matrix:


#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of matrix: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Computing transpose
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Multiply two Matrices by Passing Matrix to Function:


#include <iostream>
using namespace std;

void multiplyMatrix(int mat1[][3], int mat2[][3], int res[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int res[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int res[3][3];

    multiplyMatrix(mat1, mat2, res);
    cout << "Resultant matrix:" << endl;
    displayMatrix(res);

    return 0;
}
// Access Elements of an Array Using Pointer:


#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for (int i = 0; i < 5; ++i) {
        cout << "Element at index " << i << " : " << *(ptr + i) << endl;
    }

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
    int a = 10, b = 20, c = 30;
    cout << "Before swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
    cyclicSwap(a, b,c);
    cout << "After swapping: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
// Find the Frequency of Characters in a String:


// #include <iostream>


#include <unordered_map>
using namespace std;

int main() {
    string str = "hello world";
    unordered_map<char, int> freq;

    for (char ch : str) {
        if (ch != ' ') {
            ++freq[ch];
        }
    }

    cout << "Frequency of characters in the string:" << endl;
    for (const auto &pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}
// Find the Number of Vowels, Consonants, Digits, and White Spaces in a String:


#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string str = "hello world 123";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                ++vowels;
            } else {
                ++consonants;
            }
        } else if (isdigit(ch)) {
            ++digits;
        } else if (isspace(ch)) {
            ++spaces;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
// Remove all Characters in a String Except Alphabets:


// #include <iostream>


#include <cctype>
using namespace std;

int main() {
    string str = "hello123@world";
    string result;

    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch;
        }
    }

    cout << "String after removing non-alphabetic characters: " << result << endl;

    return 0;
}
// Find the Length of a String:


#include <iostream>
using namespace std;

int main() {
    string str = "hello world";
    int length = str.length();

    cout << "Length of the string: " << length << endl;

    return 0;
}
// Concatenate Two Strings:


#include <iostream>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = "world";
    string result = str1 + " " + str2;

    cout << "Concatenated string: " << result << endl;

    return 0;
}
// Copy Strings:


#include <iostream>
using namespace std;

int main() {
    string original = "hello";
    string copied = original;

    cout << "Original string: " << original << endl;
    cout << "Copied string: " << copied << endl;

    return 0;
}
// Sort Elements in Lexicographical Order (Dictionary Order):


// #include <iostream>


#include <algorithm>
using namespace std;

int main() {
    string arr[] = {"banana", "apple", "orange", "grapes", "kiwi"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "Sorted strings in lexicographical order:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}
// Store Information of a Student in a Structure:


// #include <iostream>


#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    double marks;
};

int main() {
    Student s;

    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.rollNumber;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
// Add Two Distances (in inch-feet) System Using Structures:


#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

Distance addDistance(Distance d1, Distance d2) {
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
    Distance d1 = {10, 6.5};
    Distance d2 = {5, 7.25};

    Distance sum = addDistance(d1, d2);

    cout << "Sum: " << sum.feet << " feet " << sum.inches << " inches" << endl;

    return 0;
}
// Add Complex Numbers by Passing Structure to a Function:


#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex num1 = {2.5, 3.5};
    Complex num2 = {1.6, 2.4};

    Complex sum = addComplex(num1, num2);

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
// Calculate Difference Between Two Time Period:


#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time difference(Time t1, Time t2) {
    Time diff;
    int t1_seconds, t2_seconds, time_difference;

    t1_seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    t2_seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    time_difference = t1_seconds - t2_seconds;

    diff.hours = time_difference / 3600;
    time_difference %= 3600;
    diff.minutes = time_difference / 60;
    time_difference %= 60;
    diff.seconds = time_difference;

    return diff;
}

int main() {
    Time t1 = {5, 25, 50};
    Time t2 = {2, 15, 30};

    Time diff = difference(t1, t2);

    cout << "Difference: " << diff.hours << " hours " << diff.minutes << " minutes " << diff.seconds << " seconds" << endl;

    return 0;
}
// Store and Display Information Using Structure:


#include <iostream>
using namespace std;

struct Employee {
    string name;
    int age;
    double salary;
};

int main() {
    Employee emp1;
    emp1.name = "John Doe";
    emp1.age = 30;
    emp1.salary = 50000.0;

    cout << "Employee Information:" << endl;
    cout << "Name: " << emp1.name << endl;
    cout << "Age: " << emp1.age << endl;
    cout << "Salary: $" << emp1.salary << endl;

    return 0;
}
