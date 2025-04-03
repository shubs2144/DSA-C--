// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class AbstractCar {
   virtual void isThisCarIsOurs () = 0;
};

class Car : AbstractCar {
private:

    string color;
    int seats;
    bool isElectrical;    
    
public:

    void setColor(string color){
        this->color = color ;
    }
    
    string getColor(){
        return color;
    }
    
    void setSeats(int seats) {
        if(seats >= 6){
            this->seats = seats;
        }
        else {
            cout << "Need more than or equal to 6 seater " << endl;
        }
    }
    
    int getSeats(){
        return seats;
    }
    
    void setIsElectrical(bool isElectrical) {
        this->isElectrical = isElectrical;
    }
    
    bool getIsElectrical(){
        return isElectrical;
    }

    void carInfo() {
        cout << "color :" << color << endl;
        cout << "seats :" << seats << endl;
        cout << "isElectrical :" << isElectrical << endl;
    }
    
    Car (string color , int seats , bool isElectrical){
        this->color = color ;
         this-> seats = seats ;
          this-> isElectrical = isElectrical ;
    }
    
    void isThisCarIsOurs (){
        if (isElectrical == 0){
            cout << " yes this car is yours " << endl;
        }
        else {
            cout << " No this is not your car , this is electrical car " << endl;
        }
    }
};
    
class Mercedes : public Car {
public :
    
    string Display_Size ;

    void aboutCar() {
        cout << "This is latest " << getColor() << " color Mercedes with " << getSeats() << " seats and display size is " << Display_Size << endl;
    };

    Mercedes (string color , int seats , bool isElectrical , string displaySize) : Car (color , seats , isElectrical)
    {
        Display_Size = displaySize ;
    };
    
};

class Farari : public Car {
    public : 
        
        string ThisIsSportsCar;

        void SportsCar() {
            cout << ThisIsSportsCar << " This is latest " << getColor() << " color Sports car with " << getSeats() << " seats " << endl;
        };
        
        Farari(string color , int seats , bool isElectrical , string thisIsSportsCar) : Car (color , seats , isElectrical) 
        {
            ThisIsSportsCar = thisIsSportsCar;
        };
        
    };

int main() {


    Mercedes m1 = Mercedes("Black", 6, 0, "56 inch");
    m1.aboutCar();
    m1.isThisCarIsOurs();

    Farari f1 = Farari("Red" , 2, 1, "Yes");
    f1.SportsCar();
    f1.isThisCarIsOurs();

    return 0;
}