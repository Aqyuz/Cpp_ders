// OOP_Encapsulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class BankClass {
    private:
        float islemtutari{};
        float maxparacekmelimiti = 2000;
        float maxparayatirmalimiti = 20000;
        float bakiye = 250;
    public:
        float bakiye2 = 300;
        float parayukle(float miktar) {
            if (miktar < 5){
                std::cout << "Minimum para yatirma tutari 5tl'dir" << "\n";
            }
            else if (miktar > maxparayatirmalimiti){
                std::cout << "Azami para yatirma tutariniz " << maxparayatirmalimiti << "tl'dir" << "\n";
            }
            else if (miktar > 5 && miktar < maxparayatirmalimiti) {
                bakiye = bakiye + miktar;
                std::cout << "Para yatirma islemi basarili. Yeni bakiyeniz: " << bakiye << "\n";
            }
            else{
                std::cout << "HATA";
            }
            return bakiye;
        }
        void bakiyesorgula() { std::cout << "Mevcut bakiyeniz: " << bakiye << "\n"; }
};


int main()
{
    float para;
    BankClass Bankclass1;
    Bankclass1.bakiyesorgula();
    std::cout << "Yatirmak istediginiz para miktarini giriniz: ";
    std::cin >> para;
    std::cout << "\n";
    Bankclass1.parayukle(para);

    //Bankclass1.bakiye2 += para; //not1
    //std::cout << Bankclass1.bakiye2;

}


/////////////////////////////////////////////////
// 
// Encapsulation s�n�f�n i�indeki verilerin korunmas� denebilir. Bu �rnekte parayukle ad�nda bir metod(fonksiyon) kullanarak...
// ...verileri koruduk. E�er ki not1'deki gibi bir koruma y�ntemi(Encapsulation) kullanmadan direkt olarak s�n�f�n i�indeki de�eri...
// ...de�i�tirerek i�lem yapsayd�k kullan�c�n�n yapt��� anormal davran��lar program� bozabilirdi. �rne�in kullan�c� negatif de�er girerse...
// ...not1'deki hatal� kullan�m y�z�nden bakiye2 de�eri negatife d��ebilirdi.
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
