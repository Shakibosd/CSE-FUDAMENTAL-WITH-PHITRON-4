#include <bits/stdc++.h>
using namespace std;
class Restaurent{
public:
    string name;
    int price = 200, quantity;
    Restaurent(){}; 
    Restaurent(string name, int price, int quantity){
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    void update_quantity(int quantity){
        this->quantity = quantity;
    }
};
int main(){
    int n;
    cin >> n;
    Restaurent products[n];
    for(int i = 0; i < n; i++){
        cin >> products[i].name >> products[i].price >> products[i].quantity;
    }
    for(int i = 0; i < n; i++){
        cout << products[i].name << products[i].price << products[i].quantity << endl;
    }
    return 0;
}