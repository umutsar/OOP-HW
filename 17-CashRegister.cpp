#include <iostream>
#include <iomanip>

using namespace std;

class InventoryItem
{
private:
    double cost;
    int onHand;

public:
    InventoryItem(double _cost = 0, int _onHand = 0)
    {
        cost = _cost;
        onHand = _onHand;
    }

    double getCost() const
    {
        return cost;
    }

    int getOnHand() const
    {
        return onHand;
    }

    void decreaseOnHand(int _quantity)
    {
        onHand -= _quantity;
    }
};

class CashRegister
{
private:
    InventoryItem item;
    double unitPrice;
    int quantity;
    double subtotal;
    double tax;
    double total;

public:
    CashRegister(InventoryItem &_item)
    {
        item = _item;
    }

    void getPurchaseInfo()
    {
        cout << "Enter the item's quantity: ";
        cin >> quantity;

        while (quantity < 0)
        {
            cout << "Invalid quantity. Try again!";
            cin >> quantity;
        }
    }

    void calculateUnitPrice()
    {
        unitPrice = item.getCost() * 1.30;
    }

    void calculateSubtotal()
    {
        subtotal = unitPrice * quantity;
    }

    void calculateTax()
    {
        tax = subtotal * 0.06;
    }

    void calculateTotal()
    {
        total = subtotal + tax;
    }

    void displayPurchaseInfo()
    {
        cout << fixed << setprecision(2);
        cout << "Purchase Subtotal: $" << subtotal << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total: $" << total << endl;
    }

    void updateInventory()
    {
        item.decreaseOnHand(quantity);
    }
};

int main()
{
    InventoryItem item(10, 50);

    CashRegister register1(item);

    register1.getPurchaseInfo();

    register1.calculateUnitPrice();
    register1.calculateSubtotal();
    register1.calculateTax();
    register1.calculateTotal();

    register1.displayPurchaseInfo();

    register1.updateInventory();

    return 0;
}
