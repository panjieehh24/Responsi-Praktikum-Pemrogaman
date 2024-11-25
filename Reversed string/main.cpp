#include <iostream>
#include <string>
using namespace std;

int main(){
  char f;
string str;
cout << "This is a function for reverse a string program \n";
cout << "=============================================== \n";
  cout << "Do you want this file run as a hardcode? (y/n): ";
  cin >> f;

    if(f == 'y'){
str = "FishCat";
    } else {
      cout << "Enter the word/string: ";
cin >> str;
  }

string reversedStr;

    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    cout << "The reversed string is: " << reversedStr << endl;

    return 0;
}


  
