#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct baller {char* name; float pointsPerGame;};

struct baller exampleBaller(){
    struct baller newBaller;
    char* names[] = {"Michael Jordan", "Allen Iverson", "Jerry West", "Kevin Durant", "LeBron James", "Elgin Baylor", "George Gervin", "Stephen Curry", "Hakeem Olajuwon", "Kobe Bryant", "Bob Pettit", "Dominique Wilkins", "Russell Westbrook", "Dirk Nowitzki", "Damian Lillard", "Rick Barry", "Karl Malone", "Bernard King", "Carmelo Anthony", "Alex English", "Kareem Abdul-Jabbar", "Shaquille O'Neal", "Paul Arizin", "George Mikan", "Larry Bird", "Kyrie Irving", "Charles Barkley", "Giannis Antetokounmpo", "David Thompson", "Bob Love", "James Harden", "Elvin Hayes", "Derrick Rose", "Bradley Beal", "Isaiah Thomas", "Wilt Chamberlain", "Dwyane Wade", "Oscar Robertson", "Tracy McGrady", "Moses Malone", "John Havlicek", "DeMar DeRozan", "Julius Erving", "John Wall", "Marques Johnson", "Jo Jo White", "Doug Collins", "Adrian Dantley", "Lou Hudson", "Blake Griffin"};
    float ppg[] = {33.45, 29.73, 29.13, 29.09, 28.92, 27.04, 26.98, 26.50, 25.90, 25.64, 25.45, 25.41, 25.40, 25.26, 24.82, 24.77, 24.67, 24.54, 24.5, 24.43, 24.31, 24.31, 24.2, 24, 23.76, 23.52, 23.03, 22.97, 22.93, 22.89, 22.88, 22.85, 22.7, 22.68, 22.56, 22.54, 22.34, 22.21, 22.18, 22.10, 21.95, 21.91, 21.90, 21.89, 21.54, 21.5, 21.47, 21.34, 21.31, 21.17};
    int randIndex = rand() % 50;
    newBaller.name = names[randIndex];
    newBaller.pointsPerGame = ppg[randIndex];
    return newBaller;
}

void printBaller(struct baller newBaller){
    printf("%s has a career average of %f points per game in the playoffs!\n", newBaller.name, newBaller.pointsPerGame);
}

void modifyBaller(struct baller* newBaller, char* newName, float newPPG){
    newBaller->name = newName;
    newBaller->pointsPerGame = newPPG;
}

int main(){
    srand(time(NULL));

    struct baller test1 = exampleBaller();
    printBaller(test1);
    printf("\n");

    struct baller test2 = exampleBaller();
    printBaller(test2);
    printf("\n");
    
    struct baller test3 = exampleBaller();
    printBaller(test3);
    printf("\n");

    return 0;
}