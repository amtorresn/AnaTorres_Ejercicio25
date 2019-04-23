#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using std::cout;
using std::endl;

void solve(int n, double y0, double delta, double w);
void explicit_Euler(int n, double y0, double delta, double w);
void implicit_Euler(int n, double y0, double delta, double w);

int main(){
    
//     cout << 0.1 << endl;
    solve(200, 2, 0.1, 1);
//     cout << 0.01 << endl;
    solve(200, 2, 0.01, 1);
//     cout << 1 << endl;
    solve(200, 2, 1, 1);
    return 0;
}

void explicit_Euler(int n, double y0, double delta, double w){
    double y = y0;
    double t = 0;
//     cout << "explicit" << endl;
    for (int i = 0; i < n; i++){
        y = y0*pow(1-w*delta,i);
        t += delta;
        cout << t << " " << y << endl;
    }
}

void implicit_Euler(int n, double y0, double delta, double w){
    double y = y0;
    double t = 0;
//     cout << "implicit" << endl;
    for (int i = 0; i < n; i++){
        y = y0/pow(1+w*delta,i);
        t += delta;
        cout << t << " " << y << endl;
    }
    
}

void solve(int n, double y0, double delta, double w){
    explicit_Euler(n, y0, delta, w);
    implicit_Euler(n, y0, delta, w);
}
