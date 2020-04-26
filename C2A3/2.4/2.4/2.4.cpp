// 2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Mad Libs Creation check list for C++
1.	6 strings, each list box must contain the following items
•	color;
•	Word ending in est
•	Body part plural
•	an Animal
•	a Noun
•	Plural Noun

2.	Create three integer variables within the program.
int a;
int b;
int c;
c = a - b;
3.	The following is a story that you can use, or make up your own.
“The (color) Dragon is the (word ending in est) Dragon of all. It has (integer c) (body part plural), and a (animal) shaped like a (noun). 
It loves to eat (plural noun), although it will feast on nearly anything.”

*/

#include <iostream>
using namespace std;
int main()
{
    string color, est, body, animal, nounSing, nounPlural;
    int a, b, c;

    cout << "Enter a color: \n";
    cin >> color;
    cout << "Enter a word ending in est: \n";
    cin >> est;
    cout << "Enter a body part: \n";
    cin >> body;
    cout << "Enter a animal: \n";
    cin >> animal;
    cout << "Enter a singular noun: \n";
    cin >> nounSing;
    cout << "Enter a plural noun: \n";
    cin >> nounPlural;

    cout << "Enter an integer: \n";
    cin >> a;
    cout << "Enter another integer: \n";
    cin >> b;

    c = b - a;

    cout << "The " << color << " Dragon is the " << est << " Dragon of all. " <<
        "It has " << c << " " << body << " and a " << animal << " shaped like a " << nounSing << ". " <<
        "It loves to eat " << nounPlural << ", although it will feast on nearly anything.";
}

