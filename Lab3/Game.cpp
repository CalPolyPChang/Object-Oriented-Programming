//Game.cpp
#include "Game.h"

Game::Game(){
}

void Game::generatePlayers(int n){
  for (int i = 0; i < n; i++){
    players.push_back(new RPG());

    //rename players
    string new_name = "NPC_"+to_sting(i);
    players[i]->setName(new_name);
    live_players.insert{i};
  }
}

int Game::selectPlayer(){
  
