// C++ Program to Find the Frequency of Characters in a String:
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::unordered_map<char, int> freq;

    for (char ch : str) {
        if (std::isalpha(ch)) // considering only alphabets
            freq[ch]++;
    }

    std::cout << "Character frequencies:\n";
    for (auto pair : freq) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
// C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String:
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (char ch : str) {
        if (std::isalpha(ch)) {
            ch = std::tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (std::isdigit(ch)) {
            digits++;
        } else if (std::isspace(ch)) {
            spaces++;
        }
    }

    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << "Spaces: " << spaces << std::endl;

    return 0;
}
// C++ Program to Remove all Characters in a String Except Alphabets:
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::string result;
    for (char ch : str) {
        if (std::isalpha(ch))
            result += ch;
    }

    std::cout << "String after removing non-alphabetic characters: " << result << std::endl;

    return 0;
}


// C++ Program to Find the Length of a String:
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int length = str.length();
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}


// C++ Program to Concatenate Two Strings:
#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);

    str1 += str2;
    std::cout << "Concatenated string: " << str1 << std::endl;

    return 0;
}


// C++ Program to Copy Strings:
#include <iostream>
#include <cstring>

int main() {
    char source[100], destination[100];
    std::cout << "Enter a string: ";
    std::cin.getline(source, 100);

    std::strcpy(destination, source);

    std::cout << "Copied string: " << destination << std::endl;

    return 0;
}


// C++ Program to Sort Elements in Lexicographical Order (Dictionary Order):
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> strings;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    std::cin.ignore(); // Ignore newline character

    std::cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::getline(std::cin, str);
        strings.push_back(str);
    }

    std::sort(strings.begin(), strings.end());

    std::cout << "Strings in lexicographical order:\n";
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}


// C++ Program to Store Information of a Student in a Structure:
#include <iostream>
#include <string>

struct Student {
    std::string name;
    int rollNumber;
    float marks;
};

int main() {
    Student student;

    std::cout << "Enter student's name: ";
    std::getline(std::cin, student.name);
    std::cout << "Enter student's roll number: ";
    std::cin >> student.rollNumber;
    std::cout << "Enter student's marks: ";
    std::cin >> student.marks;

    std::cout << "Student's Information:\n";
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Roll Number: " << student.rollNumber << std::endl;
    std::cout << "Marks: " << student.marks << std::endl;

    return 0;
}


// C++ Program to Add Two Distances (in inch-feet) System Using Structures:
#include <iostream>

struct Distance {
    int feet;
    float inches;
};

Distance addDistances(const Distance& d1, const Distance& d2) {
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }
    return result;
}

void displayDistance(const Distance& d) {
    std::cout << "Feet: " << d.feet << " Inches: " << d.inches << std::endl;
}

int main() {
    Distance d1, d2, sum;
    std::cout << "Enter first distance:" << std::endl;
    std::cout << "Feet: ";
    std::cin >> d1.feet;
    std::cout << "Inches: ";
    std::cin >> d1.inches;

    std::cout << "Enter second distance:" << std::endl;
    std::cout << "Feet: ";
    std::cin >> d2.feet;
    std::cout << "Inches: ";
    std::cin >> d2.inches;

    sum = addDistances(d1, d2);

    std::cout << "Sum of distances: ";
    displayDistance(sum);

    return 0;
}


// C++ Program to Add Complex Numbers by Passing Structure to a Function:
#include <iostream>

struct Complex {
    float real;
    float imag;
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex c1, c2, sum;
    std::cout << "Enter real and imaginary parts of first complex number: ";
    std::cin >> c1.real >> c1.imag;

    std::cout << "Enter real and imaginary parts of second complex number: ";
    std::cin >> c2.real >> c2.imag;

    sum = addComplex(c1, c2);

    std::cout << "Sum = " << sum.real << " + " << sum.imag << "i" << std::endl;

    return 0;
}


// C++ Program to Calculate Difference Between Two Time Periods:
#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time difference(const Time& t1, const Time& t2) {
    Time diff;
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    Time t1, t2, diff;
    std::cout << "Enter time 1 (hours minutes seconds): ";
    std::cin >> t1.hours >> t1.minutes >> t1.seconds;

    std::cout << "Enter time 2 (hours minutes seconds): ";
    std::cin >> t2.hours >> t2.minutes >> t2.seconds;

    diff = difference(t1, t2);

    std::cout << "Difference: " << diff.hours << " hours, " << diff.minutes << " minutes, " << diff.seconds << " seconds" << std::endl;

    return 0;
}


// C++ Program to Store and Display Information Using Structure:
#include <iostream>
#include <string>

struct Student {
    std::string name;
    int rollNumber;
    float marks;
};

void displayStudent(const Student& student) {
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Roll Number: " << student.rollNumber << std::endl;
    std::cout << "Marks: " << student.marks << std::endl;
}

int main() {
    Student students[3];

    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter student " << i + 1 << " details:" << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin, students[i].name);
        std::cout << "Roll Number: ";
        std::cin >> students[i].rollNumber;
        std::cout << "Marks: ";
        std::cin >> students[i].marks;
        std::cin.ignore(); // Ignore newline character
    }

    std::cout << "Students' Information:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        displayStudent(students[i]);
    }

    return 0;
}
