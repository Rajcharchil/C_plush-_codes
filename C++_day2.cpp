            //Hollow Rectangle pattern

#include<iostream>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";

            }
            else{
                cout<<" ";

            }
        }
        cout<<endl;
    }
    return 0;
}

//=================================================================

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" *";

        }
        cout<<endl;
    }
    return 0;
}

//=================================================
           ///DIAMOND PATTERN
                

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";

            }
            else{
                cout<<"* ";

           }
        }
        cout<<endl;
    }
    return 0;


}


//========================================================
                    // 180 degree pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";

            }
            else{
                cout<<"* ";

           }
        }
        cout<<endl;
    }
    return 0;


}

//========================================================

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }cout<<endl;
    }
    return 0;
}


//=====================================================
            //     floyd's triangle

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;

}


//=====================================================
////////        Butterfly pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 

    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=n;i>=i;i--){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}

//======================================================
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<"";

        }
        cout<<endl;
    }
}

///===================================================

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1";

            }
            else{
                cout<<" 0";
            }

        }
        cout<<endl;
    }
    return 0;

}

///=========================================================
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=n;j++){
        cout<<"*";

    }
    cout<<endl;
    }
    return 0;
}

//=======================================================
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;

    }
    return 0;
}

///====================================================


