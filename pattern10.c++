//alphbet square pattern 2
#include<iostream>
using namespace std;

int main(){
    int num;
    int row = 1;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(row<=num){
        int col = 1;
        while(col<=num){
            char ch = 'A' + col - 1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}