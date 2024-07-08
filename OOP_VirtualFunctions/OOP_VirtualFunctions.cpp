// OOP_VirtualFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Animal {
    public:
        virtual void name() = 0; //not1
        //void name(){ std::cout << "Animal" << "\n"; } //not1.1
};

class Wolf : public Animal{
    public:
        void name() { std::cout << "Wolf" << "\n"; }
};

class Dog : public Animal {
    public:
        void name() { std::cout << "Dog" << "\n"; }
};

class Cat : public Animal {
    public:
        void name() { std::cout << "Cat" << "\n"; }
};

void AnimalName(Animal* AnimalClassPtr) { AnimalClassPtr->name(); }

//void AnimalName(Wolf* AnimalClassPtr) { AnimalClassPtr->name(); } //not2
//void AnimalName(Dog* AnimalClassPtr) { AnimalClassPtr->name(); } //not2.1
//void AnimalName(Cat* AnimalClassPtr) { AnimalClassPtr->name(); } //not2.2

int main()
{
    Wolf Wolf1;
    Dog Dog1;
    Cat Cat1;
    AnimalName(&Wolf1); //not3
    AnimalName(&Dog1); //not3.1
    AnimalName(&Cat1); //not3.2
}

/////////////////////////////////////////////////
// 
// Sanal fonksiyonlar(Sanal metod) ile ayn� isimde fonksiyon i�eren alt s�n�flar� kullanabiliriz .�rnekte, isim yazmam�za yarayan...
// ..."name" fonksiyonunu tek fonksiyon(AnimalName) ile kullanabilmek i�in "name" fonksiyonunu hem ana hem de alt s�n�flara yazd�k.
// not2,not2.1 ve not2.2 sat�rlar�ndaki gibi her s�n�f i�in ayr� bir fonksiyon yazmak istemiyorsak upcasting ve sanal fonksiyonlar�...
// ...kullanmal�y�z. Sadece upcasting kullan�r ve not1.1 sat�r�n� yazarsak IDE alt s�n�flardaki "name" fonksiyonunu g�rmezden gelecek...
// ...ve not3,not3.1 ve not3.2 sat�r�ndaki fonksiyonlar not1.1 sat�r�n�n ��kt�s�n� verecek. Ama not1 sat�r�ndaki gibi bir sanal fonksiyon...
// ...kullan�rsak not3,not3.1 ve not3.2 sat�r�ndaki fonksiyonlar�n her biri inputta yazan s�n�f�n ��kt�s�n� verecek.
// 
// Ek not: Polymorphism
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
