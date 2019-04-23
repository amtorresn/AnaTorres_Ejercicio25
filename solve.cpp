#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

void solve();
void explicit_Euler(int n, double y0, double delta, double w);
void implicit_Euler(int n, double y0, double delta, double w);

int main(){
    
    solve()
    return 0;
}

void explicit_Euler(int n, double y0, double delta, double w){
    double y = y0*pow(1-w*delta,n)
    cout << y << endl;
}

void implicit_Euler(int n, double y0, double delta, double w){
    double y = y0/pow(1-w*delta,n)
    cout << y << endl;
}

void solve(){
    
}
