#include <iostream>
using namespace std;

// *
// * *
// * * *
void q1(int n)
{
    for (int i = 0; i <= n; i++)// rows
    { // rows
        for (int j = 0; j <= i - 1; j++)// cols
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1
// 2 3
// 4 5 6
void q2(int n)
{
    int count=0;
    for (int i = 0; i <= n; i++)// rows
    { // rows
        for (int j = 0; j <= i - 1; j++)// cols
        { 
            cout << ++count<<" ";
        }
        cout << endl;
    }
}

// * * * * 
// * * *
// * *
// *
void q3(int n)
{
    
    for (int i = 0; i <= n; i++)// rows
    { // rows
        for (int j = 0; j <= n-i; j++)// cols
        { 
            cout <<"* ";
        }
        cout << endl;
    }
}

//         * 
//       * *
//     * * *
//   * * * *
void q4(int n)
{
    
    for (int i = 0; i <= n; i++)// rows
    { // rows
        for (int j = 0; j <= n-i; j++)// cols
        { 
            cout <<"  ";
        }
        for (int j = 0; j <= i; j++)// cols
        { 
            cout <<"* ";
        }
        cout<<endl;
    }
}


int main()
{
    cout<<"********************************"<<endl;
    q1(3);
    cout<<"********************************"<<endl;
    q2(3);
    cout<<"********************************"<<endl;
    q3(3);
    cout<<"********************************"<<endl;
    q4(3);

}