#include <iostream>
#include "dog.h"
#include "cat.h"
#include "parrot.h"
using namespace std;

int main()
{
    string tempName;
    double tempWeight;
    int bodyLength, jumpHeight, flightDuration, x;

    cout << "What kind of pet should I create?" << endl
        << "1) Dog" << endl
        << "2) Cat" << endl
        << "3) Parrot" << endl;

    cin >> x;
    if (x == 1) {
        cout << endl << "Your dog's name: " << endl;
        cin >> tempName;
        cout << "Your dog's weight: " << endl;
        cin >> tempWeight;
        cout << "The length of your dog: " << endl;
        cin >> bodyLength;

        dog myDog(tempName, tempWeight, bodyLength);
        cout << endl << "Do you have a dog with these parameters:" << endl;
        myDog.get_name();
        myDog.get_weight();
        myDog.get_bodyLength();
    }
    else if (x == 2) {
        cout << endl << "Your cat's name: " << endl;
        cin >> tempName;
        cout << "Your cat's weight: " << endl;
        cin >> tempWeight;
        cout << "The height of your cat's jump: " << endl;
        cin >> jumpHeight;

        cat myCat(tempName, tempWeight, jumpHeight);
        cout << endl << "Do you have a cat with these parameters:" << endl;
        myCat.get_name();
        myCat.get_weight();
        myCat.get_jumpHeight();
    }
    else if (x == 3) {
        cout << endl << "Your parrot's name: " << endl;
        cin >> tempName;
        cout << "Your parrot's weight: " << endl;
        cin >> tempWeight;
        cout << "The duration of your parrot's flight: " << endl;
        cin >> flightDuration;

        parrot myParrot(tempName, tempWeight, flightDuration);
        cout << endl << "Do you have a parrot with the following parameters:" << endl;
        myParrot.get_name();
        myParrot.get_weight();
        myParrot.get_flightDuration();
    }
    else {
        cout << "There is no such animal";
        return 0;
    }
}