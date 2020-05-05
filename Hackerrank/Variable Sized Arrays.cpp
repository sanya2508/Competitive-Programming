#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int n, q;
  int **a;
  scanf("%d%d", &n, &q);
  a = new int*[n];
  for (int i = 0, k; i < n; ++i) {
    scanf("%d", &k);
    a[i] = new int[k];
    for (int j = 0; j < k; ++j) {
      scanf("%d", &a[i][j]);
    }
  }
  int i, j;
  while (q-->0) {
    scanf("%d%d", &i, &j);
    printf("%d\n", a[i][j]);
  }
    return 0;
}

