#include <iostream>
using namespace std;
//making a player class that moves a player on the field
class Player {
public:
    int x=5, y=5;
    int speed=10;
};
//if we move the mover function inside the Player class then it is called as a method
void mover(Player &play,int xa, int ya){
    play.x+=xa+play.speed;
    play.y+=ya+play.speed;
    cout<<play.x<<endl;
    cout<<play.y<<endl;
}
int main(){
    Player play;
    mover(play,1,-1);

}