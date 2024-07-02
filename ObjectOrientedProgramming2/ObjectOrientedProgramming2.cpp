// ObjectOrientedProgramming2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class insan {
    
    int yas; //not1
    std::string isim;
    
    public:
        insan(char a, int b) { //not2
            yas = b;
            isim = a;
        }

        insan(char a) { //not2.1
            std::cout << "Yas giriniz: ";
            std::cin >> yas;
            if (!std::cin) {
                std::cout << "hata";
            }
            isim = a;
        }

        insan() { //not2.2
            std::cout << "Yas giriniz: ";
            std::cin >> yas;
            if (!std::cin) { //not3
                std::cin.ignore();
                std::cin.clear();
                std::cout << "hata" << "\n";
            }
            std::cout << "Isim giriniz: ";
            std::cin >> isim;
        }

        ~insan() { //not4
            std::cout << "Isim: " << isim << "\n";
            std::cout << "Yas: " << yas << "\n";

        }
};

class sinif1 {
    public:
        sinif1() { std::cout << "Constructor" << "\n"; }
        ~sinif1() { std::cout << "Destructor" << "\n"; }

};

void myfunction1() {
    insan insan1; //not5
}

void myfunction2() {
    sinif1 myclass1;
    sinif1(); //not5.1
    myclass1.~sinif1(); //not5.2

}

void myfunction3() { //Not5.3
    {
        sinif1 myclass;
    }
    std::cout << "merhaba" << "\n";
    {
        sinif1 myclass;
    }
}


int main()
{
    //std::cout << "Hello World!\n";
    //myfunction1(); //not6
    //myfunction1(); //not6.1
    //myfunction2();
    myfunction3();
    return 0;
}

    /////////////////////////////////////////////////
    // not1: S�n�f�n i�ine yaz�lan �eyler(de�i�kenler ve fonskiyonlar) default olarak private olur
    // 
    // not2: Burada constructor olu�turduk. Constructorlar s�n�ftan bir nesne olu�turuldu�unda otomatik olarak �al���r.
    // Constructorlara function overload uygulanabilir. not2,not2.1 ve not2.2 Constructor overload �rne�idir.
    // 
    // not3: Burada kullan�c�dan ald���m�z int de�erine kullan�c�n�n string girmesi durumunda hata mesaj� vermesini sa�lad�m(kesin ��z�m de�il)
    // 
    // not4: Burada destructor olu�turduk. Destructorlar s�n�ftan olu�turulan nesnenin kapanmas� durumunda �al���r.
    // �rne�in not5'de bir fonksiyon olu�turdum ve fonksiyonun i�inde insan s�n�f�ndan insan1 nesnesini olu�turdum.
    // bu fonksiyon �al��t���nda insan1 nesnesi olu�acak ve constructor �al��acak. Fonksiyon tamamlan�p kapand��� zaman da destructor �al��acak.
    // not6 ve not6.1 de fonksiyonu 2 kere yazd�m. Bu y�zden constructor ve destructor 2 kere �al��acak.
    // 
    // not5.1: Burada Constructor ve Destructor'� manuel olarak �al��t�rd�k. Not5.2'de ise sadece destructor �a�r�ld�.
    // Not5.3: Burada s�sl� parantez kullanarak fonksiyonun i�inde farkl� �al��ma alanlar� olu�turduk ve o �al��ma alanlar�n�n i�ine...
    // ...birbirinin ayn�s� olan 2 nesne olu�turduk. Her s�sl� parantezin i�i �zel bir aland�r. S�sl� parantezleri kullanarak...
    // ...bir fonksiyonda birka� �al��ma alan� yapabiliriz. Constructor ve destructorlar nesnenin ba�lang�c� ve biti�i ile �al��t��� i�in...
    // ...s�sl� parantez kullanarak bir fonskiyonda birka� tane nesneyi farkl� zamanlarda �al��t�rabilir ve bitirebiliriz.
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
