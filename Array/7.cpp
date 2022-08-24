/*
Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

Help chef find which type of doll is missing..
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	       cin>>arr[i];
	    }
	    int ans=arr[0];
	    for(int i=1;i<n;i++){
	        ans=(ans^arr[i]);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
