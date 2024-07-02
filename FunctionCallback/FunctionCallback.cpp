// FunctionCallback.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using f_2int = int(*)(int, int); //not16

int return1() { return 1; }
int topla(int a, int b) { return a + b; }
int multiplybytwo(int(*functionname)(int, int)) { return functionname(5, 10) * 2; }
int topla_and_return(int a, int b) { std::cout << "\ntoplama islemi:" << a + b; return a + b; }
void printfunction(int(*inputfunction)(int, int),int a,int b) { std::cout << inputfunction(a,b); } //not2.1
void printfunction2(f_2int inputfunction, int a, int b) { std::cout << inputfunction(a, b); } //not2.2
void print_int(int sayi1) { std::cout << "\nint printing: " << sayi1; }


int main()
{
    printfunction(topla, 5, 12);
    std::cout << "\ncevap: " << topla(return1(), return1());
    std::cout << "\n" << multiplybytwo(topla); //not3
    print_int(topla(12,7)); //not3
    print_int(topla_and_return(12, 7)); //not3
}

/////////////////////////////////////////////////
// NOTLAR
// --Burada Callback function yapmaya çalýþtým ama not3'deki gibi yazýnca da çalýþtý...
// ...niye bilmiyorum. Callback function ne iþe yarýyor tam anlamadým
// 
// not1:Burada using özelliðini kullanarak bir callbackfunction için örnek ön ek tarzý bir þey oluþturdum...
// ...bu sayede not2.1'deki uzun uzun yazmak yerine not2.2'deki gibi kýsa yazabiliyoruz
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
