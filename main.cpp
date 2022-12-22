#include <iostream>
#include <cmath>

using namespace std;

void sine(float x);
double factorial(int n);

int main()
{
    float x = 3.146*1.5;
    sine(x);

    return 0;
}

void sine(float x){
    
    int resolution = 20;
    float result = 0;
    int index = 0;
    for(int i=1;i<resolution;i++){
        if(index%2==0){
            result = result + pow(x, i)/factorial(i);
            index++;
            i++;
        }else{
            result = result - pow(x, i)/factorial(i);
            index++;
            i++;
        }
        
    }
    std::cout<<"Value of sine("<<x<<") is "<<result<<endl;
}

double factorial(int n){
    double factorial = 1;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
    }
    return factorial;
}

