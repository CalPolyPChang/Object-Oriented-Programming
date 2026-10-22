void RPG::setName(string name){
}

void RPG::updateExpLevel(){
}

void RPG::attack(RPG * opponent){

  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<double> dis(0.0, 1.0);

  float random_num = dis(gen);
}

void RPG::printStats(){
}

RPG::~RPG(){
}

class Game{
  public:
    Game();

    void generatePlayers(n: int);
    int selectPlayer();
    void endRound(winner: RPG*, loser:RPG*, loserIndex: int);
    void battleRound();
    void gameLoop();
    void printFinalResults();
  private:
    players: <RPG*>;
    live_players: <int>;
};
