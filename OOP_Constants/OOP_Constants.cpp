// OOP_Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Users {
private:
    const int ID_1 = 001; //const sa��na yaz�lan �eyi de�i�tirilmez yapar. ID_1 art�k bir de�i�ken de�il sabittir.
    const int ID_2 = 002;
    const int ID_3 = 003;
public:
    int ID_Count = 3;
    int getID_Count() const { //bu �ekilde yaz�lan const fonksiyonun i�inde herhangi bir de�er de�i�tirilmeyecek demektir.
        //ID_Count = 50;      //bu sat�r comment olmaktan ��kar�l�rsa bu y�zden hata verir.
        return ID_Count; }
};

class UserCode {
public:
    int user1 = 6201;
    int user2 = 1362;
    int user3 = 9743;
    int* user1ptr = &user1;
    void changeuser1number(int inputnumber) { user1 = inputnumber; }
    void printuser1number() const { std::cout << user1; } //bu ve bir alttaki metodlar zaten bir �ey de�i�timeyecekleri i�in const yap�ld�lar.
    int getuser1number() const { return user1; }
    int* getuser1numberptr() const { return user1ptr; }
    const int* getuser1numberptr2() { return user1ptr; } //metodlarda en sola yaz�lan const o metodun return etti�i �eyin de�i�tirilmeyece�i anlam�na gelir.sat�r51
    void myfunction1(UserCode* UCPtr) { UCPtr->user1 = 15; }
    //void myfunction2(const UserCode* UCPtr) { UCPtr->user1 = 15; } //input pointer'�n en solunda yazd���m�z const o pointer'�n i�aret etti�i de�eri de�i�tirmemizi engeller.
    //void myfunction3(UserCode* const UCPtr) { UCPtr->user1 = 15; UCPtr = &user1; } //ortaya yaz�lan const ise i�aret edilen de�erin de�i�tirilebilir ancak pointer'�n kendisi de�i�tirilemez demektir.
    void myfunction4(UserCode* UCPtr) { UCPtr->user1 = 15; user1 = 25; }
    //void myfunction5(UserCode* UCPtr) const { UCPtr->user1 = 15; user1 = 25; }
    void myfunction6(UserCode* UCPtr) { UCPtr->user1 = 15; user1 = 25; }
    const void myfunction7(UserCode* UCPtr) { UCPtr->user1 = 15; user1 = 25; } //bu sat�rda garip bir �ekilde void bir metodu const yapt�m. Ne i�e yar�yor bilmiyorum.
};

int main()
{
    const int number1 = 5;
    //number1 = 6; //bu sat�r� comment olmaktan ��kar�rsak yukar�daki sat�rda number1'i sabit bir de�er yapt���m�z i�in IDE bize hata verecektir.

    const UserCode UserCode1; //bir s�n�ftan nesne olu�tururken en sola const yazarsak o nesneden hi�bir �ey de�i�tiremeyiz anlam�na gelir.
    UserCode UserCode2;
    //UserCode1.user1 = 5; // burada g�r�ld��� �zere user1 de�i�keni hem const hem de private olmamas�na ra�men de�i�tirmeye �al���nca hata veriyor ��nk� UserCode1 nesnesi bir sabit nesne.
    UserCode2.user1 = 5;

    Users Users1;
    std::cout << UserCode2.getuser1number() << "\n";
    *(UserCode2.getuser1numberptr()) = 20;
    //*(UserCode2.getuser1numberptr2()) = 20; //bu metodun en solunda const ibaresi var ve biz bu sat�rda metodun return etti�i �eyi de�i�tirmeye �al��t���m�z i�in hata veriyor.
    std::cout << UserCode2.getuser1number() << "\n";
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
