#include <iostream>
#include "../include/user_solver.h"

void UserSolver::solve(Board &board) {
    // Your Implementation goes here

    int searched[1000, 1000];

    for(size_t t = 0; t < 1000; t++)
    {
        for (size_t u = 0; u < 1000; u++)
        {
            searched[t, u] = 0;
        }
    }

    for (size_t i = 0; i < board.getX(); i++) {
        for (size_t j = 0; j < board.getY(); j++) {
            if (searched[i,j] > 0) continue; //already searched

            int returnedGuess = guess(i, j, board);
            if (returnedGuess == 3)
            {
                //near miss, there is a hit in an adjacent cell
                //search around the current cell position
                guess(i + 1, j, board);
                guess(i - 1, j, board);
                guess(i, j + 1, board);
                guess(i, j - 1, board);

                guess(i + 1, j + 1, board);
                guess(i - 1, j - 1, board);
                guess(i - 1, j + 1, board);
                guess(i + 1, j - 1, board);


                searched[i + 1, j] = 1;
                searched[i - 1, j] = 1;
                searched[i, j + 1] = 1;
                searched[i, j - 1] = 1;

                searched[i + 1, j + 1] = 1;
                searched[i - 1, j - 1] = 1;
                searched[i - 1, j + 1] = 1;
                searched[i + 1, j - 1] = 1;
            }
            else if (returnedGuess == 2)
            {
                //miss, no adjacent cells have a ship
                searched[i + 1, j] = 1;
                searched[i - 1, j] = 1;
                searched[i, j + 1] = 1;
                searched[i, j - 1] = 1;

                searched[i + 1, j + 1] = 1;
                searched[i - 1, j - 1] = 1;
                searched[i - 1, j + 1] = 1;
                searched[i + 1, j - 1] = 1;
            }
            searched[i, j] = 1;
        }
    }

    
    ReturnType t = guess(1, 1, board);
    std::cout << t << std::endl;
}
