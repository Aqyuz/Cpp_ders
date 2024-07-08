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
// Sanal fonksiyonlar(Sanal metod) ile ayný isimde fonksiyon içeren alt sýnýflarý kullanabiliriz .Örnekte, isim yazmamýza yarayan...
// ..."name" fonksiyonunu tek fonksiyon(AnimalName) ile kullanabilmek için "name" fonksiyonunu hem ana hem de alt sýnýflara yazdýk.
// not2,not2.1 ve not2.2 satýrlarýndaki gibi her sýnýf için ayrý bir fonksiyon yazmak istemiyorsak upcasting ve sanal fonksiyonlarý...
// ...kullanmalýyýz. Sadece upcasting kullanýr ve not1.1 satýrýný yazarsak IDE alt sýnýflardaki "name" fonksiyonunu görmezden gelecek...
// ...ve not3,not3.1 ve not3.2 satýrýndaki fonksiyonlar not1.1 satýrýnýn çýktýsýný verecek. Ama not1 satýrýndaki gibi bir sanal fonksiyon...
// ...kullanýrsak not3,not3.1 ve not3.2 satýrýndaki fonksiyonlarýn her biri inputta yazan sýnýfýn çýktýsýný verecek.
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
