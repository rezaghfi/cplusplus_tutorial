
class Doz{

  public:
  char turn;
  int draw;
  char map[3][3];
  int x, y;
  int input;

  // 
  void display();

  void setTurn();

  bool checkWinner();

};


int main(){

Doz mygame;
while(mygame.checkWinner()){
  mygame.display();
  mygame.setTurn();
  mygame.checkWinner();
}
}