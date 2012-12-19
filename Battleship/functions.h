#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QTextStream>
#include <QCoreApplication>
#include <QString>
#include <Qt>
#include <QByteArray>
#include <QChar>

extern QTextStream cout;
extern QTextStream cin;

extern QString player1;
extern QString player2;
extern QString player1Grid[10][10]; //where player1's ships will be placed
extern QString player1HitGrid[10][10]; //where player1's hits will be marked
extern QString player2Grid[10][10]; //where player2's or computers ships will be placed
extern QString player2HitGrid[10][10]; //where player2's or computers hits will be marked

void initializeGrid(QString grid[10][10]);
int initialPromptGameSelection();
void promptPlayAgainstComputer();
void promptPlayAgainstPerson();
void promptAircraftCarrier(QString grid[10][10]);
void promptBattleship(QString grid[10][10]);
void promptSubmarine(QString grid[10][10]);
void promptDestroyer(QString grid[10][10]);
void promptPatrolBoat(QString grid[10][10]);
void setupComputer(QString grid[10][10]);
void displayGrid(QString grid[10][10]);
void playComputer();
void playFriend();
bool markGuess(QString grid[10][10], QString computerGrid[10][10], QString coord, QString& message);
bool markComputerGuess(QString grid[10][10], int x, int y, QString& message);
bool checkGameOver(QString playerGrid[10][10], QString computerGrid[10][10], QString& message);
void clearScreen();


#endif // FUNCTIONS_H
