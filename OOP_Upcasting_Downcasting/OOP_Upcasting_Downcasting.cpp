// OOP_Upcasting_Downcasting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Gun {
public:
    //Gun() { std::cout << "-Gun started \n"; }
    //~Gun() { std::cout << "-Gun ended \n"; }
    std::string name{};
    int ammocapacity;
    int currentammo{};
    void fire() {
        std::cout << "FIRE! \n";
    }
};

class AutomaticRifle : public Gun {
public:
    //AutomaticRifle() { std::cout << "-AutomaticRifle started \n"; }
    //~AutomaticRifle() { std::cout << "-AutomaticRifle ended \n"; }
    float firerate{};

};

class AssaultRifle : public AutomaticRifle {
public:
    //AssaultRifle() { std::cout << "-AssaultRifle started \n"; }
    //~AssaultRifle() { std::cout << "-AssaultRifle ended \n"; }
    int Attachment1{};
    int Attachment2{};
};

void PrintName_AutomaticRifle(AutomaticRifle* ARPtr) { std::cout << ARPtr->name << "\n"; }
void PrintName_AssaultRifle(AssaultRifle* ARPtr) { std::cout << ARPtr->name << "\n"; }
void PrintName_Gun(Gun* GunPtr) { std::cout << GunPtr->name << "\n"; }

int main()
{
    AssaultRifle AK47;
    AssaultRifle M4A1;
    AutomaticRifle MG3;
    Gun Gun1;

    AK47.name = "AK47_192620";
    M4A1.name = "M4A1_192620";
    Gun1.name = "Gun_192620";
    MG3.name = "MG3_192620";
    
    Gun* AK47Ptr1 = &AK47; //not1
    AK47.Attachment1 = 133; //not1.1
    AK47Ptr1->ammocapacity = 30;  //not1.2
    std::cout << "AK47.ammocapacity: " << AK47.ammocapacity << "\n";

    AssaultRifle* AK47Ptr2 = (AssaultRifle*) AK47Ptr1; //not2
    AssaultRifle* GunPtr1 = (AssaultRifle*) &Gun1; //not2.1

    std::cout << "GunPtr1->firerate: " << GunPtr1->firerate << "\n"; //not2.2
    std::cout << "AK47Ptr2->Attachment1: " << AK47Ptr2->Attachment1 << "\n"; //not2.3

    PrintName_AssaultRifle(&M4A1); //not3
    PrintName_AutomaticRifle(&MG3); //not3.1
    PrintName_Gun(AK47Ptr1); //not3.2
    PrintName_Gun(&AK47); //not3.3
    PrintName_Gun(&MG3); //not3.4
    
}


    /////////////////////////////////////////////////
    // 
    // not1: Burada upcasting yaparak AssaultRifle s�n�f�na ait AK47 nesnesine Gun s�n�f�na aitmi� gibi bir pointer uygulad�k.
    // Bu sayede upcasting yaparak olu�turdu�umuz pointer'� kullanarak AK47 nesnesindeki sadece Gun s�n�f�na ait �zellikleri kullanabiliriz.
    // ��nk� IDE verdi�imiz nesneyi gun s�n�f�na ait olarak g�r�r ve sadece gun s�n�f�na ait �zellikleri tutar.
    // �rne�in: not1.1'de Assaultrifle s�n�f�na ait Attachment1 de�i�kenini kullanabiliyoruz ama upcasting yaparak olu�turdu�umuz...
    // ...AK47Ptr1'i kulland���m�zda sadece gun s�n�f�na ait �zellikleri kullanabiliyoruz. Ayr�ca s�n�flar�n pointerler�n� kulland���m�zda...
    // ...nokta de�il tire ve b�y�kt�r i�aretini kullan�yoruz(ok'a benziyor).
    // 
    // 
    // not2: Burada da downcasting yap�yoruz. Daha �nceden upcasting yap�larak Gun s�n�f�na cast edilmi�(d���r�lm��) AK47Ptr1 pointer'�n�...
    // ...tekrar AssaultRifle s�n�f�na cast(downcast) ediyoruz. Not2.1 �ok yanl�� bir downcasting �rne�idir. not2.2 sat�r�nda zaten bu hatal�...
    // ...downcasting y�z�nden �ok alakas�z bir sonu�la kar��la��yoruz.
    // 
    // D�KKAT!: AK47Ptr1 zaten bir pointer oldu�u i�in not2 sat�r�nda AK47Ptr1'in sol taraf�na &(ampersand) i�areti koymaya gerek yok. Hatta...
    // ...not2.3 sat�r�n�n d�zg�n �al��mas� i�in & i�areti koymaman�z ZORUNLUDUR. Ben not2 sat�r�nda & i�areti koydu�um i�in yar�m saat...
    // ...not2.3 sat�r� neden yanl�� sonu� veriyor diye d���nd�m. E�er ki ampersand konulursa ne olaca��n� merak ediyorsan koy ve dene!
    // 
    // 
    // not3: Burada bir casting �rne�i var. Ortak s�n�f� kullanan objelerdeki ortak s�n�fa ait bir �eye ihtiyac�m�z oldu�unda...
    // ...not3 ve not3.1'deki gibi t�m nesnelerin s�n�f�na �zel bir fonksiyon yapmam�za gerek yok. not3.2,not3.3 ve not 3.4'de g�rd���m�z gibi...
    // ...fonksiyonun giri� verisini ortak s�n�f yaparak tek fonskiyonla t�m i�i g�rebiliriz.
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
