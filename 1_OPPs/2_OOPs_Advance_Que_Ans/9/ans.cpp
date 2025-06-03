#include <bits/stdc++.h>
using namespace std;

class Phone {
private:
    int phoneId;
    string os;
    string brand;
    int price;

public:
    Phone(int phoneId, string os, string brand, int price) {
        this->phoneId = phoneId;
        this->os = os;
        this->brand = brand;
        this->price = price;
    }

    void setphoneId(int phoneId) { this->phoneId = phoneId; }
    void setos(string os) { this->os = os; }
    void setbrand(string brand) { this->brand = brand; }
    void setprice(int price) { this->price = price; }

    int getphoneId() const { return phoneId; }
    string getos() const { return os; }
    string getbrand() const { return brand; }
    int getprice() const { return price; }
};

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

class Solution {
public:
    static int findPriceForGivenBrand(const vector<Phone>& phones, string brand) {
        int sum = 0;
        for (const Phone& phone : phones) {
            if (toLower(phone.getbrand()) == toLower(brand)) {
                sum += phone.getprice();
            }
        }
        return sum;
    }

    static vector<Phone> getPhoneIdBasedOnOs(const vector<Phone>& phones, string os) {
        vector<Phone> result;
        for (const Phone& phone : phones) {
            if (toLower(phone.getos()) == toLower(os) && phone.getprice() >= 50000) {
                result.push_back(phone);
            }
        }
        return result;
    }
};

int main() {
    vector<Phone> phones;

    int n = 4;

    for (int i = 0; i < n; i++) {
        int phoneId;
        string os;
        string brand;
        int price;

        cin >> phoneId;
        cin.ignore(); // Clear newline
        getline(cin, os);
        getline(cin, brand);
        cin >> price;

        phones.emplace_back(phoneId, os, brand, price);
    }

    string targetBrand, targetOS;
    cin.ignore(); // clear newline before getline
    getline(cin, targetBrand);
    getline(cin, targetOS);

    int totalPrice = Solution::findPriceForGivenBrand(phones, targetBrand);
    if (totalPrice > 0) {
        cout << totalPrice << endl;
    } else {
        cout << "The given Brand is not available" << endl;
    }

    vector<Phone> resultPhones = Solution::getPhoneIdBasedOnOs(phones, targetOS);
    if (!resultPhones.empty()) {
        for (const Phone& phone : resultPhones) {
            cout << phone.getphoneId() << endl;
        }
    } else {
        cout << "No phones are available with specified os and price range" << endl;
    }

    return 0;
}
