//RPG.cpp
#include "RPG.h"

//constructors
RPG::RPG(){
    name = "NPC"
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this-> name = name;
    this-> hits_takens = hits_takens; 
    this-> luck = luck;
    this-> exp = exp;
    this-> level = level;
}



void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

string RPG::getName() const{
    return name;
} 
int RPG::getHitsTaken() const{
    return hits_taken;
} 
float RPG:: getLuck() const{
    return luck;
}
float RPG::getExp() const{
    return exp;
}
int RPG::getLevel() const{
    return level;
}


//accessor functions
getXXX

