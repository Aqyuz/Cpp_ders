// OOP_Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Gun {
    public:
        Gun(){ std::cout << "-Gun started \n"; }
        ~Gun() { std::cout << "-Gun ended \n"; }
        std::string name{};
        int ammocapacity;
        int currentammo{};
        void fire() {
            std::cout << "FIRE! \n";
        }
};

class AutomaticRifle : public Gun { //not1
    public:
        AutomaticRifle() { std::cout << "-AutomaticRifle started \n"; }
        ~AutomaticRifle() { std::cout << "-AutomaticRifle ended \n"; }
        float firerate{};

};

class AssaultRifle : public AutomaticRifle {
    public:
        AssaultRifle() { std::cout << "-AssaultRifle started \n"; }
        ~AssaultRifle() { std::cout << "-AssaultRifle ended \n"; }
        int Attachment1{};
        int Attachment2{};
};

int main()
{
    AutomaticRifle AK47; //not2
    AK47.fire();

    AssaultRifle AK_47; //not3
    AK_47.fire();
}

    /////////////////////////////////////////////////
    // 
    // not1: sınıfların adının yanına ": public <classismi>" yazarak o sınıfa başka sınıftan metodlar ekleyebiliriz.
    // 
    // not2: Burada AutomaticRifle sınıfından bir AK47 nesnesi oluşturdum ve bir sonraki satırda AutomaticRifle sınıfının...
    // ...Gun sınıfından aldığı fire() metodunu kullandım.
    // 
    // not3: Burada da AssaultRifle sınıfından bir AK_47 nesnesi oluşturdum ve bir sonraki satırda da AutomaticRifle sınıfının...
    // ...Gun sınıfından aldığı fire() metodunu kullandım. Bir sınıf sadece ebeveyninden değil ebeveyninin ebeveyninden de özellik alabilir.
    // Aynı canlılarda olduğu gibi sınıflar da atasının atasının atasının... atasından aldığı özelliği alabilir.
    // 
    // BTK C++ Dersinde 6.11, 6.12 ve 6.13 derslerinde constructor-destructor ve pointer ile alakalı dersler var
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
