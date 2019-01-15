/*
                Memory
       -----------------------
 var   |        Value        | (memory location)
       -----------------------
 age   |     21 (0128123)    | (2001)
       |                     |
       |                     |
       |                     |
       ------------------------

*/

#include <iostream>
using namespace std;

// >> extraction operator
// << insertion operator

// cout output stream
// cin input strem
int main()
{
      // challenge
      cout << "Welcome to Andrew's carpet cleaning service" << endl;
      const double sm_room_price {25};
      const double lg_room_price {35};
      const double sales_tax {0.06};
      const double estimate_expiry {30};

      int num_sm_rooms {0};
      cout << "Enter number of small rooms you would like cleaned: ";
      cin >> num_sm_rooms;

      int num_lg_rooms {0};
      cout << "Enter number of large rooms you would like to clean: ";
      cin >> num_lg_rooms;

      double cost = (num_sm_rooms * sm_room_price) + (num_lg_rooms + lg_room_price);
      double cost_tax = cost * sales_tax;

      cout << "\nEstimate for carpet cleaning service" << endl; 
      cout << "Number of small rooms: " << num_sm_rooms << endl;
      cout << "Number of large rooms: " << num_lg_rooms << endl;
      cout << "Price per small room: $" << sm_room_price << endl;
      cout << "Pricer per large room: $" << lg_room_price << endl;
      cout << "Cost: $" << cost << endl;
      cout << "Tax: $" << cost_tax << endl;

      cout << "=============================================" << endl;
      cout << "Total estimate: $" << cost + cost_tax << endl;
      cout << "The estimate is valid for " << estimate_expiry << " days." << endl;


}

// int main()
// {
//       // Using constants
//       const double price_per_room{30};
//       const double sale_tax{0.06};
//       const int estimate_expiry{30};
      
//       cout << "Hello welcome to andy's carpet cleaning service" << endl;
//       cout << "\nEnter number of rooms that you would to clean? ";
//       int num_of_rooms{0};
//       cin >> num_of_rooms;

//       cout << "\nEstimate of carpet of carpet cleaning service" << endl;
//       cout << "Number of rooms: " << num_of_rooms << endl;
//       cout << "Price per room $" << price_per_room << endl;
//       cout << "Cost: $" << price_per_room * num_of_rooms << endl;
//       cout << "Tax: $" << price_per_room * num_of_rooms * sale_tax << endl;
//       cout << "===============================================" << endl;
//       cout << "Total estimate: $" << (price_per_room * num_of_rooms) + (price_per_room * num_of_rooms * sale_tax) << endl;
//       cout << "This estimate is valid for " << estimate_expiry << " days";


//       cout << endl;
//       return 0;
// }

// int main() 
// {
//       int room_width = 0;
//       cout << "Enter the width(ft) of the room: ";
//       cin >> room_width;

//       int room_length = 0;
//       cout << "Enter the length(ft) of the room: ";
//       cin >> room_length;

//       cout << "The area of the room is " << room_width * room_length << " sq feet " << endl;

//       long people_on_earth {7'600'000'000};
//       cout << people_on_earth;
//       return 0
// }

