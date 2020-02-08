#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n) {

    long long i = 2;
    while (i*i <= n) {

	if (n % i == 0) {

	    return false;
	}
	i += 1;
    }
    return true;
}
int main() {

    long long arr[10000];
    long long error=0;
    for(long long i=0;i<100000;i++)arr[i]=i*i+i+1;
    for(long long i=1;i<100000;i++)
    {
	if (is_prime(arr[i])==false)error++;
	else cout<<i-error<<": "<<arr[i]<<endl;
    }
}

