#include "Inspector.h"

  Inspector::Inspector(int x, int y, int width, int height, ofImage sprite, Burger* burger):  Client(x, y, width, height, sprite, burger){
    this->burger = burger;
}
  Inspector::~Inspector(){
    burger->~Burger();
}
