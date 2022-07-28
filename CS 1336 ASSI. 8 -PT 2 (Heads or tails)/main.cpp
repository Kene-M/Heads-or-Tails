/*

    This program will randomly determine the outcome for each time a coin flips.

1. Get the number of times to flip the coin from the user.
2. while (Check if the number of decisions left to be executed is more than 1)
        Call the function for determining the outcome.
            In the function:
            Generate a random number between 0 and 1.
            If the number is 1 return "tails" to the main function.
            If the number is 0 return "heads" to the main function.

        Store the outcome it returns.
        Display the outcome for each flip to the user.
        Decrement the number of decisions left to be executed.
    end while.

*/

// This program will randomly determine the outcome for each time a coin flips.

#include <iostream>
#include <cstdlib>

using namespace std ;

string HeadsOrTails();  // Prototype for the function that will determine the outcome of the coin flip.

    // Main function.
int main()
{
        // Declare variables.
    int numDecisions ;  // To hold the number of decisions to be executed (coin flips).
    string DecisionOutcome;  // To hold the outcome of the coin flip.

    srand(2);  // Unique seed.

        // Get the number of times to flip the coin from the user.
    cin >> numDecisions;

        // Check if the number of decisions left to be executed is more than 1.
    while ( numDecisions >= 1 )
    {
            // Call the function for determining the outcome and store the value it returns.
        DecisionOutcome = HeadsOrTails();

            // Display the outcome for each flip to the user.
        cout << DecisionOutcome << endl;

            // Decrement the number of decisions left to be executed.
        numDecisions-- ;
    }

   return 0 ;
}

    // Function for calculating the the side that will face up after the coin flip.
string HeadsOrTails()
{
        // Declare a variable to be used to determine a generate a random number between 0 and 1.

    int temp = rand() % 2;  // 0 represents "heads" and 1 represents "tails".

        // If the number is 1 return "tails" to the main function.
    if ( temp == 1 )
        return "tails";

        // If the number is 0 return "heads" to the main function.
    return "heads";
}

/* (Outcomes in zylab are different)

    RUN 1: numDecisions = 1.

1
tails

    ----------------------------

    RUN 2: numDecisions = 3.

3
tails
heads
heads

    ----------------------------

    RUN 3: numDecisions = 25.

25
tails
heads
heads
tails
heads
heads
heads
tails
tails
heads
tails
tails
heads
heads
tails
tails
tails
tails
heads
tails
tails
tails
tails
tails
tails

*/
