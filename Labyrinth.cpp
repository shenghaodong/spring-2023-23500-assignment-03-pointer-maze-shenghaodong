#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    /* TODO: Delete this comment and the remaining lines, then implement this function. */
    // (void) start;
    // (void) moves;
    // return false;

    //Set the bool to true if you find the item in the maze
    bool spellBook = false;
    bool potion = false;
    bool wand = false;


    //Go through every letter in moves and if any leads to nullptr then break and return false

    //In the if statement check if it leads to nullptr if it does then return false
    for(int i = 0; i < moves.length(); i++){
        if(moves.substr(i) =="N"){
            start -> north; 
        }
        if(moves.substr(i) =="E"){
            start -> east; 
            
        }
        if(moves.substr(i) =="S"){
            start -> south;
            
        }
        if(moves.substr(i) =="W"){
            start -> west;
        }
    }
}
