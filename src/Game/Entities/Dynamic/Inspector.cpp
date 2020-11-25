#include "Inspector.h"

  Inspector::Inspector(int x, int y, int width, int height, ofImage sprite, Burger* burger):  Client(x, y, width, height, sprite, burger){
    this->burger = burger;
}
  Inspector::~Inspector(){
    burger->~Burger();
}

// void Inspector::render(){
//     burger->render();
//     ofSetColor (255,green,blue);
//     setAngryColor();
//     sprite.draw(x, y, width, height);
//     // ofDrawRectangle(getBounds());
//     if(nextClient != nullptr){
//         nextClient->render();
//     }
// }
// void Inspector::setAngryColor()
// {
//     switch (patience)
//     {
//     case 1500:
//         green -= 75;
//         blue -= 75;
//         break;
//     case 1000:
//         green -= 50;
//         blue -= 50;
//         break;
//     case 500:
//         green -= 50;
//         blue -= 50;
//         break;
//     case 150:
//         green -= 80;
//         blue -= 80;
//         break;
//     }
// }

// void Inspector::tick(){
//     patience--;
   
//     burger->setY(y);
//     if(patience == 0){
//         isLeaving = true;
//     }
//     if(nextClient != nullptr){
//         nextClient->tick();
//     }
// }

// int Inspector::serve(Burger* burger){
//     if(nextClient == nullptr){
//         return 0;
//     }
//     if(this->burger->equals(burger)){
//         isLeaving = true;
//         return 10;
//     }
//     return nextClient->serve(burger);
// }