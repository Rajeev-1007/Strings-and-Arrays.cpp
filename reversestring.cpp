#include<iostream>
using namespace std;
int main(){
    string str1="Rajeev";
    for(int i= str1.length()-1;i>=0;i--)
    {
        cout<<str1[i];
    }
    return 0;
}