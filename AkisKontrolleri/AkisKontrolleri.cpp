// AkisKontrolleri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void if_function() {
    
    int a, b;
    std::cout << "Birinci sayiyi giriniz";
    std::cin >> a;
    std::cout << "Ikinci sayiyi giriniz";
    std::cin >> b;
    
    if ((a+b) > 100) {
        std::cout << "a+b>100";
    }
    else if((a+b) < 100){
        std::cout << "a+b<100";
    }
    else if ((a+b) == 100){
        std::cout << "a+b=100";
    }
    else{
        std::cout << "ERROR";
    }
}

void if_function2() {

    int a, b, c;
    std::cout << "Birinci sayiyi giriniz(a) :";
    std::cin >> a;
    std::cout << "Ikinci sayiyi giriniz(b) :";
    std::cin >> b;
    std::cout << "Ucuncu sayiyi giriniz(c) :";
    std::cin >> c;

    if ((a + b) > 100 || (a + b) < 100) {
        std::cout << "a+b>100 veya a+b<100";
    }
    else if ((a + b) == 100) {
        std::cout << "a+b=100";
    }
    else {
        std::cout << "ERROR";
    }
}

void switch_case_function(char a,int sayi1,int sayi2) {
    switch (a)
    {
        case '+':
            std::cout << "cevap: " << sayi1 + sayi2;
            break;
        case '-':
            std::cout << "cevap: " << sayi1 - sayi2;
            break;
        case '*':
            std::cout << "cevap: " << sayi1 * sayi2;
            break;
        case '/':
            std::cout << "cevap: " << sayi1 / sayi2;
            break;
        default:
            std::cout << "Hata";
            break;
    }
}

void for_function(int a) {
    for (int i = 0; i < a; i++){
        std::cout << "Döngü " << i;
    }
}

void while_function() {
    while (true) {
        int sayi1, sayi2;
        char islem,islem2;
        std::cout << "Birinci sayiyi giriniz: " << "\n";
        std::cin >> sayi1;
        std::cout << "Ikinci sayiyi giriniz: " << "\n";
        std::cin >> sayi2;
        std::cout << "Yapacaginiz islemi giriniz: " << "\n";
        std::cin >> islem;

        switch (islem)
        {
        case '+':
            std::cout << "cevap: " << sayi1 + sayi2 << "\n";
            break;
        case '-':
            std::cout << "cevap: " << sayi1 - sayi2 << "\n";
            break;
        case '*':
            std::cout << "cevap: " << sayi1 * sayi2 << "\n";
            break;
        case '/':
            std::cout << "cevap: " << sayi1 / sayi2 << "\n";
            break;
        default:
            std::cout << "Hata";
            break;
        }

        std::cout << "Tekrar islem yapmak ister misiniz?(e/h)" << "\n";
        std::cin >> islem2;
        if (islem2 == 'e' || islem2 == 'E') { std::cout << "isleme devam ediliyor" << "\n"; }
        else if (islem2 == 'h' || islem2 == 'H') { std::cout << "islem yapilmayacak" << "\n"; break; }
        else { std::cout << "Hata" << "\n"; break; }
    }
}

void while_function2() {
    char islem2('e');
    while (islem2 == 'e' || islem2 == 'E') {
        int sayi1, sayi2;
        char islem;
        std::cout << "Birinci sayiyi giriniz: " << "\n";
        std::cin >> sayi1;
        std::cout << "Ikinci sayiyi giriniz: " << "\n";
        std::cin >> sayi2;
        std::cout << "Yapacaginiz islemi giriniz: " << "\n";
        std::cin >> islem;

        switch (islem)
        {
        case '+':
            std::cout << "cevap: " << sayi1 + sayi2 << "\n";
            break;
        case '-':
            std::cout << "cevap: " << sayi1 - sayi2 << "\n";
            break;
        case '*':
            std::cout << "cevap: " << sayi1 * sayi2 << "\n";
            break;
        case '/':
            std::cout << "cevap: " << sayi1 / sayi2 << "\n";
            break;
        default:
            std::cout << "Hata";
            break;
        }

        std::cout << "Tekrar islem yapmak ister misiniz?(e/h)" << "\n";
        std::cin >> islem2;
        if (islem2 == 'e' || islem2 == 'E') { std::cout << "isleme devam ediliyor" << "\n"; }
        else if (islem2 == 'h' || islem2 == 'H') { std::cout << "islem yapilmayacak" << "\n"; }
        else { std::cout << "Hata" << "\n"; }
    }
}

void while_function3() {
    char islem2('e');
    while (islem2 == 'e' || islem2 == 'E') {
        int sayi1, sayi2;
        char islem;
        std::cout << "Birinci sayiyi giriniz: " << "\n";
        std::cin >> sayi1;
        std::cout << "Ikinci sayiyi giriniz: " << "\n";
        std::cin >> sayi2;
        std::cout << "Yapacaginiz islemi giriniz(toplama icin +,cikarma icin -, carpma icin *,bolme icin /,basa donmek icin z): " << "\n";
        std::cin >> islem;

        if (islem == 'z' || islem == 'Z') { continue; } //continue komutu döngüyü anında başa döndürür

        switch (islem)
        {
        case '+':
            std::cout << "cevap: " << sayi1 + sayi2 << "\n";
            break;
        case '-':
            std::cout << "cevap: " << sayi1 - sayi2 << "\n";
            break;
        case '*':
            std::cout << "cevap: " << sayi1 * sayi2 << "\n";
            break;
        case '/':
            std::cout << "cevap: " << sayi1 / sayi2 << "\n";
            break;
        default:
            std::cout << "Hata";
            break;
        }

        std::cout << "Tekrar islem yapmak ister misiniz?(e/h)" << "\n";
        std::cin >> islem2;
        if (islem2 == 'e' || islem2 == 'E') { std::cout << "isleme devam ediliyor" << "\n"; }
        else if (islem2 == 'h' || islem2 == 'H') { std::cout << "islem yapilmayacak" << "\n"; }
        else { std::cout << "Hata" << "\n"; }
    }
}

void while_function4() {
    char islem2('e');
    while (islem2 == 'e' || islem2 == 'E') {
        int sayi1, sayi2;
        char islem;
        std::cout << "Birinci sayiyi giriniz: " << "\n";
        std::cin >> sayi1;
        std::cout << "Ikinci sayiyi giriniz: " << "\n";
        std::cin >> sayi2;
        std::cout << "Yapacaginiz islemi giriniz(+,-,*,/,basa donmek icin z,cikmak icin e,gecmek icin p): " << "\n";
        std::cin >> islem;

        if (islem == 'z' || islem == 'Z') { continue; } //continue komutu döngüyü anında başa döndürür
        else if (islem == 'e' || islem == 'E') { goto cikis2; } //goto komutu ile döngünün tamamı geçilebilir
        else if (islem == 'p' || islem == 'P') { goto cikis1; } //goto komutu ile döngüdeki bazı satırlar atlanabilir

        switch (islem)
        {
        case '+':
            std::cout << "cevap: " << sayi1 + sayi2 << "\n";
            break;
        case '-':
            std::cout << "cevap: " << sayi1 - sayi2 << "\n";
            break;
        case '*':
            std::cout << "cevap: " << sayi1 * sayi2 << "\n";
            break;
        case '/':
            std::cout << "cevap: " << sayi1 / sayi2 << "\n";
            break;
        default:
            std::cout << "Hata";
            break;
        }

    cikis1:
        std::cout << "Tekrar islem yapmak ister misiniz?(e/h)" << "\n";
        std::cin >> islem2;
        if (islem2 == 'e' || islem2 == 'E') { std::cout << "isleme devam ediliyor" << "\n"; }
        else if (islem2 == 'h' || islem2 == 'H') { std::cout << "islem yapilmayacak" << "\n"; }
        else { std::cout << "Hata" << "\n"; }

    }
cikis2:
    std::cout << "while_function_4 sonu";
}

void do_while_function() {
    int a; //do while komutunda ilk önce kod çalışır sonra şart kontrol edilir. Böylece şart yanlış bile olsa en az 1 kere çalışır.
    do
    {
        std::cout << "Sayi giriniz(0'dan kucuk olmasi lazim)";
        std::cin >> a;
    } while (a<0);
}


int main()
{
    while_function4();
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
