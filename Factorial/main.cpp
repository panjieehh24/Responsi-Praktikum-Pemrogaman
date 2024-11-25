#include <iostream>
using namespace std;

int main(){
    int number, factorial = 1;
    char f;
    cout << "This is a function for factorial \n";
    cout << "=================================== \n";
    cout << "Do you want this input as a hardcode? (y/n) ";
    cin >> f;

    if(f == 'y'){
        number = 5;
    }else {
        cout << "Enter the number: ";
        cin >> number;
    }




    if(number < 0){
        cout << "You can't input a negative number";
    }
    else if(number <= 1){
        cout << "The factorial of the number is: " << factorial;
    }
    else{
      for(int i = number; i >= 2; i--){
        factorial = factorial * i;
      }
      cout <<"The factorial of " << number << " is: " << factorial;
    }
    return 0;
}

