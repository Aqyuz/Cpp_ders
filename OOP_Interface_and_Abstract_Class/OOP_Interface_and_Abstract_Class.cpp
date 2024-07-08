// OOP_Interface_and_Abstract_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//__interface IInterface
//{
//
//}; //Interface yaz�nca b�yle bir �ey geldi ancak ne i�e yar�yor bilmiyorum

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
// not1: Bu sat�rdaki "name" metodu saf sanal fonksiyondur(pure virtual function,PVF). PVF'ler bo�tur ve herhangi bir g�vdesi olmaz.
// not1 sat�r�nda g�r�ld��� �zere s�sl� parantez yerine "= 0" yazd�k,bu o fonksiyonun bo� oldu�unu belirtir.
// not3 sat�r�nda da bir sanal fonksiyon var ancak not3 sat�r�nda "= 0" yazm�yor. not3 sat�r�nda "= 0" yazmak yerine...
// ...s�sl� parantez i�inde o fonksiyonun bir i�levi var. Bu y�zden not3 sat�r� saf sanal fonksiyon de�il sadece sanal fonksiyondur.
// Sanal fonksiyonlar�n saf olmas� i�in s�sl� parantezi dahi olmamal�,sadece "= 0" yaz�lmal�d�r.
// Saf sanal fonksiyonlar bo� olduklar� i�in �a�r�lamaz. Saf sanal fonksiyonlar�n g�revi, i�inde bulundu�u s�n�f� ata alan...
// ...alt s�n�flar�n da o isimde bir fonksiyon i�ermesini zorunlu k�lmakt�r. not1 sat�r�nda Canl�lar s�n�f�na name ad�nda...
// ...saf sanal bir fonksiyon ekledik. B�ylece Canl�lar s�n�f�n� ata alan her s�n�f name fonksiyonunu i�ermek zorunda.
// (��nk� her bir canl�n�n ad� vard�r).E�er ki Canl�lar s�n�f�n� ata alan bir s�n�f name fonksiyonu i�ermiyorsa...
// ...(function override yap�lmad�ysa) o s�n�f da bir Abstract Class(Soyut S�n�f) olur.E�er ki bir s�n�fta en az bir saf sanal...
// ...fonksiyon varsa o s�n�f Abstract(soyut) s�n�f olur. E�er ki bir s�n�fta SADECE saf sanal fonksiyonlar varsa bu s�n�flara...
// ...Interface denir. Interface ve soyut s�n�flardan nesne olu�turulamaz. 
// 
// �rne�in: Canl�lar s�n�f� bir interface'dir. Canl�lar s�n�f�n� ata alan Bitkiler s�n�f�nda herhangi bir function overriding yok.
// Bu y�zden Bitkiler s�n�f� da bir interface olur ve bu y�zden Bitkiler s�n�f�ndan bir nesne olu�turulamaz.Bu y�zden not8 ve not9...
// ...sat�r�ndaki yan �izgiler silip o sat�r� comment olmaktan ��kar�rsak hata verecektir. Bitkiler s�n�f�n� ata alan Cicek s�n�f�...
// ...not3 sat�r�nda sanal bir fonksiyon kullanmas�na ra�men herhangi bir saf(bo�) fonksiyon i�ermedi�i i�in...
// ...Abstract veya Interface class de�ildir.Saf olmayan bir sanal fonksiyon kulland���m�z i�in Cicek s�n�f�n�...
// ...not10 sat�r�nda nesnele�tirip kullanabiliyoruz. Ayr�ca Cicek s�n�f� sanal bir fonksiyon i�erdi�i i�in Cicek s�n�f�n�...
// ...ata alan Papatya s�n�f� not5 sat�r�nda ata s�n�flardan miras ald��� name fonksiyonunu function override yaparak...
// ...not16 sat�r�nda kendi �zel ��kt�s�n� alabildi. Yine Cicek s�n�f�n� ata alan Lale s�n�f� ise herhangi bir function override...
// ...yapmad��� i�in not17 sat�r�nda Cicek s�n�f�ndan miras ald��� sanal fonksiyonun ��kt�s�n� kulland�.
// 
// E�er ki not7 sat�r�n� comment sat�r�na �evirirsek not11,not18 ve not19 sat�rlar� hata verecektir. ��nk�, Canlilar s�n�f�ndan miras...
// ...ald���m�z name fonksiyonu herhangi bir de�i�ikli�e u�ramadan oldu�u gibi alt s�n�fa gelecek ve saf bir fonksiyon oldu�u i�in...
// ...i�inde bulundu�u s�n�flar� da Abstract veya Interface s�n�fa �evirecek. Abstract veya Interface s�n�flardan nesne...
// ...olu�turamad���m�z i�in not11,not18 ve not19 sat�rlar� hata verecektir.Ancak, not7 sat�r� aktif olursa Hayvanlar s�n�f� ve...
// ...Hayvanlar s�n�f�n� ata alan t�m alt s�n�flar name fonksiyonunu d�zenlenmi� bir bi�imde kullancaklar.
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
