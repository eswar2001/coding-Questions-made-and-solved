#include <iostream>

#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using namespace std;
typedef cpp_int ll;
ll NCR(ll n, ll r) {
  ll y, res;
  if (r == 0) {
    y = 1;
    return y;
  } else if (n == r) {
    y = 1;
    return y;
  } else {
    res = NCR(n - 1, r - 1) + NCR(n - 1, r);
  }
  return res;
}

ll fact(ll n);
//old fashion iterative loops better than recursive functions
ll nCr(ll n, ll r) {
  return fact(n) / (fact(r) * fact(n - r));
}
ll fact(ll n) {
  ll res = 1;
  for (ll i = 2; i <= n; i++)
    res = res * i;
  return res;
}

ll ncr(ll n, ll r) {
  /*
  for your understandiing I am actually removing the redundant calculations along with dec in the no of operations.
  */
  ll a = 1;
  if (r > n - r) {
    r = n - r;
  }
  for (ll i = 0; i < r; i++) //numerator,denominator
    a *= n - i, a /= i + 1;;
  return a;
}

void printNcR(ll n, ll r) {
  clock_t time_req;
  time_req = clock();

  // p holds the value of n*(n-1)*(n-2)..., 
  // k holds the value of r*(r-1)... 
  ll p = 1, k = 1;

  // C(n, r) == C(n, n-r), 
  // choosing the smaller value 
  if (n - r < r)
    r = n - r;

  if (r != 0) {
    while (r) {
      p *= n;
      k *= r;

      // gcd of p, k 
      ll m = __gcd(p, k);

      // dividing by gcd, to simplify product 
      // division by their gcd saves from the overflow 
      p /= m;
      k /= m;

      n--;
      r--;
    }

    // k should be simplified to 1 
    // as C(n, r) is a natural number 
    // (denominator should be 1 ) . 
  } else
    p = 1;

  // if our approach is correct p = ans and k =1 
  cout << p << "  ";
  time_req = clock() - time_req;
  cout << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;
}

int main() {

  //100!=9.332622e+157

  clock_t time_req;
  //recursion is the worst method as we face Stack-Overflow 
  time_req = clock();
  //100C4
  cout << NCR(100, 4) << " recursion ";
  time_req = clock() - time_req;
  cout << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;

  time_req = clock();
  //100C4
  cout << nCr(100, 4) << " iterative ";
  time_req = clock() - time_req;
  cout << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;

  //100C4
  printNcR(100, 4);

  time_req = clock();
  //100C4
  cout << ncr(100, 4) << "  ";
  time_req = clock() - time_req;
  cout << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;

  return 0;
}
