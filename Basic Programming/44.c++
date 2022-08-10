/*
Write a program to take a character (C)(C) as input and check whether the given character is a vowel or a consonant.

NOTE:-NOTE:− Vowels are 'A', 'E', 'I', 'O', 'U'. Rest all alphabets are called consonants.
*/
#include <iostream>
using namespace std;
int main()
{
    char z;
    cin >> z;
    if (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u' || z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U')
        cout << z << " is a Vowel" << endl;
    else
        cout << z << " is a Consonant." << endl;
    return 0;
}