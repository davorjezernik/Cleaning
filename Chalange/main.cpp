// Davor's Carpet Cleaning service
// Charges 35$ per big room
// Charges 25$ per small room
// Sales tax rate is 6%
// Estimated are valid for 30 days
#include <iostream>

using namespace std;
int main()
{
    cout << "Hello and welcome to Davor's carpet cleaning service" << endl;
    //How many rooms are there big and small
    int small_room = 0;
    cout << "\nHow many small rooms want you to be cleaned? " << endl;
    cin >> small_room;
    int big_room = 0;
    cout << "How many big rooms want you to be cleande? " << endl;
    cin >> big_room;
    
    //Calcilation
    //Room prices for cleaning
    int small_room_price = 25;
    int big_room_price = 35;
    cout << "\nThe price of small per room is $" << small_room_price << endl;
    cout << "There are " << small_room << " small rooms, this will be $" << small_room*small_room_price << endl;
    cout << "\nThe price of big rooms per room is $" << big_room_price << endl;
    cout << "There are " << big_room << " big rooms, this will be $" << big_room*big_room_price << endl;
    cout << "=======================" << endl;
    //Tax
    cout << "Tax $" << (small_room*small_room_price)*0.06+(big_room*big_room_price)*0.06 << endl;
    //Full price
    cout << "Cost: $" << (small_room*small_room_price)*0.06+(big_room*big_room_price)*0.06+small_room*small_room_price+big_room*big_room_price << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl; 
    
    
    return 0;
}

