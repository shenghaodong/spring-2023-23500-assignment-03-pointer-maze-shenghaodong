#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    /* TODO: Delete this comment and the remaining lines, then implement this function. */
    // (void) start;
    // (void) moves;
    // return false;


    //Use a new pointer so I don't change starting location
    MazeCell* myMaze = start;


    //Set the bool to true if you find the item in the maze
    bool spellBook = false;
    bool potion = false;
    bool wand = false;


    //Go through every letter in moves and if any leads to nullptr then break and return false

    //In the if statement check if it leads to nullptr if it does then return false
    for(int i = 0; i < moves.length(); i++){
        if(moves.substr(i) =="N"){
            myMaze -> north; 
            if(myMaze == nullptr){
                return false;
            }
        }
        if(moves.substr(i) =="E"){
            myMaze -> east; 
            if(myMaze == nullptr){
                return false;
            }
        }
        if(moves.substr(i) =="S"){
            myMaze -> south;
            if(myMaze == nullptr){
                return false;
            }
        }
        if(moves.substr(i) =="W"){
            myMaze -> west;
            if(myMaze == nullptr){
                return false;
            }
        }
    }
    if(spellBook == true && potion == true && wand == true){
        return true;
    }
    return false;
}
