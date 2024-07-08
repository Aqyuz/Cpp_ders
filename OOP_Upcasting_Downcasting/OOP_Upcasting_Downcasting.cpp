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
    // not1: Burada upcasting yaparak AssaultRifle sýnýfýna ait AK47 nesnesine Gun sýnýfýna aitmiþ gibi bir pointer uyguladýk.
    // Bu sayede upcasting yaparak oluþturduðumuz pointer'ý kullanarak AK47 nesnesindeki sadece Gun sýnýfýna ait özellikleri kullanabiliriz.
    // Çünkü IDE verdiðimiz nesneyi gun sýnýfýna ait olarak görür ve sadece gun sýnýfýna ait özellikleri tutar.
    // Örneðin: not1.1'de Assaultrifle sýnýfýna ait Attachment1 deðiþkenini kullanabiliyoruz ama upcasting yaparak oluþturduðumuz...
    // ...AK47Ptr1'i kullandýðýmýzda sadece gun sýnýfýna ait özellikleri kullanabiliyoruz. Ayrýca sýnýflarýn pointerlerýný kullandýðýmýzda...
    // ...nokta deðil tire ve büyüktür iþaretini kullanýyoruz(ok'a benziyor).
    // 
    // 
    // not2: Burada da downcasting yapýyoruz. Daha önceden upcasting yapýlarak Gun sýnýfýna cast edilmiþ(düþürülmüþ) AK47Ptr1 pointer'ýný...
    // ...tekrar AssaultRifle sýnýfýna cast(downcast) ediyoruz. Not2.1 çok yanlýþ bir downcasting örneðidir. not2.2 satýrýnda zaten bu hatalý...
    // ...downcasting yüzünden çok alakasýz bir sonuçla karþýlaþýyoruz.
    // 
    // DÝKKAT!: AK47Ptr1 zaten bir pointer olduðu için not2 satýrýnda AK47Ptr1'in sol tarafýna &(ampersand) iþareti koymaya gerek yok. Hatta...
    // ...not2.3 satýrýnýn düzgün çalýþmasý için & iþareti koymamanýz ZORUNLUDUR. Ben not2 satýrýnda & iþareti koyduðum için yarým saat...
    // ...not2.3 satýrý neden yanlýþ sonuç veriyor diye düþündüm. Eðer ki ampersand konulursa ne olacaðýný merak ediyorsan koy ve dene!
    // 
    // 
    // not3: Burada bir casting örneði var. Ortak sýnýfý kullanan objelerdeki ortak sýnýfa ait bir þeye ihtiyacýmýz olduðunda...
    // ...not3 ve not3.1'deki gibi tüm nesnelerin sýnýfýna özel bir fonksiyon yapmamýza gerek yok. not3.2,not3.3 ve not 3.4'de gördüðümüz gibi...
    // ...fonksiyonun giriþ verisini ortak sýnýf yaparak tek fonskiyonla tüm iþi görebiliriz.
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
