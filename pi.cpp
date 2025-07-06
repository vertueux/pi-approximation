#include <iostream>
#include <cmath>

double f(double x) {
    return sqrt(1-pow(x,2));
}

int main() {
    double x=-1.0;
    double h=0.0001;
    double length=0.0;
    while (x+h<=1) {
        length+=sqrt(pow(f(x+h)-f(x),2)+pow(h,2));
        x+=h; // Ne surtout pas faire x += un petit nombre. ce nombre doit être égal à h pour ne pas additionner des longueurs en trop, ou en manquer (faire une figure).
    }
    std::cout << length << std::endl;
}