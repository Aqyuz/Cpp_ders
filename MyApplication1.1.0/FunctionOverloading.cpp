// MyApplication1.1.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int topla(int a,int b) { return a + b; } //not1
int topla(int a, int b,int c) { return a + b + c; } //not1
float topla(float a, int b) { return a + b; } //not1
float topla(float a, float b) { return a + b; } //not1

int integer_topla(int a,int b) { return a + b; } //not2
float float_topla(float a, float b) { return a + b; } //not2

int main()
{
    std::cout << topla(5, 12) << "\n";
    std::cout << topla(5, 12, 15) << "\n";
    std::cout << topla(5, 12.5) << "\n";
    // Baz� durumlarda ayn� isimdeki fonksiyonlar tekrar yaz�labilir
    // E�er ki fonksiyonlar ayn� i�i g�r�yorsa not2'deki gibi yazmaya gerek yoktur
    // not1'deki gibi yazarak i�imizi kolayla�t�rabiliriz
    // 1-e�er ki fonksiyon ��kt�s�n�n(return) tipi farkl�ysa(int,float,double)
    // 2-e�er ki fonksiyon girdilerinin tipi farkl�ysa
    // 3-e�er ki fonksiyon girdilerinin say�s� farkl�ysa
    // Function Overloading yapabiliriz
    /////////////////////////////////////////////////
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
