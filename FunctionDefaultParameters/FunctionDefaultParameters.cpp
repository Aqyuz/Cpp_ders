// FunctionDefaultParameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> //string kullanabilmek için bu kütüphane kullanılmalıdır

void printmessage(std::string message = "No Message") { std::cout << message << "\n"; } //Not1
void totalbet(int currentbet ,int inputbet = 0){ std::cout << "Total bet is: " << currentbet + inputbet << "\n"; }

int main()
{
    printmessage();
    printmessage("Merhaba benim adim yoshigake kira");
    totalbet(50);

}

/////////////////////////////////////////////////
// NOTLAR
// Not1:Fonksiyonların giriş parametrelerine bu şekilde (= işareti kullanıp değer yazılarak) default bir değer girilebilir.
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
