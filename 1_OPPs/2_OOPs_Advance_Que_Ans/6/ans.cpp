#include <bits/stdc++.h>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double price;

public:
    // Constructor
    Car(string make, string model, int year, double price) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    // Setters
    void setMake(string make) { this->make = make; }
    void setModel(string model) { this->model = model; }
    void setYear(int year) { this->year = year; }
    void setPrice(double price) { this->price = price; }

    // Getters
    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    double getPrice() const { return price; }
};

class Solution
{
public:
   
    static vector<Car> findMostExpensiveCar(vector<Car> &cars){
        vector<Car> result1;
        if (cars.empty()) return result1;
        int ExpCarIndex = 0;
        double ExpCar = cars[0].getPrice();
        for(int i=0; i<cars.size(); i++){
            if(cars[i].getPrice() > ExpCar){
                ExpCar = cars[i].getPrice();
                ExpCarIndex = i;
            }
        }
        result1.push_back(cars[ExpCarIndex]);
        return result1;
    };

    static vector<Car> getCarByMakeAndModel(vector<Car> &cars, string& Targetmake, string& Targetmodel){
        vector<Car> result2;
       for(int i=0; i<cars.size(); i++){
        if(cars[i].getMake() == Targetmake && cars[i].getModel() == Targetmodel){
            result2.push_back(cars[i]);
        }
       }
       return result2;
    }
};

int main(){
    vector<Car> cars;
    int n;
    cout << "total cars : ";
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "car " << i+1 <<" car detail : " << endl;

        string make, model;
        int year;
        double price;

        cout << "make : ";
        cin >> make;

        cout << "model : ";
        cin >> model;

        cout << "year : ";
        cin >> year;

        cout << "price : ";
        cin >> price;

        cars.emplace_back(make, model, year, price);
        
    };

    string Targetmake , Targetmodel;
    cout << "Enter the Target make : ";
    cin >> Targetmake ;
    cout << " & model : ";
    cin >> Targetmodel;

    vector<Car> expCar = Solution::findMostExpensiveCar(cars);
    if(!expCar.empty()){
        cout << expCar[0].getMake() << endl << expCar[0].getModel() <<endl << expCar[0].getYear() << endl << expCar[0].getPrice() << endl;
    }else {
        cout << "Sorry - No car is available" << endl;
    };

    vector<Car> ans = Solution::getCarByMakeAndModel(cars, Targetmake, Targetmodel);
    if(!ans.empty()){
        cout << ans[0].getYear() << endl << ans[0].getPrice() << endl;
    }else {
        cout << "Sorry - No car is available" << endl;
    };

    return 0;
}