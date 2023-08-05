// Write a C++ program to define a base class Item (item-no, name, price).
// Derive a class Discounted-Item (discount-percent). A customer purchases
// 'n' items. Display the item-wise bill and total amount using appropriate
// format.

#include <iostream>
using namespace std;
class Item
{
protected:
    int Itemno, Item_price;
    char name[10];
};
class DiscountedItem : public Item
{
public:
    float discount_percent;
    float discounted_price;

public:
    void details()
    {
        cout << "Enter Item name: " << endl;
        cin >> name;
        cout << "Enter Item no: " << endl;
        cin >> Itemno;
        cout << "Enter Item price: " << endl;
        cin >> Item_price;
        cout << "Enter discount percentage : " << endl;
        cin >> discount_percent;
        discounted_price = Item_price - Item_price * discount_percent / 100;
    }
    void show()
    {
        cout << "Item name: " << name << endl;
        cout << "Item no : " << Itemno << endl;
        cout << "Item price: " << Item_price << endl;
        cout << "discount percent: " << discount_percent << endl;
        cout << "discount price: " << discount_percent;
    }
};

int main()
{
    int i, cnt, discount = 0, Dprice = 0;
    cout << "how many item you want to enter : ";
    cin >> cnt;
    DiscountedItem dI[100];
    for (int i = 0; i < cnt; i++)
    {
        dI[i].details();
    }
    for (int i = 0; i < cnt; i++)
    {
        dI[i].show();
    }
    for (int i = 0; i < cnt; i++)
    {
        Dprice = Dprice + dI[i].Item_price ;
    }
    for (i = 0; i < cnt; i++)
    {
        discount = discount + dI[i].Item_price - dI[i].discounted_price;
    }
    cout<<"total price :"<<Dprice;
    cout<<"total discount: "<<discount;

    return 0;
}