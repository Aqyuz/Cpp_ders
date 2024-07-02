// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

int toplafunction(int sayi1, int sayi2) {return sayi1 + sayi2;}

int myfunction1(int a, int b,char inputstring1, char inputstring2) {
    std::cout << "---start of the myfunction1--- \n";
    //////////////////////////////////////////////
    std::cout << toplafunction(a,b); //myfunction1_not1
    int sonuc;
    sonuc = a + b;
    std::cout << "input string 1:" << inputstring1 << "\ninput string 2:" << inputstring2;
    std::cout << "\na+b:" << sonuc << "\n";
    // myfunction1_not1:Bir fonksiyonun içinde baþka bir fonksiyon çaðýrýlabilir ama...
    // ...yeni bir fonksiyon yazýlamaz ve oluþturulamaz
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction1--- \n\n";
    return sonuc;
}

int myfunction2(int a, int b) {
    std::cout << "---start of the myfunction2--- \n";
    //////////////////////////////////////////////
    char sonuc;
    sonuc = a + b;
    std::cout << "sonuc:" << sonuc << "\n";
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction2--- \n\n";
    return sonuc;
}

char myfunction3(char a, char b) {
    std::cout << "---start of the myfunction3--- \n";
    //////////////////////////////////////////////
    char sonuc;
    sonuc = a + b;
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction3--- \n\n";
    return sonuc;
}

char myfunction4(int a) {
    std::cout << "---start of the myfunction4--- \n";
    //////////////////////////////////////////////
    std::cout << "myfunction4 input:" << a << "\n";
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction4--- \n\n";
    return a;
}

int myfunction5(int a) {
    std::cout << "---start of the myfunction5--- \n";
    //////////////////////////////////////////////
    std::cout << "myfunction5 input:" << a << "\n";
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction5--- \n\n";
    return a;
}

int myfunction6() {
    std::cout << "---start of the myfunction6--- \n";
    //////////////////////////////////////////////
    int8_t a = 126;
    int8_t b = 129;
    int16_t c = 129;
    int16_t sonuc;
    sonuc = a + b;
    std::cout << "8 bit signed int a(126): " << a << "\n";
    std::cout << "8 bit signed int b(129): " << b << "\n";
    std::cout << "8 bit signed int a(126)+0: " << a+0 << "\n";
    std::cout << "8 bit signed int b(129)+0: " << b+0 << "\n";
    std::cout << "a+b: " << a + b << "\n";
    std::cout << "sonuc(16 bit int) = a+b: " << sonuc << "\n";
    std::cout << "16 bit signed int c(129): " << c << "\n";
    std::cout << "a+c: " << a+c << "\n";

    //////////////////////////////////////////////
    std::cout << "---end of the myfunction6--- \n\n";
    return 0;
}

int myfunction7() {
    std::cout << "---start of the myfunction7--- \n";
    //////////////////////////////////////////////
    char a = 126;
    char b = 129;
    char c = 'A';
    int16_t char_a_to_int = a;
    int16_t char_b_to_int = b;
    int16_t char_c_to_int = c;
    int16_t sonuc;
    sonuc = a + b;
    std::cout << "char a(126): " << a << "\n";
    std::cout << "char a(126)+0: " << a+0 << "\n";
    std::cout << "char b(129): " << b << "\n";
    std::cout << "char b(129)+0: " << b+0 << "\n";
    std::cout << "char c('A'): " << c << "\n";
    std::cout << "char c('A')+0: " << c+0 << "\n";
    std::cout << "char a converted to 16 bit int(126): " << char_a_to_int << "\n";
    std::cout << "char b converted to 16 bit int(129): " << char_b_to_int << "\n";
    std::cout << "char c converted to 16 bit int('A'): " << char_c_to_int << "\n";
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction7--- \n\n";
    return 0;
}

char myfunction8() {
    std::cout << "---start of the myfunction8--- \n";
    //////////////////////////////////////////////
    bool a = true;
    bool b = 1;
    bool c = false;
    bool d = 0;
    bool e;
    int f = 5;
    int8_t g;
    int16_t h;
    int32_t j;
    int64_t k;
    float l;
    double m;
    auto n = "merhaba arkadaslar";
    auto o = 0;
    auto u = 5.1;
    wchar_t v('þ');

    
    std::cout << "size of a(boolean): " << sizeof(a) << "bytes" << "\n";
    std::cout << "size of b(boolean): " << sizeof(b) << "bytes" << "\n";
    std::cout << "size of c(boolean): " << sizeof(c) << "bytes" << "\n";
    std::cout << "size of d(boolean): " << sizeof(d) << "bytes" << "\n";
    std::cout << "size of e(boolean): " << sizeof(e) << "bytes" << "\n";
    std::cout << "size of f(int,5): " << sizeof(f) << "bytes" << "\n";
    std::cout << "size of g(int8_t): " << sizeof(g) << "bytes" << "\n";
    std::cout << "size of h(int16_t): " << sizeof(h) << "bytes" << "\n";
    std::cout << "size of j(int32_t): " << sizeof(j) << "bytes" << "\n";
    std::cout << "size of k(int64_t): " << sizeof(k) << "bytes" << "\n";
    std::cout << "size of l(float): " << sizeof(l) << "bytes" << "\n";
    std::cout << "size of m(double): " << sizeof(m) << "bytes" << "\n";
    std::cout << "size of n(auto,merhaba arkadaslar): " << sizeof(n) << "bytes" << "\n";
    std::cout << "size of o(auto,0): " << sizeof(o) << "bytes" << "\n";
    std::cout << "size of u(auto,5.1): " << sizeof(u) << "bytes" << "\n";
    std::cout << "size of v(wchar_t,þ): " << sizeof(v) << "bytes" << "\n";
    std::cout << "wchar_t v(þ): " << v << "\n";
    
    
    std::cout << "size of boolean: " << sizeof(bool) << "bytes" << "\n";
    std::cout << "size of int: " << sizeof(int) << "bytes" << "\n";

    //////////////////////////////////////////////
    std::cout << "---end of the myfunction8--- \n\n";
    return a;
}

void myfunction9() {
    std::cout << "---start of the myfunction9--- \n";
    //////////////////////////////////////////////
    int a = 2;
    int b(2);
    int c{ 2 };
    std::cout << "int a (int a = 2;) =" << a << "\n";
    std::cout << "int b (int b(2);) =" << b << "\n";
    std::cout << "int c (int c{ 2 };) =" << c << "\n";
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction9--- \n\n";
}

void myfunction10() {
    std::cout << "---start of the myfunction10--- \n";
    //////////////////////////////////////////////
    int a = 2.5;
    int b(2.5);
    //int c{ 2.5 };  //myfunction10_not1
    std::cout << "int a (int a = 2.5;) =" << a << "\n";
    std::cout << "int b (int b(2.5);) =" << b << "\n";
    //std::cout << "int c (int c{ 2.5 };) =" << c << "\n";
    
    // myfunction10_not1:deðiþkenler bu þekilde yazýldýðýnda IDE(Visual Studio) deðiþkenin tür deðiþiminin daha çok önemser.
    // Eðer ki bu satýr(not1 satýrý) açýlýrsa (comment çizgileri silinip satýr çalýþýr hale gelirse)...
    // ...program sayýyý yuvarlayýp direkt göstermek yerine bizi uyaracaktýr
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction10--- \n\n";
}

void myfunction11() {
    std::cout << "---start of the myfunction11--- \n";
    //////////////////////////////////////////////
    //bu fonksiyonda deðiþkenlerin türünü static_cast<>() kullanarak manuel olarak deðiþtiriyoruz
    int a{ 2 };
    float b{ 3.5 };
    char c{ 65 };
    char d{ 'B' };
    std::cout << "char c (65) =" << c << "\n";
    std::cout << "char c (65,static_cast<int>) =" << static_cast<int>(c) << "\n";
    std::cout << "char d ('B') =" << d << "\n";
    std::cout << "char d ('B',static_cast<int>) =" << static_cast<int>(d) << "\n\n";

    std::cout << "int a(2)=" << a << "\n";
    std::cout << "int a(2,static_cast<int>(55.5)) =" << static_cast<int>(55.5) << "\n";
    std::cout << "int a(2)=" << a << "\n";
    a = static_cast<int>(55.5);
    std::cout << "a = static_cast<int>(55.5)" << "\n";
    std::cout << "int a(?)=" << a << "\n\n";

    std::cout << "float b (3.5) =" << b << "\n";
    b = static_cast<int>(b);
    std::cout << "b = static_cast<int>(b)" << "\n";
    std::cout << "float b (?) =" << b << "\n";

    
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction11--- \n\n";
}

void myfunction12() {  //fonksiyonlarda void ön eki fonskiyonun bir þey çýkarmayacaðýný haber verir. Yani "return a;" vs yok.
    std::cout << "---start of the myfunction12--- \n";
    //////////////////////////////////////////////
    int a(0);
    int b(1);
    int c(2);
    std::cout << &a << "\n"; //myfunction12_not1
    std::cout << &b << "\n";
    std::cout << &c << "\n\n";
    
    int* pointerof_a = &a; //myfunction12_not2
    int* pointerof_b = &b;
    int* pointerof_c = &c;    //myfunction12_not3
    //int * pointerof_c = &c; //myfunction12_not3
    //int  *pointerof_c = &c; //myfunction12_not3
    std::cout << "Pointer of a : " << pointerof_a << "\n";
    std::cout << "Pointer of b : " << pointerof_b << "\n";
    std::cout << "Pointer of c : " << pointerof_c << "\n\n";

    std::cout << "pointerof_a real value : " << *pointerof_a << "\n"; //myfunction12_not4
    std::cout << "pointerof_b real value : " << *pointerof_b << "\n";
    std::cout << "pointerof_c real value : " << *pointerof_c << "\n\n";

    std::cout << "pointerof_a's ram address : " << &pointerof_a << "\n"; //myfunction12_not5
    std::cout << "pointerof_b's ram address : " << &pointerof_b << "\n";
    std::cout << "pointerof_c's ram address : " << &pointerof_c << "\n\n";

    std::cout << "*&pointerof_c : " << *&pointerof_c << "\n\n";

    // myfunction12_not1: &(ampersand) iþareti ile bir deðiþkenin ram'de tutulduðu yeri(adresini) görebiliriz)
    // 
    // myfunction12_not2: Bir deðiþkenin ram'de bulunduðu adres hex biçimi ile gösterilir.
    // Bir deðiþkenin ram adresini baþka bir deðiþkene kaydetmek istersek bunu normal bir þekilde yapamayýz.
    // Çünkü hex biçiminde hem sayý hem de harf olabileceði için deðiþkenin ram adresi normal int ile gösterilemez.
    // Bu yüzden int'nin yanýna * iþareti konur.
    // Bu yeni deðiþken tipine pointer denir.
    // Pointer deðiþkenin tutulduðu adresi gösterir.
    // 
    // myfunction12_not3:Bu üç kullaným da aynýdýr. IDE bu üçünü de ayný þekilde görür.
    // 
    // myfunction12_not4: Bir pointer deðiþkeninin soluna * iþareti koyarak o pointerin gösterdiði adresdeki gerçek deðeri bulabiliriz.
    // 
    // myfunction12_not5:Bir deðiþkenin ram adresini bulduðumuz gibi pointerlerin de ram adresini ayný þekilde(soluna & koyarak) bulabiliriz.
    // 
    //////////////////////////////////////////////
    std::cout << "---end of the myfunction12--- \n\n";
}


int main(){
    //typedef int int8_t;
    unsigned char sayi1 = 2,sayi2 = 255,sonuc;
    char testchar1;
    char charstring1[] = "merhabaaa\n";
    char sixcharstring1[6] = "hello";
    char sixcharstring2[7] = "hello\n"; //boþluk ve satýr atlama gibi þeyler de yer kaplar
    std::cout << charstring1;
    testchar1 = sayi1 + sayi2;
    sonuc = sayi1 + sayi2;
    
    myfunction1(10, 5, 65, 2);
    myfunction2(6, 12);
    std::cout << "\n" << "myfunction3: " << myfunction3(5, 60) << "\n";
    myfunction4(5);
    std::cout << "char myfunction4 returns:" << myfunction4(5) << "\n";
    std::cout << "int myfunction5 returns:" << myfunction5(5) << "\n";
    myfunction6();
    myfunction7();
    myfunction8();
    myfunction9();
    myfunction10();
    myfunction11();
    myfunction12();

    return sonuc;

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
