#include<iostream>
#include <vector>
using namespace std;

void myBag();


void myBag () {

cout << " \n \n \n =========================== GAME BAGGGGGGGGGGGGGG ===========================" << endl;


vector <string> inventory{
    "shield",
    "sword",
    "coat"
};


cout << "\n your current bag has : \n" << endl;


// BAG INVENTORY HERE ASCII ART


for ( int i =0; i < inventory.size(); i++) {

cout << "               "<< inventory[i] << "             " << "\n" << endl;
}

}