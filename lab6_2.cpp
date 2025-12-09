#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

double deg2rad(double a){
    double calcu_a;
    calcu_a = a*(M_PI/180);
    return calcu_a;
}

double rad2deg(double a){
    double calcu_a;
    calcu_a = a*(180/M_PI);
    return calcu_a;
}
double findXComponent(double line1,double line2,double angle1,double angle2){
    double comp_x, x1,x2;
    x1 = line1*cos(angle1);
    x2 = line2*cos(angle2);
    comp_x = x1+x2;
    return comp_x;
}

double findYComponent(double line1,double line2,double angle1,double angle2){
    double comp_y, y1,y2;
    y1 = line1*sin(angle1);
    y2 = line2*sin(angle2);
    comp_y = y1+y2;
    return comp_y;
}

double pythagoras(double comp1,double comp2) {
    double ptg;
    ptg = sqrt(pow(comp1, 2) + pow(comp2, 2));
    return ptg;
}

void showResult(double l, double d){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << l << "\n";
    cout << "Direction of the resultant vector (deg) = " << d << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
