#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int item_no, item_qty;
    float total_price = 0.0, item[10] = {120.0, 20.0, 30.0, 45.0, 70.0, 60.0, 90.0, 47.0, 63.0, 150.0};
    char decision;
    while (1)
    {
        cout << "\nEnter item no. :- ";
        cin >> item_no;
        if(item_no < 1 && item_no > 10){
            cout << "\nINVALID INPUT";
            break;
        }
        cout << "\nEnter item quantity. :- ";
        cin >> item_qty;
        if(item_qty < 1 && item_qty > 10){
            cout << "\nINVALID INPUT";
            break;
        }
        total_price += (float) item[item_no-1] * item_qty;
        cout << "\nDo you want to order more items? (Y/N) :- ";
        cin >> decision;
        if (decision == 'Y' || decision == 'y')
            continue;
        else if(decision == 'N' || decision == 'n')
            break;
        else{
            cout << "INVALID INPUT";
            break;
        }
    }
    std::cout << std::setprecision(2) << std::fixed;
    cout << "Total price: " << total_price << " INR";
    return 0;
}