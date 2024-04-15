#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    string contactInfo;

public:
    Person(string name, string contactInfo) : name(name), contactInfo(contactInfo) {}

    string getName() const {
        return name;
    }

    string getContactInfo() const {
        return contactInfo;
    }
};

class Item {
private:
    string name;
    double price;
    string category;

public:
    Item(string name, double price, string category) : name(name), price(price), category(category) {}

    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    string getCategory() const {
        return category;
    }
};

class Order {
private:
    vector<Item> items;

public:
    void addItem(const Item& item) {
        items.push_back(item);
    }

    void removeItem(const Item& item) {
        
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.getPrice();
        }
        return total;
    }
};

class Bill {
private:
    Order order;

public:
    Bill(const Order& order) : order(order) {}

    void generateBill() {
        
    }

    void printBill() const {
        
    }
};

class Customer : public Person {
private:
    Order order;
    double walletBalance;

public:
    Customer(string name, string contactInfo, double walletBalance)
        : Person(name, contactInfo), walletBalance(walletBalance) {}

    void placeOrder(const Order& order) {
        this->order = order;
    }

    void processOrder() {
        
    }

    void makePayment(double amount) {
        if (walletBalance >= amount) {
            walletBalance -= amount;
            cout << "Payment successful. Remaining balance: " << walletBalance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

int main() {
    Item item1("Pizza", 10.99, "Main Course");
    Item item2("Coke", 1.99, "Beverage");

    Order order;
    order.addItem(item1);
    order.addItem(item2);

    cout << "Customer Name: Rahul Sharma" << endl; // Example Indian name
    cout << "Items Ordered:" << endl;
    cout << "- " << item1.getName() << endl;
    cout << "- " << item2.getName() << endl;

    Customer customer("Rahul Sharma", "98765XXXXX", 50.0);
    customer.placeOrder(order);

    Bill bill(order);
    bill.printBill();

    customer.makePayment(order.calculateTotal());

    return 0;
}


