#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

	vector<long long> v;

	for(long long i=1; v.size()<10000; i++) {
		long long n = 3*i*i + 3*i + 1;
		//check if n is prime
		
		bool prime = 1;
		for(long long d=2; d<=sqrt(n); d++) {
			if(n%d==0) {
				prime = 0; 
				break;
			}
		}
		if(prime) {
			v.push_back(n);
			cout << v.size() << ": " << n << "\n";
		}

	}

}
