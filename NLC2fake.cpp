#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isPrime(int n){
	if(n<=1) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() 
{
	
	    vector<int> prime;
		int counter=2;
		while(prime.size()<100001){
			if(isPrime(counter)){
				prime.push_back(counter);
			}
			counter++;
		}
		
		int t;
	    cin >> t;
	    while(t--) {

            int n;
            cin >> n;
            int b[n];

            for (int i = 0; i < n; i++) {
                cin >> b[i];
            }
            int a[n];
            for (int i = 0; i < n; i++) {
		        a[i] = prime[i];
		}
            for (int i = 0; i <n; i++) {
                if (i != b[i]-1) {
                    a[i] = a[b[i]-1];
                }

            }
            for (int i = 0; i < n; i++) { cout << a[i] << " "; }
	        cout << "\n";
        }
	return 0;
} 
