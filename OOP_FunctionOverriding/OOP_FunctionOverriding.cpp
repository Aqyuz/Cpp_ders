// OOP_FunctionOverriding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Animal {
public:
    void name(){ std::cout << "Animal" << "\n"; } //not1
    int yas;
    int boy;
};

class Wolf : public Animal {
public:
    void name() { 
        Animal::name(); //not1.1
        std::cout << "Wolf" << "\n"; }
};

class Dog : public Animal {
public:
    void name() { std::cout << "Dog" << "\n"; }
};

class Cat : public Animal {
public:
    void name() { std::cout << "Cat" << "\n"; }
};

int main()
{
    Animal Animal1;
    Wolf Wolf1;
    Dog Dog1;
    Animal1.name(); //not2
    Wolf1.name(); //not2.1
    Dog1.name(); //not2.2

}

/////////////////////////////////////////////////
// 
// not1: Burada sanal fonksiyonlara benzeyen ba�ka bir polymorphism �rne�i kulland�k. Fakat, sanal fonksiyon �rne�indeki gibi casting ve pointer...
// ...kullanmad�k. Not2,Not2.1 ve Not2.2'de g�r�ld��� �zere upcasting yap�lm�� pointerlar ile de�il direkt nesnenin kendisi ile name fonksiyonunu...
// ...�a��rd�k. Bu y�zden sanal fonksiyon kullanmaya gerek kalmadan function overriding yapabildik.
// not1.1: Burada da alt s�n�ftan �st s�n�ftaki bir �eyi �a��rd�k.
//
/////////////////////////////////////////////////

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
