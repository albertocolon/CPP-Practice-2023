// This program calculates the number of soccer teams that a youth league may create from the number of
// available players. Input validation is demonstrated with While Loops. 

#include <iostream>
using namespace std;

int main()
{
    // Here I create a constant for minimum and maximum players.
    const int MIN_PLAYERS = 9, MAX_PLAYERS = 15;

    // Variables
    int players, teamPlayers, numTeams, leftOvers;

     /*The players variable refers to the evailable players, teamPlayers is the desired number of players per team
     numTeams is the number of teams and leftOver reers to the players left out.
     */

    // Now we get the number of players per team.
    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;

    // Now we validate the input
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Explain the error. 
        cout << "You should have at least "<< MIN_PLAYERS << "but no more than " << MAX_PLAYERS << " per team.\n";  

        // Get the input again.
        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }

    // Get the number of players available. 
    cout << "How many players are available? ";
    cin >> players;

    // Validate the input. 
    while (players <= 1)
    {
        // Get the input again
        cout << "Please enter 1 or greater amount: ";
        cin >> players;
    }

    // Calculate the number of teams
    numTeams = players / teamPlayers;

    // Calculate the number of leftover players.
    leftOvers = players % teamPlayers;

    // Display the results.
    cout << "There will be " << numTeams << " teams with " << leftOvers << " players left over.\n";

    return 0;

} 