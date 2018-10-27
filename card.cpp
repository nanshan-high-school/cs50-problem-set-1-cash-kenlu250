#include <iostream>
using namespace std;

int main() {
  long int num;
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p = 0;

  cout << "請輸入卡號:";
  cin >> num;

  while(num >= 1000000000000000){
    num = num - 1000000000000000;
    a++;
  }

  while(num >= 100000000000000){
    num = num - 100000000000000;
    b++;
  }

  while(num >= 10000000000000){
    num = num - 10000000000000;
    c++;
  }

  while(num >= 1000000000000){
    num = num - 1000000000000;
    d++;
  }

  while(num >= 100000000000){
    num = num - 100000000000;
    e++;
  }

  while(num >= 10000000000){
    num = num - 10000000000;
    f++;
  }

  while(num >= 1000000000){
    num = num - 1000000000;
    g++;
  }

  while(num >= 100000000){
    num = num - 100000000;
    h++;
  }

  while(num >= 10000000){
    num = num - 10000000;
    i++;
  }

  while(num >= 1000000){
    num = num - 1000000;
    j++;
  }

  while(num >= 100000){
    num = num - 100000;
    k++;
  }

  while(num >= 10000){
    num = num - 10000;
    l++;
  }

  while(num >= 1000){
    num = num - 1000;
    m++;
  }

  while(num >= 100){
    num = num - 100;
    n++;
  }

  while(num >= 10){
    num = num - 10;
    o++;
  }

  cout << a << "\n";
  cout << b << "\n";
  cout << c << "\n";
  cout << d << "\n";
  cout << e << "\n";
  cout << f << "\n";
  cout << g << "\n";
  cout << h << "\n";
  cout << i << "\n";
  cout << j << "\n";
  cout << k << "\n";
  cout << l << "\n";
  cout << m << "\n";
  cout << n << "\n";
  cout << o << "\n";
}

