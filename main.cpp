#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                        // hibás változónév, NELEMENTS helyett N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; // aposztróf helyett idézőjel kell és hiányzik a sorlezárás("<< std::endl;")
    for (int i = 0; i < N_ELEMENTS; i++)                 // hibás szintaxis a ciklusban
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // a feltételnek "i < N_ELEMENTS" -nek kell lennie
    {
        std::cout << "Ertek: " << b[i] << std::endl; // hiányzik maga a kiírandó érték
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;                       // az átlag változónak kezdőértéket kell adni
    for (int i = 0; i < N_ELEMENTS; i++) // hibás szintaxis a cikluson belül
    {
        atlag += b[i]; // hiányzik a pontosvessző a sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // hiányzik a dinamikus memóriának felszabadítása
    std::cout << "Minden hiba javításra került!" << std::endl;
    return 0;
}
