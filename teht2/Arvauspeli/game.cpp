#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max)
{
    cout << "Game constructor called" << endl;

    maxNumber = max;
    numOfGuesses = 0;

    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;

    cout << "Random number generated between 1 and " << maxNumber << endl;
}

Game::~Game()
{
    cout << "Game destructor called" << endl;
}

void Game::play()
{
    cout << "Game play() started" << endl;

    do
    {
        cout << "Guess a number between 1 and " << maxNumber << ": ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber)
        {
            cout << "Your guess is too small" << endl;
        }
        else if (playerGuess > randomNumber)
        {
            cout << "Your guess is too big" << endl;
        }

    } while (playerGuess != randomNumber);

    cout << "Correct guess!" << endl;
    printGameResult();
}

void Game::printGameResult()
{
    cout << "printGameResult() called" << endl;
    cout << "You guessed the right number: " << randomNumber << endl;
    cout << "Number of guesses: " << numOfGuesses << endl;
}
