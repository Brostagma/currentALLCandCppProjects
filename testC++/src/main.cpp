#include <iostream>
#include <array>
using namespace std;

int degerDegistir(int *ptr, int eklenecekDeger) {
    cout << "Değer değiştirildi.\n"
     << "Önceki değer: " << *ptr << '\n'
     << "Yeni değer: " << *ptr + eklenecekDeger << '\n';
    return *ptr += eklenecekDeger;
}

int degis(int a) {
    return a += 15;
}

string kelimeEkle(string *ptr, string eklenecekKelime) {
    cout << "Kelime eklendi.\n"
     << "Eklenmeden önceki kelime: " << *ptr << '\n'
     << "Eklendikten sonraki kelime: " << *ptr + " " + eklenecekKelime << '\n';
    return *ptr + " " + eklenecekKelime;
}

int arrayDegerDegistir(int ptr[], int degistirilecekAdres, int yeniDeger) {
    cout << &ptr[0] << '\n';
    return ptr[degistirilecekAdres] = yeniDeger;
}

void fizikselBellekAdresiGoster(int *ptr) {
    cout << "Fiziksel Bellek Adresi: " << ptr << '\n';
}

void fizikselBellekAdresiGoster(string *ptr) {
    cout << "Fiziksel Bellek Adresi: " << ptr << '\n';
}

void fizikselBellekAdresiGoster(int ptr[], int gosterilecekAdres) {
    cout << gosterilecekAdres << ": Array Sırasının Fiziksel Bellek Adresi: " << &ptr[gosterilecekAdres - 1] << '\n';
}

void ArrayTumSiraFizikselAdresiGoster(int ptr[],int uzunluk) {
    for(int i = 0; i < uzunluk; i++) {
        cout << &ptr[i] << '\n';
    }
}

int main() {

    int a = 15;
    degerDegistir(&a, 100);
    cout << a << '\n'; 
    fizikselBellekAdresiGoster(&a);

    string name = "Hello";
    cout << kelimeEkle(&name,"World!") << '\n';
    fizikselBellekAdresiGoster(&name);

    int array[5] = {1,2,3,4,5};
    cout << arrayDegerDegistir(array,2,15) << '\n';
    fizikselBellekAdresiGoster(array,3);
    ArrayTumSiraFizikselAdresiGoster(array,5);
    return 0;
}