// OOP_Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Users {
private:
    const int ID_1 = 001; //const saðýna yazýlan þeyi deðiþtirilmez yapar. ID_1 artýk bir deðiþken deðil sabittir.
    const int ID_2 = 002;
    const int ID_3 = 003;
public:
    int ID_Count = 3;
    int getID_Count() const { //bu þekilde yazýlan const fonksiyonun içinde herhangi bir deðer deðiþtirilmeyecek demektir.
        //ID_Count = 50;      //bu satýr comment olmaktan çýkarýlýrsa bu yüzden hata verir.
        return ID_Count; }
};

class UserCode {
public:
    int user1 = 6201;
    int user2 = 1362;
    int user3 = 9743;
    int* user1ptr = &user1;
    void changeuser1number(int inputnumber) { user1 = inputnumber; }
    void printuser1number() const { std::cout << user1; } //bu ve bir alttaki metodlar zaten bir þey deðiþtimeyecekleri için const yapýldýlar.
    int getuser1number() const { return user1; }
    int* getuser1numberptr() const { return user1ptr; }
    const int* getuser1numberptr2() { return user1ptr; } //metodlarda en sola yazýlan const o metodun return ettiði þeyin deðiþtirilmeyeceði anlamýna gelir.satýr51
    void myfunction1(UserCode* UCPtr) { UCPtr->user1 = 15; }
    //void myfunction2(const UserCode* UCPtr) { UCPtr->user1 = 15; } //input pointer'ýn en solunda yazdýðýmýz const o pointer'ýn iþaret ettiði deðeri deðiþtirmemizi engeller.
    //void myfunction3(UserCode* const UCPtr) { UCPtr->user1 = 15; UCPtr = &user1; } //ortaya yazýlan const ise iþaret edilen deðerin deðiþtirilebilir ancak pointer'ýn kendisi deðiþtirilemez demektir.
    void myfunction4(UserCode* UCPtr) { UCPtr->user1 = 15; user1 = 25; }
    //void myfunction5(UserCode* UCPtr) const { UCPtr->user1 = 15; user1 = 25; }
    void myfunction6(UserCode* UCPtr) { UCPtr->user1 = 15; user1 = 25; }
    const void myfunction7(UserCode* UCPtr) { UCPtr->user1 = 15; user1 = 25; } //bu satýrda garip bir þekilde void bir metodu const yaptým. Ne iþe yarýyor bilmiyorum.
};

int main()
{
    const int number1 = 5;
    //number1 = 6; //bu satýrý comment olmaktan çýkarýrsak yukarýdaki satýrda number1'i sabit bir deðer yaptýðýmýz için IDE bize hata verecektir.

    const UserCode UserCode1; //bir sýnýftan nesne oluþtururken en sola const yazarsak o nesneden hiçbir þey deðiþtiremeyiz anlamýna gelir.
    UserCode UserCode2;
    //UserCode1.user1 = 5; // burada görüldüðü üzere user1 deðiþkeni hem const hem de private olmamasýna raðmen deðiþtirmeye çalýþýnca hata veriyor çünkü UserCode1 nesnesi bir sabit nesne.
    UserCode2.user1 = 5;

    Users Users1;
    std::cout << UserCode2.getuser1number() << "\n";
    *(UserCode2.getuser1numberptr()) = 20;
    //*(UserCode2.getuser1numberptr2()) = 20; //bu metodun en solunda const ibaresi var ve biz bu satýrda metodun return ettiði þeyi deðiþtirmeye çalýþtýðýmýz için hata veriyor.
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
