/*  Please compute the sum of squares for the given numbers: a, a+1, ..., b-1, b.
  Input :
      Two numbers: a and b separated by space, where 1 <= a <= b <=50.
  Output :
      Computed sum: a*a + (a+1)*(a+1) + ... + (b-1)*(b-1) + b*b
 Example 1 :
          Input :
                1 4
          Output:
                30
 Example 2 :
          Input:
                5 6
          Output:
                61
*/

#include <iostream>
using namespace std;

int main() {
	int a,b,i;
	int sum=0;
	cin>>a>>b;
	for ( i=a;i<=b;i++) {
	    sum=sum+i*i;
	}
	cout<<sum;
	return 0;
}
