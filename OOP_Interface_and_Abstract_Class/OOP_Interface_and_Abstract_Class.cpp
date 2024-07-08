// OOP_Interface_and_Abstract_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//__interface IInterface
//{
//
//}; //Interface yazýnca böyle bir þey geldi ancak ne iþe yarýyor bilmiyorum

class Canlilar {
public:
    virtual void name() = 0; //not1
};

class Bitkiler : public Canlilar { }; //not2

class Cicek : public Bitkiler {
public:
    virtual void name() { std::cout << "Cicek" << "\n"; } //not3
};

class Lale : public Cicek { }; //not4

class Papatya : public Cicek {
public:
    void name() { std::cout << "Papatya" << "\n"; } //not5
};

class Hayvanlar : public Canlilar {
public:
    virtual void move() { std::cout << "Moving"; }; //not6
    virtual void name() { std::cout << "Hayvan" << "\n"; } //not7
    int movespeed{};
};

class Kurt : public Hayvanlar {
public:
    void name() { std::cout << "Kurt" << "\n"; }
};

class Kopek : public Hayvanlar {
public:
    void name() { std::cout << "Kopek" << "\n"; }
};

class Kedi : public Hayvanlar {
public:
    void name() { std::cout << "Kedi" << "\n"; }
};

class Koyun : public Hayvanlar { };

void AnimalName(Hayvanlar* AnimalClassPtr) { AnimalClassPtr->name(); }



int main()
{
    //Canlilar c; //not8
    //Bitkiler b; //not9
    Cicek c; //not10
    Hayvanlar h; //not11
    Kedi k; //not12
    k.name(); //not13

    Papatya papatya1; //not14
    Lale lale1; //not15
    papatya1.name(); //not16
    lale1.name(); //not17

    Koyun Koyun1; //not18
    Koyun1.name(); //not19

}


/////////////////////////////////////////////////
// 
// not1: Bu satýrdaki "name" metodu saf sanal fonksiyondur(pure virtual function,PVF). PVF'ler boþtur ve herhangi bir gövdesi olmaz.
// not1 satýrýnda görüldüðü üzere süslü parantez yerine "= 0" yazdýk,bu o fonksiyonun boþ olduðunu belirtir.
// not3 satýrýnda da bir sanal fonksiyon var ancak not3 satýrýnda "= 0" yazmýyor. not3 satýrýnda "= 0" yazmak yerine...
// ...süslü parantez içinde o fonksiyonun bir iþlevi var. Bu yüzden not3 satýrý saf sanal fonksiyon deðil sadece sanal fonksiyondur.
// Sanal fonksiyonlarýn saf olmasý için süslü parantezi dahi olmamalý,sadece "= 0" yazýlmalýdýr.
// Saf sanal fonksiyonlar boþ olduklarý için çaðrýlamaz. Saf sanal fonksiyonlarýn görevi, içinde bulunduðu sýnýfý ata alan...
// ...alt sýnýflarýn da o isimde bir fonksiyon içermesini zorunlu kýlmaktýr. not1 satýrýnda Canlýlar sýnýfýna name adýnda...
// ...saf sanal bir fonksiyon ekledik. Böylece Canlýlar sýnýfýný ata alan her sýnýf name fonksiyonunu içermek zorunda.
// (Çünkü her bir canlýnýn adý vardýr).Eðer ki Canlýlar sýnýfýný ata alan bir sýnýf name fonksiyonu içermiyorsa...
// ...(function override yapýlmadýysa) o sýnýf da bir Abstract Class(Soyut Sýnýf) olur.Eðer ki bir sýnýfta en az bir saf sanal...
// ...fonksiyon varsa o sýnýf Abstract(soyut) sýnýf olur. Eðer ki bir sýnýfta SADECE saf sanal fonksiyonlar varsa bu sýnýflara...
// ...Interface denir. Interface ve soyut sýnýflardan nesne oluþturulamaz. 
// 
// Örneðin: Canlýlar sýnýfý bir interface'dir. Canlýlar sýnýfýný ata alan Bitkiler sýnýfýnda herhangi bir function overriding yok.
// Bu yüzden Bitkiler sýnýfý da bir interface olur ve bu yüzden Bitkiler sýnýfýndan bir nesne oluþturulamaz.Bu yüzden not8 ve not9...
// ...satýrýndaki yan çizgiler silip o satýrý comment olmaktan çýkarýrsak hata verecektir. Bitkiler sýnýfýný ata alan Cicek sýnýfý...
// ...not3 satýrýnda sanal bir fonksiyon kullanmasýna raðmen herhangi bir saf(boþ) fonksiyon içermediði için...
// ...Abstract veya Interface class deðildir.Saf olmayan bir sanal fonksiyon kullandýðýmýz için Cicek sýnýfýný...
// ...not10 satýrýnda nesneleþtirip kullanabiliyoruz. Ayrýca Cicek sýnýfý sanal bir fonksiyon içerdiði için Cicek sýnýfýný...
// ...ata alan Papatya sýnýfý not5 satýrýnda ata sýnýflardan miras aldýðý name fonksiyonunu function override yaparak...
// ...not16 satýrýnda kendi özel çýktýsýný alabildi. Yine Cicek sýnýfýný ata alan Lale sýnýfý ise herhangi bir function override...
// ...yapmadýðý için not17 satýrýnda Cicek sýnýfýndan miras aldýðý sanal fonksiyonun çýktýsýný kullandý.
// 
// Eðer ki not7 satýrýný comment satýrýna çevirirsek not11,not18 ve not19 satýrlarý hata verecektir. Çünkü, Canlilar sýnýfýndan miras...
// ...aldýðýmýz name fonksiyonu herhangi bir deðiþikliðe uðramadan olduðu gibi alt sýnýfa gelecek ve saf bir fonksiyon olduðu için...
// ...içinde bulunduðu sýnýflarý da Abstract veya Interface sýnýfa çevirecek. Abstract veya Interface sýnýflardan nesne...
// ...oluþturamadýðýmýz için not11,not18 ve not19 satýrlarý hata verecektir.Ancak, not7 satýrý aktif olursa Hayvanlar sýnýfý ve...
// ...Hayvanlar sýnýfýný ata alan tüm alt sýnýflar name fonksiyonunu düzenlenmiþ bir biçimde kullancaklar.
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
