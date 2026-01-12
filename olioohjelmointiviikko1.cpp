
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Osa 3: Funktio, jossa on parametri
int game(int maxnum)
{
    int secret;      // etsittävä luku
    int guess;       // pelaajan arvaus
    int count = 0;   // arvausten määrä

    // Arvotaan satunnainen luku väliltä 1–maxnum
    secret = rand() % maxnum + 1;

    // Peli jatkuu kunnes arvaus on oikein
    do
    {
        cout << "Arvaa luku (1-" << maxnum << "): ";
        cin >> guess;
        count++;

        if (guess < secret)
        {
            cout << "Liian pieni!" << endl;
        }
        else if (guess > secret)
        {
            cout << "Liian suuri!" << endl;
        }
        else
        {
            cout << "Oikein!" << endl;
        }

    } while (guess != secret);

    // Palautetaan arvausten määrä
    return count;
}

int main()
{
    // Satunnaislukugeneraattorin alustus
    srand(time(0));

    int attempts;

    // Kutsutaan funktiota
    attempts = game(40);

    // Tulostetaan arvauskertojen määrä
    cout << "Arvasit oikein " << attempts << " yrityksella." << endl;

    return 0;
}

