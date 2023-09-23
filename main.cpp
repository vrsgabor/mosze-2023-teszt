#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];           // hibás változónév, NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // hiányzik a pontosvessző és a sorlezárás("<< std::endl;")
        for (int i = 0;)                   // hibás szintaxis a ciklusban
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // a feltételnek "i < N_ELEMENTS" -nek kell lennie
    {
        std::cout << "Ertek:" // hiányzik maga a kiírandó érték
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                           // az átlag változónak kezdőértéket kell adni
    for (int i = 0; i < N_ELEMENTS, i++) // hibás szintaxis a cikluson belül
    {
        atlag += b[i] // hiányzik a pontosvessző a sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // hiányzik a dinamikus memóriának felszabadítása

    return 0;
}
