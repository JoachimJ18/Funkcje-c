// Funkcje c++
#include <iostream>
using namespace std;
//typ_zwracany nazwa(parametry) 
//{
//
//}

//int dodawanie(int a, int b)
//{
//    return a + b;
//}
//void fun1(int x, int y) {
//    cout << dodawanie(x, y) << endl;
//}

//bool testPrime(int i) 
//{
//    bool p = true;
//    if (i < 2) p = false;
//    if ((i != 2) && (i % 2 == 0)) p = false;
//    if (i != 2) {
//        int dzielnik = 3;
//        while (dzielnik < ceil(sqrt(i))) {
//            if (i % dzielnik == 0) {
//                p = false;
//                break;
//            }
//            dzielnik += 2;
//        }
//    }
//    if (p) return true;
//    else false;
//}

//int NWD(int, int); //prototyp funkcji - zapowiedz

//void fun1(int a) { //przekazanie parametru przez wartosc
//    a++;
//    cout << a << endl;
//}
//void fun2(int &a) { //przekazanie przez referencje
//    a++;
//    cout << a << endl;
//}

int powerModulo(int, int, int);
int testFermata(int, int);
int silnia(int);
int fibo(int);
int silniaIte(int);

int main()
{
    /*cout <<dodawanie(2,3)<<endl;
    fun1(3, 4);
    int w = 4, z = 5;
    fun1(w, z);*/

    /*int x = 101;
    cout << testPrime(x) << endl;
    x = 1011;
    cout << testPrime(x) << endl;*/

    /*for (int i = 1001; i < 2000; i += 2) {
        if(testPrime(i)) cout<<i<<" "<<endl;
    }
    cout << endl;*/

    /*int wynik = NWD(24, 8);
    cout << wynik << endl;*/
    
    int x = 1256;
    //cout << x << endl;
    ////fun1(x);
    //fun2(x);
    //cout << x << endl;

    /*int &y = x;
    cout << x << endl;
    y++;
    cout << x << endl;*/

    /*cout << powerModulo(12, 53, 7) << endl;*/

    /*if (testFermata(x, 10) == 1) {
        cout << "Liczba "<<x<< " jest prawdopodobnie pierwsza" << endl;
    }
    else {
        cout << "Liczba " << x << " prawdopodobnie nie jest pierwsza" << endl;
    }*/

    cout << silnia(8) << endl;
    cout << fibo(10) << endl;
    cout << silniaIte(8) << endl;
    return 0;
}

//int NWD(int a, int b)
//{
//    int i = 0;
//    int w;
//    while (b != 0) {
//        w = b;
//        b = a % b;
//        a = w;
//        i++;
//    }
//
//}
//Test pierwszości - test Fermata
/*to probabilistyczny test umożliwiający sprawdzenie czy dana liczba jest złożona
czy prawdopodobnie pierwsza
Twierdzenie
Jeśli liczba p jest liczbą pierwszą to dla każdego a takiej, że 1<=a<p  a należy do [1,p)
a^(p-1) mod p = 1
Problem: jak szybko podnosić liczbę a do potęgi i wykonać operację modulo?
Odpowiedź: algorytm szybkiego potęgowania modularnego
a^b mod n  dla a>=n
a^b mod n = (a mod n)^b
założenie: b=(bm,..b1,b0) w zapisie binarnym
a^b mod n = (a^(b0*2^0) mod n * ... * (a^(bm*2^m) mod n)
wiadomo również, że: a^2^m mod n = (a^2^(m-1)*a^2^(m-1)) mod n
oraz a mod n = (x mod n)(y mod n), gdzie a = xy
a^b mod n =(((a·a mod n)·a mod n) ... )·a mod n
Wynika z tego, że musimy przemnożyć tylko te bity, których wartość wynosi 1
Przykład:
12^53 mod 7
53=(110101)
a=12 mod 7 = 5
res=1
x=a
b0=1 -> res = 1 * 5 mod 7 = 5, x = 5 * 5 mod 7 = 4
b1=0 -> x = 4 * 4 mod 7 = 2
b2=1 -> res = 5 * 2 mod 7 = 3, x = 2 * 2 mod 7 = 4
b3=0 -> x = 4 * 4 mod 7 = 2
b4=1 -> res = 3 * 2 mod 7 = 6, x = 2 * 2 mod 7 = 4
b5=1 -> res = 6 * 4 mod 7 = 3, x = 4 * 4 mod 7 = 2
*/

//int powerModulo(int a, int b, int n) {
//    int res = 1;
//    int x = a % n;
//    for (int i = 1; i <= b; i <<= 1){
//        x = x % n;
//        if ((b & i) != 0) {//czy na i-tej pozycji jest 0 czy 1 w zapisie binarnym liczby b
//            res *= x;
//            res %= n;
//        }
//        x *= x;
//    }
//    return res;
//}
//
//int testFermata(int p, int k) 
//{
//    int a, i;
//    srand(time(NULL));
//    if (p <= 1) return 0;
//    if (p < 4) {
//        return 1;
//    }
//    for (i = 0; i < k; i++) {
//        a = (rand() % (p - 1)) + 1;
//        cout << a << endl;
//        if (powerModulo(a, p - 1, p) != 0) {
//            return 0;
//        }
//    }
//    return 1;
//}

//Rekurencja - zdolność funkcji do wykonywania samej siebie
// Przykład - silnia
int silnia(int n) {
    if (n == 0) return 1;
    return silnia(n - 1) * n;
};
//Ciąg fibonacciego
int fibo(int n) {
    if ((n == 1) || (n == 2)) return 1;
    return fibo(n - 1) + fibo(n - 2);
};
//zadanie1
int silniaIte(int n) {
    int wynik = 1;
    if (n == 0) cout << "1" << endl;
    else
    {
        while (n > 0) {
            wynik *= n;
            n--;
        }
        cout << wynik << endl;
    }
    return 0;
};