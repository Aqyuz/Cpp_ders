// OOP_Referance_and_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class numberclass {
    
    public:
        int classint1{ 20 };
        int classint2{};
        int classint3;

};


void testfunc(numberclass& ref1,numberclass* pointer1) { //testfuncnot1

    std::cout << "ref1.classint1: " << ref1.classint1 << "\n";
    std::cout << "pointer1: " << pointer1 << "\n";

}

int main()
{
    numberclass myclass1;
    numberclass* myclass1ptr = &myclass1; //not1
    std::cout << myclass1ptr << "\n\n";

    int& classint1reference = myclass1.classint1; //not2
    std::cout << "-classint1reference: " << classint1reference << "\n";
    std::cout << "-myclass1.classint1: " << myclass1.classint1 << "\n\n";
    classint1reference = 15; //not3
    std::cout << "classint1reference = 15;" << "\n";
    std::cout << "-classint1reference: " << classint1reference << "\n"; //not3.1
    std::cout << "-myclass1.classint1: " << myclass1.classint1 << "\n\n"; //not3.2

    classint1reference = 37; 
    std::cout << "classint1reference = 37;" << "\n";
    std::cout << "-classint1reference: " << classint1reference << "\n"; 
    std::cout << "-myclass1.classint1: " << myclass1.classint1 << "\n\n";

    numberclass& myclass1reference = myclass1; //not4
    myclass1reference.classint1 = 45; //not4.1

    std::cout << "numberclass& myclass1reference = myclass1;" << "\n";
    std::cout << "myclass1reference.classint1 = 45;" << "\n";
    std::cout << "-myclass1reference.classint1: " << myclass1reference.classint1 << "\n";
    std::cout << "-classint1reference: " << classint1reference << "\n";
    std::cout << "-myclass1.classint1: " << myclass1.classint1 << "\n\n";

    testfunc(myclass1reference,myclass1ptr); //testfuncnot1.1
    testfunc(myclass1,&myclass1); //testfuncnot1.2

}


/////////////////////////////////////////////////
// 
// not1: S�n�flar�n da ram adresi bulunabilir ve pointer ile bir de�i�kene atanabilir.
// 
// not2: Bu bir reference(referans) �rne�idir. Ad�ndan da belli oldu�u gibi ba�ka bir de�i�keni referans eder.
// 
// not3: Referansa uygulanan de�i�iklik referans edilen de�i�kene de uygulan�r. Bu sat�rda sadece referansa 15 de�erini atamam�za ra�men...
// ...not3.1 ve not3.2'deki de�erler ayn�d�r. �lk c�mlede de bahsetti�im gibi, referansta yap�lan de�i�iklik referans edilen(orijinal)...
// ...de�i�kene de uygulan�r.
// 
// not4: S�n�flardan olu�turdu�umuz nesnelerin de referens� olabilir. not4.1'de nesnenin referans�na uygulad���m de�i�iklik...
// ...nesnenin kendisine de uygulan�r. Ayn� di�er referanslarda oldu�u gibi.
// 
// testfuncnot1: S�n�flar�n referans� ve ram adresleri fonskiyonlara aktar�labilir.
// testfuncnot1.1: fonksiyon taraf�ndan istenen referans ve pointer(ram adresi9 uygun de�i�kenler kullan�larak aktar�labilir.
// testfuncnot1.2: fonksiyon taraf�ndan istenen referans yerine bizzat nesnenin kendisi de yaz�labilir. Ayr�ca fonksiyon taraf�ndan istenen...
// ...pointer de�erine direkt olarak ram adresi de verilebilir. �rnekte myclass1'in soluna &(ampersand) i�areti koyarak myclass1'in...
// ...ram adresini fonksiyona g�nderdik.
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
