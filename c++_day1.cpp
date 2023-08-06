#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}



//================================================

#include<iostream>
using namespace std;

int main(){
    int a;    //declaretion
    a=12;  //intillasition
    cout <<"size of int "<<sizeof (a)<<endl;

    float b;
    cout <<"size of float "<<sizeof (b)<<endl;

    char c;
    cout <<"size of char "<<sizeof (c)<<endl;

    bool d;
    cout <<"size of bool "<<sizeof (d)<<endl;

    short int si;
    long int li;
    cout <<"size of short int "<<sizeof (si)<<endl;
    cout <<"size of long int "<<sizeof (li)<<endl;
    return 0;
}


//====================================================================

#include<iostream>
using namespace std;

int main(){
    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;
    int sum=amount1+amount2;

    cout<<sum;
    return 0;
}

//================================================================

#include<iostream>
using namespace std;

int main(){
    int amount1;
    amount1=45;
    int amount2;
    amount2=90;
   

    // cout<<amount1+amount2;
    cout<<amount2/amount1*100;
    return 0;
}


//-======================================================
//              if, else, statement

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if (a>c){
            cout<<a<<endl;}
        else{
            cout<<c<<endl;
        }
    }    
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }    

        
        return 0;
    }


//================================================

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;

}


//======================================
 
 //              for loop

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum<<endl;
    return 0;

}

//=======================================================

                //  while loop


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}


//==================================================================
               //  do while


#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
 }

//=========================================================

#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for(int date=1;date<=30;date++){

        if(date%2==0){
            continue;

        }
        if(pocketmoney==0){
            break;
        }
        cout<<"go out today!"<<endl;
        pocketmoney=pocketmoney-400;
    }
    return 0;
}

//==============================================================

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;

    for(int i=2;i<n;n++){

        if(n%i==0){
            cout<<"non prime"<<endl;
            break;
        }
    }
    if(i==n){

     cout<<"prime"<<endl;
    }

    return 0;
}


// ======================================================================

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    for (int num=a;num<=b;num++){
        int i;
        for (i=2;i<num;i++){
            if(num%i==0){
                break;

            }
        }
        if(i==num){
            cout<<num<<endl;
        }

    }
    return 0;
}

// ===========================================================

#include<iostream>
using namespace std;


int main(){

    char button;
    cout<<"input a character: ";
    cin>>button;

    switch(button){

    case 'a':
    cout<<"ram"<<endl;
    break;

    case 'b':
    cout<<"laxman"<<endl;
    break;

    case 'c':
    cout<<"bharat"<<endl;
    break;

    case 'd':
    cout<<"satudhan"<<endl;
    break;

    default:
    cout<<"hanumaan"<<endl;



    }
    return 0;

}


// ===============================================================


#include<iostream>
using namespace std;


int main(){

    int   n1,n2;
    cout<<"input a number1 :";
    cin>>n1;
    cout<<"input a number2 :";
    cin>>n2;


    char op;
    cout<<"input an operator:";
    cin>>op;

    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;


        case '-':
        cout<<n1-n2<<endl;
        break;


        case '*':
        cout<<n1*n2<<endl;
        break;


        case '/':
        cout<<n1/n2<<endl;
        break;


        case '%':
        cout<<n1%n2<<endl;
        break;

        default:
        cout<<"Not correct operator"<<endl;
        break;



    }
}

// ===================================================================================
#include<iostream>
using namespace std;
int main(){
    int i=1;
    i= i++ + ++i;
    cout<<i<<endl;
    return 0;

     
}



// =====================================================

#include<iostream>
using namespace std;

int main(){
    int i=1;
    int j =2;
    int k;

    k =i+j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<" "<<k<<endl;

    return 0;

}

// =============================================
#include<iostream>
using namespace std;

int main(){
    int i=0;

    i = i++ - --i + ++i - i--;

    cout<<i<<endl;

    return 0;

}

//=======================================================
#include<iostream>
using namespace std;

int main(){
    int i=1,j=2,k=3;

    int m= i-- - j-- - k--;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m<<endl;

    return 0;
}

//=====================================================

#include<iostream>
using namespace std;

int main(){

    int i=10, j=20,k;
        //10  //9   //19   //20  //9  //20  //10   //19
    k = i-- - i++ + --j - ++j  + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//-20

    return 0;

}


//===================================================

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n>10){
        cout<<"more than 10"<<endl;

    }
    else if(n<10){
        cout<<"less than 10"<<endl;

    }
    else{
        cout<<"equal to 10"<<endl;

    }
    return 0;

}


//==========================================================

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both"<<endl;

    }
    else if(n%2==0){
        cout<<"divisible by only 2"<<endl;
    }
    else if(n%3==0){
        cout<<"divisible by only 3"<<endl;

    }
    else{
        cout<<"divisible by none"<<endl;

    }
    return 0;

}

//==========================================================
                  // print star 

#include<iostream>
using namespace std;

int main(){

    int row, col;

    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;

}

//==========================================================


////                    THE END
