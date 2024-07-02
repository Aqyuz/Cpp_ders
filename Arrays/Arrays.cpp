// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void testfunction1(int array1[], int* array2,char array3[]) { //testfunction1not1
    std::cout << "array1: " << array1 << "\n";
    std::cout << "array1[0]: " << array1[0] << "\n";
    std::cout << "array1[1]: " << array1[1] << "\n";
    std::cout << "*array1: " << *array1 << "\n\n";

    std::cout << "array2: " << array2 << "\n";
    std::cout << "array2[0]: " << array2[0] << "\n";
    std::cout << "array2[1]: " << array2[1] << "\n";
    std::cout << "*array2: " << *array2 << "\n\n";

    std::cout << "array3: " << array3 << "\n";
    std::cout << "array3[0]: " << array3[0] << "\n";
    std::cout << "array3[1]: " << array3[1] << "\n";
    std::cout << "*array3: " << *array3 << "\n\n";

    /////////////////////////////////////////////////
    // testfunction1not1: Fonksiyonlara bir array verisi girilece�i zaman giri� bu �ekilde yap�l�r.
    // int array1[] ve int* array2 kullan�m� tamamen ayn�d�r. �kisi de ayn� i�i ayn� �ekilde yapar ancak ikinci kullan�m fonksiyona...
    // ...bir array pointer giri�i olaca��n� daha a��k g�sterdi�inden ve bu sayede kodu okuyan ki�inin daha kolay anlamas�n� sa�layaca��ndan...
    // ...ikinci kullan�m �nerilir.
    // 
    //
    /////////////////////////////////////////////////
}

int main()
{
    const int staticarray1(5); //Not1.1
    int puanlar1[staticarray1]{}; //Not1.2
    int puanlar2[6]{};  //Not2
    int puanlar3[7]{54,87,36,66,98,83,63}; //Not3
    int puanlar4[2][3] {{136,974,420},{220,190,610}}; //Not4
    char names[]{"Emin"}; //Not5
    
    std::cout << "puanlar1 :" << puanlar1 << "\n"; //Not6
    std::cout << "puanlar2 :" << puanlar2 << "\n";
    std::cout << "puanlar3 :" << puanlar3 << "\n";
    std::cout << "puanlar3+1 :" << puanlar3+1 << "\n";
    std::cout << "puanlar3+2 :" << puanlar3+2 << "\n";
    std::cout << "*puanlar3 :" << *puanlar3 << "\n"; //Not7
    std::cout << "puanlar1[2] :" << puanlar1[2] << "\n";
    std::cout << "puanlar1[3] :" << puanlar1[3] << "\n";
    std::cout << "puanlar2[2] :" << puanlar2[2] << "\n";
    std::cout << "puanlar2[3] :" << puanlar2[3] << "\n";
    std::cout << "puanlar3[0] :" << puanlar3[0] << "\n";
    std::cout << "puanlar3[1] :" << puanlar3[1] << "\n";
    std::cout << "puanlar3[7] :" << puanlar3[7] << "\n\n"; //Not8

    for (int i = 0; i < 7;i++) {
        std::cout << puanlar3[i] << "\n"; //Not9
    }
    
    std::cout << "\n";
    
    for (int i = 0; i < 2; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            std::cout << puanlar4[i][i2] << "\n"; //Not10
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";

    std::cout << "puanlar4 dizisindeki eleman sayisi: " << std::size(puanlar4) << "\n";  //Not11.1
    std::cout << "puanlar4[1] dizisindeki eleman sayisi: " << std::size(puanlar4[1]) << "\n\n"; //Not11.2

    testfunction1(puanlar3,puanlar4[0],names);

}


/////////////////////////////////////////////////
// NOTLAR
// Not1: Dizi(Array) bu �ekilde yaz�ld���nda IDE ram'de 5 adet int i�in yer ay�r�r ancak ay�rd��� yere bir �ey yazmad���m�z i�in...
// ...ayr�lan yerde daha �nce bulunan say�lar� alabilir.
// Bu dizi bir statik dizidir ve statik dizilerin eleman say�s� de�i�tirilemez. Bu y�zden statik dizilerin eleman say�s�na bir de�i�ken atanmaz.
// E�er ki birden fazla statik dizinin eleman say�s� ayn� olacaksa Not1.1'deki gibi bir constant parametre olu�turulup dizilerin eleman say�s�na atanabilir.
// 
// Not2: Dizi bu �ekilde yaz�ld���nda ise s�sl� parantez koydu�umuz i�in IDE ayr�lan t�m yerleri 0 ile doldurur.
// 
// Not3: Burada ise ay�rd���m�z t�m yerleri doldurduk.
// Dizinin hemen sa��nda bulunan k��eli parantez dizide ka� eleman olaca��n� belirtir.
// 
// Not4: Burada bir i� i�e dizi olu�turduk. K��eli parantezler her dizinin i�inde ne kadar eleman olaca��n� s�yler.
// 
// Not5: K��eli parantezin i�ine herhangi bir say� yazmazsak IDE program� derlerken dizinin elemanlar�n� kendi sayar ve k��eli parantezin i�ine yazar
// 
// Not6: Diziler bu �ekilde yaz�ld���nda IDE bize dizinin ilk eleman�n�n bulundu�u ram adresini verir. Pointer gibi �al���yor diyebiliriz
// 
// Not7: Dizi bu �ekilde yaz�ld���nda ise g�sterilen ram adresindeki ger�ek de�eri g�r�r�z.
// 
// Not8: 7 elemanl� bir dizinin 8. eleman�n� istersek IDE bize hata vermez(Uyar� verir). O diziden sonraki ram adresinin verisini bulur ve getirir.
// 
// Not9: Burada for d�ng�s� kullanarak bir dizinin i�indeki de�erleri yazd�rd�k.
// 
// Not10: Burada i� i�e for d�ng�s� kullanarak bir i� i�e dizinin i�indeki de�erleri yazd�rd�k.
// 
// Not11: Buradaki sat�rlarda ise bir dizinin eleman say�s�n� buluyoruz
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
