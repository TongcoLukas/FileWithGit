#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct shoe {

    string brand;
    string material;
    string color;
    float size;
    float price;

    shoe(string sBrand = "", string sMaterial = "", string sColor = "", float sSize = 0.0, float sPrice = 0.0) {

        brand = sBrand;
        material = sMaterial;
        color = sColor;
        size = sSize;
        price = sPrice;

    }

};

int main() {

    cout << "Hello World!\n";

}