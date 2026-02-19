#include <iostream>
using namespace std;

int main(){
    char character;

    cout << "enter character:";
    cin >> character;

    if(character == 'a' ||character == 'e' || character =='o' || character =='i' ||character == 'u' || character =='A' || character =='E' || character =='I' || character =='O' || character =='U' ){
    cout <<"It is vowel:" << character;

    }else {

    cout << "It is consonant:" << character;

    }
    return 0;


    }
