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
    // testfunction1not1: Fonksiyonlara bir array verisi girileceði zaman giriþ bu þekilde yapýlýr.
    // int array1[] ve int* array2 kullanýmý tamamen aynýdýr. Ýkisi de ayný iþi ayný þekilde yapar ancak ikinci kullaným fonksiyona...
    // ...bir array pointer giriþi olacaðýný daha açýk gösterdiðinden ve bu sayede kodu okuyan kiþinin daha kolay anlamasýný saðlayacaðýndan...
    // ...ikinci kullaným önerilir.
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
// Not1: Dizi(Array) bu þekilde yazýldýðýnda IDE ram'de 5 adet int için yer ayýrýr ancak ayýrdýðý yere bir þey yazmadýðýmýz için...
// ...ayrýlan yerde daha önce bulunan sayýlarý alabilir.
// Bu dizi bir statik dizidir ve statik dizilerin eleman sayýsý deðiþtirilemez. Bu yüzden statik dizilerin eleman sayýsýna bir deðiþken atanmaz.
// Eðer ki birden fazla statik dizinin eleman sayýsý ayný olacaksa Not1.1'deki gibi bir constant parametre oluþturulup dizilerin eleman sayýsýna atanabilir.
// 
// Not2: Dizi bu þekilde yazýldýðýnda ise süslü parantez koyduðumuz için IDE ayrýlan tüm yerleri 0 ile doldurur.
// 
// Not3: Burada ise ayýrdýðýmýz tüm yerleri doldurduk.
// Dizinin hemen saðýnda bulunan köþeli parantez dizide kaç eleman olacaðýný belirtir.
// 
// Not4: Burada bir iç içe dizi oluþturduk. Köþeli parantezler her dizinin içinde ne kadar eleman olacaðýný söyler.
// 
// Not5: Köþeli parantezin içine herhangi bir sayý yazmazsak IDE programý derlerken dizinin elemanlarýný kendi sayar ve köþeli parantezin içine yazar
// 
// Not6: Diziler bu þekilde yazýldýðýnda IDE bize dizinin ilk elemanýnýn bulunduðu ram adresini verir. Pointer gibi çalýþýyor diyebiliriz
// 
// Not7: Dizi bu þekilde yazýldýðýnda ise gösterilen ram adresindeki gerçek deðeri görürüz.
// 
// Not8: 7 elemanlý bir dizinin 8. elemanýný istersek IDE bize hata vermez(Uyarý verir). O diziden sonraki ram adresinin verisini bulur ve getirir.
// 
// Not9: Burada for döngüsü kullanarak bir dizinin içindeki deðerleri yazdýrdýk.
// 
// Not10: Burada iç içe for döngüsü kullanarak bir iç içe dizinin içindeki deðerleri yazdýrdýk.
// 
// Not11: Buradaki satýrlarda ise bir dizinin eleman sayýsýný buluyoruz
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
