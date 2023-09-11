//Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=65;i<=90;i++){
        cout<<i<<" "<<char(i)<<endl;
      }
    for(i=97;i<=122;i++){
         cout<<i<<" "<<char(i)<<endl;
    }
}