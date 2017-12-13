#include <iostream>
#include <string>

using namespace std;

class House {
  private:
    string address;
    unsigned int area;
    unsigned int price;
  public:
    House(string address, unsigned int area) {
      this->address = address;
      this->area = area;
    }
    ~House() {
      cout << endl << "House deconstructed" << endl;
    }
    unsigned int get_price() {
      return price * area;
    }
    unsigned int set_price(unsigned int price) {
      this->price = price;
    }
};

int main() {
  // The market price of the houses is 400 EUR / square meters
  // Make the get_price() function work
  // Create a constructor for the House class that takes it's address and area.
House Palota = House("Andrassy 66", 349);


  Palota.set_price(200);
  cout << "Price (EUR): " << Palota.get_price();

  return 0;
}
