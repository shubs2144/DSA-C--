#include <bits/stdc++.h>
using namespace std;

class Footwear
{
private:
    int footwearId;
    string footwearName;
    string footwearType;
    int price;

public:
    // Constructor
    Footwear(int footwearId, string footwearName, string footwearType, int price)
    {
        this->footwearId = footwearId;
        this->footwearName = footwearName;
        this->footwearType = footwearType;
        this->price = price;
    }

    // Setters
    void setFootwearId(int footwearId) { this->footwearId = footwearId; }
    void setFootwearName(string footwearName) { this->footwearName = footwearName; }
    void setFootwearType(string footwearType) { this->footwearType = footwearType; }
    void setPrice(int price) { this->price = price; }

    // Getters
    int getFootwearId() const { return footwearId; }
    string getFootwearName() const { return footwearName; }
    string getFootwearType() const { return footwearType; }
    int getPrice() const { return price; }
};

string toLower(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

class footwearProgram
{
public:
    static int getCountByType(vector<Footwear> &footwears, string type)
    {
        int count = 0;

        //first convrt in lower case
        string inputType = toLower(type);
        for (int i = 0; i < footwears.size(); i++)
        {
            if (footwears[i].getFootwearType() == inputType)
            {
                count++;
            }
        }
        return count;
    }

    static vector<Footwear> getSecondHighestPriceByBrand(vector<Footwear> &footwears, string name)
    {
        int highest = INT_MIN, secondHighest = INT_MIN;
        vector<Footwear> secondHighestFootwear;
        int secondHighestIndex = -1;
        string inputBrand = toLower(name);

        // First, find highest price of the given brand
        for (int i = 0; i < footwears.size(); i++)
        {
            if (toLower(footwears[i].getFootwearName()) == inputBrand)
            {
                if (footwears[i].getPrice() > highest)
                {
                    highest = footwears[i].getPrice();
                }
            }
        }

        // Then, find second highest price of the given brand
        for (int i = 0; i < footwears.size(); i++) {
            int price = footwears[i].getPrice();
            if (toLower(footwears[i].getFootwearName()) == inputBrand &&
                price < highest && price > secondHighest) {
                secondHighest = price;
                secondHighestIndex = i;
            }
        }

        secondHighestFootwear.push_back(footwears[secondHighestIndex]);
        return secondHighestFootwear;
    }
};

int main()
{
    vector<Footwear>footwears;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int id;
        string name, type;
        int price;

        cout << "enter id : ";
        cin >> id;

        cout << "enter name : ";
        cin.ignore();
        getline(cin, name);

        cout << "enter type : ";
        cin.ignore();
        getline(cin, type);

        cout << "price : ";
        cin >> price;

        footwears.emplace_back(id, name, type, price);
    };

    string type;
    cout << "enter the countbytype : ";
    cin.ignore();
    getline(cin, type);

    string name;
    cout << "enter the SecondHighestPriceByBrand: ";
    cin.ignore();
    getline(cin, name);

    int count = footwearProgram::getCountByType(footwears, type);
    if (count > 0)
    {
        cout << count << endl;
    }
    else
    {
        cout << "Footwear not available " << endl;
    };

    vector<Footwear> secondHighest = footwearProgram::getSecondHighestPriceByBrand(footwears, name);
    if (!secondHighest.empty())
    {
        cout << secondHighest[0].getFootwearId() << endl;
        cout << secondHighest[0].getFootwearName() << endl;
        cout << secondHighest[0].getPrice() << endl;
    }
    else
    {
        cout << "Brand not available " << endl;
    }
    return 0;
}