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
    // not1: Sýnýfýn içine yazýlan þeyler(deðiþkenler ve fonskiyonlar) default olarak private olur
    // 
    // not2: Burada constructor oluþturduk. Constructorlar sýnýftan bir nesne oluþturulduðunda otomatik olarak çalýþýr.
    // Constructorlara function overload uygulanabilir. not2,not2.1 ve not2.2 Constructor overload örneðidir.
    // 
    // not3: Burada kullanýcýdan aldýðýmýz int deðerine kullanýcýnýn string girmesi durumunda hata mesajý vermesini saðladým(kesin çözüm deðil)
    // 
    // not4: Burada destructor oluþturduk. Destructorlar sýnýftan oluþturulan nesnenin kapanmasý durumunda çalýþýr.
    // Örneðin not5'de bir fonksiyon oluþturdum ve fonksiyonun içinde insan sýnýfýndan insan1 nesnesini oluþturdum.
    // bu fonksiyon çalýþtýðýnda insan1 nesnesi oluþacak ve constructor çalýþacak. Fonksiyon tamamlanýp kapandýðý zaman da destructor çalýþacak.
    // not6 ve not6.1 de fonksiyonu 2 kere yazdým. Bu yüzden constructor ve destructor 2 kere çalýþacak.
    // 
    // not5.1: Burada Constructor ve Destructor'ý manuel olarak çalýþtýrdýk. Not5.2'de ise sadece destructor çaðrýldý.
    // Not5.3: Burada süslü parantez kullanarak fonksiyonun içinde farklý çalýþma alanlarý oluþturduk ve o çalýþma alanlarýnýn içine...
    // ...birbirinin aynýsý olan 2 nesne oluþturduk. Her süslü parantezin içi özel bir alandýr. Süslü parantezleri kullanarak...
    // ...bir fonksiyonda birkaç çalýþma alaný yapabiliriz. Constructor ve destructorlar nesnenin baþlangýcý ve bitiþi ile çalýþtýðý için...
    // ...süslü parantez kullanarak bir fonskiyonda birkaç tane nesneyi farklý zamanlarda çalýþtýrabilir ve bitirebiliriz.
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
