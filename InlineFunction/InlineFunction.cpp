// InlineFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

inline int topla(int sayi1, int sayi2) { //not1
    return sayi1 + sayi2;
}

int main()
{
    
    int a(5);
    int b(5);
    
    std::cout << topla(a,b) << "\n"; //not2
    std::cout << a+b << "\n"; //not3

}

/////////////////////////////////////////////////
// NOTLAR
// 
// not1: Burada bir fonksiyonun önüne inline yazarak onu inline fonksiyon yapýyoruz
// 
// Inline fonksiyonlar normal fonksiyonlar gibi çalýþmaz.
// IDE(derleyici) programý derlerken normal bir fonksiyonun çaðrýldýðýný gördüðünde onu bir telefon numarasý gibi görür...
// ... ve o fonksiyona ihtiyacý olduðunda o fonksiyonu bulur ve çaðýrýr
// 
// Ama IDE(derleyici) programý derlerken inline fonksiyonu çaðrýldýðýný gördüðü yerde siler ve oraya fonksiyonun iþlevini yazar.
// Yani program derlendiðinde bilgisayar için not2 ve not3 satýrý týpatýp aynýdýr
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
