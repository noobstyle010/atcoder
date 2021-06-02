#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <functional>
#include <stack>
#include <iomanip>
#include <limits>
#include <unordered_map>

using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<double> VD;

static const double pi = std::acos(-1.0);

complex<double> rotation(complex<double> center,complex<double> p,double fai){
  return center + (p-center)* polar(1.0,pi*fai/180.0);
}

int main(){
  int n;cin>>n;
  float x0,y0,xh,yh;
  cin>>x0>>y0;
  cin>>xh>>yh;
  complex<double> p0(x0,y0);
  complex<double> ph(xh,yh);
  complex<double> pm =(p0+ph)/2.0;
  complex<double> ans = rotation(pm,p0,360.0/n); 
  cout <<std::setprecision(15)<< ans.real() <<" "<< ans.imag() <<endl;
}
