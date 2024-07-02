// ObjectOrientedProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class hesapla {
    private: //Private sadece bu class içine özeldir
        int islemcount;
    protected: //Protected ayný private gibidir ama baþka classlar tarafýndan eriþilebilir
        float floatsonuc;
    public: //Public ise herkes tarafýndan eriþilebilir
        int sayi1;
        int sayi2;
        int sonuc;
        char islem;

        char giris(){
            std::cout << "Yapacaginiz islemi giriniz(+,-,*,/): ";
            std::cin >> islem;
            return islem;
        }
        void giris2() {
            std::cout << "Yapacaginiz islemi giriniz(+,-,*,/): ";
            std::cin >> islem;
        }
        int toplama() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            return sayi1 + sayi2;
        }
        int toplama2() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            sonuc = sayi1 + sayi2;
            return sonuc;
        }
        void toplama3() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            std::cout << sayi1 <<"+" << sayi2 << "=" << sayi1+sayi2;
        }
        void cikarma() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            std::cout << sayi1 << "-" << sayi2 << "=" << sayi1 - sayi2;
        }
        void bolme() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            std::cout << sayi1 << "/" << sayi2 << "=" << sayi1 / sayi2;
        }
        void bolme2() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            floatsonuc = sayi1 / sayi2;
            std::cout << sayi1 << "/" << sayi2 << "=" << floatsonuc;
        }
        void carpma() {
            std::cout << "birinci sayiyi giriniz :";
            std::cin >> sayi1;
            std::cout << "ikinci sayiyi giriniz :";
            std::cin >> sayi2;
            std::cout << sayi1 << "*" << sayi2 << "=" << sayi1 * sayi2;
        }
};

void hesaplayici() {
    hesapla hesap1;
    std::cout << "isleminiz: " << hesap1.giris() << "\n";

    if (hesap1.islem == '+') {
        hesap1.toplama3();
    }
    else if (hesap1.islem == '-'){
        hesap1.cikarma();
    }
    else if (hesap1.islem == '*'){
        hesap1.carpma();
    }
    else if (hesap1.islem == '/'){
        hesap1.bolme2();
    }
    else{
        std::cout << "\n" << "HATA";
    }
}

void hesaplayici2() {
    hesapla hesap1;
    std::cout << "isleminiz: " << hesap1.giris() << "\n";

    if (hesap1.islem == '+') {
        std::cout << hesap1.sayi1 << "+" << hesap1.sayi2 << "=" << hesap1.toplama();
    }
    else if (hesap1.islem == '-') {
        hesap1.cikarma();
    }
    else if (hesap1.islem == '*') {
        hesap1.carpma();
    }
    else if (hesap1.islem == '/') {
        hesap1.bolme2();
    }
    else {
        std::cout << "\n" << "HATA";
    }
}

void hesaplayici3() {
    hesapla hesap1;
    hesap1.giris2();
    std::cout << "isleminiz: " << hesap1.islem;

    if (hesap1.islem == '+') {
        hesap1.toplama3();
    }
    else if (hesap1.islem == '-') {
        hesap1.cikarma();
    }
    else if (hesap1.islem == '*') {
        hesap1.carpma();
    }
    else if (hesap1.islem == '/') {
        hesap1.bolme();
    }
    else {
        std::cout << "\n" << "HATA";
    }
}

int main()
{
    hesaplayici();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
