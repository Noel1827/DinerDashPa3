#include "Client.h"

Client::Client(int x, int y, int width, int height, ofImage sprite, Burger* burger): Entity(x, y, width, height, sprite){
    this->burger = burger;
}
Client::~Client(){
    burger->~Burger();
}
void Client::render(){
    burger->render();
    ofSetColor (red,green,blue);
    setAngryColor();
    sprite.draw(x, y, width, height);
    // ofDrawRectangle(getBounds());
    if(nextClient != nullptr){
        nextClient->render();
    }
}
void Client::setAngryColor(){
     switch (patience)
    {
    case 1500:
        red += 75;
        green -= 75; 
        blue -= 75;
        break;
    case 1000:
        red += 50;
         green -= 50; 
        blue -= 50;
        break;
    case 500:
        red += 50;
         green -= 50; 
        blue -= 50;
        break;
    case 150:
        red += 80;
         green -= 80; 
        blue -= 80;
        break;
    }
}

void Client::tick(){
    patience--;
   
    burger->setY(y);
    if(patience == 0){
        isLeaving = true;
    }
    if(nextClient != nullptr){
        nextClient->tick();
    }
}

int Client::serve(Burger* burger){
    isLeaving = true;
    return 10;
}