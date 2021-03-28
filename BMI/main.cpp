#include <iostream>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

int main(){

    string name;      
    double weight;     
    double height;      
    double BMI;         
    string BmiResult;     

    cout << "What is your name?" << endl;
    getline(cin, name);
        
    cout << "What is your weight in lb? "<<endl;
    cin>> weight;

    cout<< "What is your height in In?"<<endl;
    cin >> height;

    BMI = 703 * (weight / pow(height,2));

    if (BMI < 18.5)
    {
        BmiResult = "underweight";
    }
    else if (BMI > 18.5 && BMI < 25)
    {
        BmiResult = "optimal";
    }
    else
    {
        BmiResult = "Overweight";
    }
   cout << "Hello, " << name << ", your BMI is "<< setprecision(4) << BMI << " so you are " << BmiResult<<endl;

   return 0;
   }