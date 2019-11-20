#include<iostream>

using namespace std;


int  playerAttribute(int &strength, int &health,int &luck,int &totalPoints){




////////////////////////////////// ADD STRENGTH

if( totalPoints > 0) {
 
        cout << "\n Your choices are STRENGTH / HEALTH / LUCK \n  points remaining : " << totalPoints << endl;
        
        cout << " how many points would you like to add to STRENGTH : ";

        cin >> strength;

if ( strength > totalPoints) { 

    cout << "Sorry that is not valid, you do not have enough points";
    
    
    }
    else {

        totalPoints -= strength;

     
    }
}

//////////////////////////////////// ADD HEALTH

if( totalPoints > 0) {
 
        cout << "\n Your choices are STRENGTH / HEALTH / LUCK \n  points remaining : " << totalPoints << endl;
        
        cout << " how many points would you like to add to HEALTH : "; 

        cin >> health;

if ( health > totalPoints) { 

    cout << "Sorry that is not valid, you do not have enough points";
    
    
    }

    else {

        totalPoints -= health;

    }
}


///////////////////////////////////////// ADD LUCK

if( totalPoints > 0) {
 
        cout << "\n Your choices are STRENGTH / HEALTH / LUCK \n  points remaining : " << totalPoints << endl;
        
        cout << " how many points would you like to add to LUCK : ";

        cin >> luck;

if ( luck > totalPoints) { 

    cout << "Sorry that is not valid, you do not have enough points";
    
    
    }
    else {

        totalPoints -= luck;

        cout << "\n great you have : " << totalPoints << " left";
    }
}

cout << " \n============================================================== \n you have selected the following : \n Strength : " <<  strength << "\n Health : " << health << "\n Luck : " << luck << "\n========================================================= "<< endl;



    return strength,health,luck,totalPoints;
}