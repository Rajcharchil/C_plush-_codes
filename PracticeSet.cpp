/**
 function in cpp
 **/

#include<iostream>
using namespace std;

void multiplyBy(int *, int);
void multiplyArrayBy(int *, int, int);
int main() {

    int a = 10;

    multiplyBy(&a,5);

    cout<<a<<endl;
    cout<<endl;

    int array[10];
    //cout<<sizeof(array)/sizeof(array[0])<<endl;

    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++) {
        array[i]=i;
        //cout<<"array ["<<i<<"] = "<<array[i]<<endl;
    }

    multiplyArrayBy(array,5,sizeof(array)/sizeof(array[0])); // array = &array[0]

    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++) {
        cout<<"array ["<<i<<"] = "<<array[i]<<endl;
    }

    return 0;
}

void multiplyBy(int *var, int amount) {
    *var = *var * amount;
}

void multiplyArrayBy(int *array, int amount, int sizeOfArray) {
    while(sizeOfArray--)
        array[sizeOfArray] *= amount;

    /*
    for(int i=0;i<sizeOfArray;i++) {
        array[i] *= amount;
    } */
}


//==============================================================================================================

/**
 Overloading Function..
 **/

#include<iostream>
using namespace std;

int power(int,int);
double power(double,int);
//While overloading functions the function name will be the same.
//Function return type and function parameters will be different.

int main() {

    cout<<power(2.8,3)<<endl;
    cout<<power(2,3)<<endl;
    return 0;
}

int power(int b,int e) {
    int tmp=b;
    while(e>1) {
        b = b*tmp;
        e--;
    }
    return b;
}

double power(double b,int e) {
    int tmp=b;
    while(e>1) {
        b = b*tmp;
        e--;
    }
    return b;
}

//=======================================================================================

//Reference VAriable

#include<iostream>
using namespace std;

/*
~ Reference Variables are the alias to another variable.
~ Must be initialized when created.
~ They cant change the connections/associations.
~ Must be of the same type as associated variables.
*/

int main() {

    string name="Peter";
    cout<<"Value of variable is : "<<name<<". Address of variable is : "<<&name<<endl;

    string &ref_1 = name; // Creating a reference variable
    cout<<"Value of variable is : "<<ref_1<<". Address of variable is : "<<&ref_1<<endl;

    ref_1 = "Sam";
    cout<<"Value of variable is : "<<name<<". Address of variable is : "<<&name<<endl;
    cout<<"Value of variable is : "<<ref_1<<". Address of variable is : "<<&ref_1<<endl;

    return 0;
}

//============================================================================


#include<iostream>
using namespace std;

void swap(int &, int &);

int main() {

    int a=10,b=20;
    swap(a,b);

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}

void swap(int &a, int &b) {
    int t;
    t=a;
    a=b;
    b=t;

}

///===================================================================================
/**
Pointer
 **/

#include<iostream>
using namespace std;

int main() {

    int var = 5;
    cout<<&var<<endl; //Prints the address
    cout<<*&var<<endl; //Prints the value

    int *p; //*p - This indicates that p is a pointer type variable that points to address of another variable
    p=&var;

    cout<<p<<endl; //Prints the address of var
    cout<<*p<<endl; //Prints the value stored at the indicated address in the memory

    int a=20;
    cout<<"a : "<<a<<endl;
    int *p1=&a;
    *p1=60;
    cout<<"a : "<<a<<endl;
    cout<<"*p1 : "<<*p1<<endl;

    int * const p_const = &a; //Cannot change the ADDRESS afterwards
    const int *p2 = &a; //Cannot change the VALUE
    const int * const p3 = &a; //Cannot change the VALUE as well as ADDRESS

    int my_var=10;
    int *my_p=&my_var;

    cout<<endl<<endl;
    cout<<"my_var : "<<my_var<<endl; //Integer value
    cout<<"my_p : "<<my_p<<endl; //Address
    cout<<"*my_p : "<<*my_p<<endl; //Integer value from pointed variable (my_var)
    cout<<"&my_p : "<<&my_p<<endl; //Address of pointer itself

    int **pp=&my_p; //Pointer pointing to address of another pointer
    cout<<"pp : "<<pp<<endl;
    cout<<"&pp : "<<&pp<<endl;
    cout<<"*pp : "<<*pp<<endl;
    cout<<"**pp : "<<**pp<<endl;

    return 0;
}

///=========================================================================

/**
Pointer in Array
 **/

#include<iostream>
using namespace std;

int main() {

    int a[3]={10,20,30};
    short int zm;
    int * const p = &a[0];

    cout<<p<<endl; //Pointer p stores the base address of the array
    cout<<a<<endl; //Base address - a[0]

    cout<<endl<<endl;

    cout<<&a[0]<<endl; //Prints address of a[0] (Base address of the array)
    cout<<&a[1]<<endl;
    cout<<&a[2]<<endl;

    cout<<endl<<endl;

    cout<<a<<endl;
    cout<<a+1<<endl; //Moves by one position of the size of the type of array element
    cout<<a+2<<endl;

    cout<<endl<<endl;

    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;

    return 0;
}

///============================================================================================

/**
VAriable Scope
 **/

#include<iostream>
using namespace std;

//Variables created outside the curly brackets are called Global Variables.

int globalVariable;

main() {

    //Variables declared within a block are called Local Variables.
    int localVariable;

    cout<<"Value of Global Variable is : "<<globalVariable<<endl; //Default value is 0
    cout<<"Value of Local Variable is : "<<localVariable<<endl; //Default value is garbage value

    /*
    int a=10; //Local Variable

    if(a==10)
        int result = a*10;

    cout<<result; // Error as result is local to the if block
    */

}
