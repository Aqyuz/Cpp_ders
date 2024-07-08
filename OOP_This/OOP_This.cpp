// OOP_This.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Calculator {
    public:
        int deger = 5; //not1
        int sonuc{};
        void topla(int deger) { sonuc = this->deger + deger; } //not1.1
};


int main()
{
    Calculator Calculate1;
    int deger;
    std::cout << "5 ile toplanacak degeri giriniz: ";
    std::cin >> deger;
    Calculate1.topla(deger);
    std::cout << "Sonuc: " << Calculate1.sonuc;
}


/////////////////////////////////////////////////
// 
// not1: This ile ayný isimdeki deðiþkenler ile çalýþabiliriz. This-> yazýp hemen saðýna yazdýðýmýz deðer nesnenin içinde...
// ...bulunan deðeri iþaret eder. Bu koddaki örnekte "this->deger" not1 satýrýndaki deðiþkeni iþaret ederken hemen saðýndaki...
// ... "deger" deðiþkeni ise fonksiyonun girdisi olan "int deger" deðiþkenini temsil eder.
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
