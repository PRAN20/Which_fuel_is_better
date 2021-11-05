#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin >> test;
	while(test--)
	{
	    int x,y,a,b,k;
	    cin >>x>>y>>a>>b>>k;
	    x = x + (a*k);
	    y = y + (k*b);
	    
	    if (x > y)
	    {
	        cout << "DIESEL"<<endl;
	    }
	    else if (x < y)
	    {
	        cout << "PETROL"<<endl;
	    }
	    else
	    {
	        cout << "SAME PRICE" << endl;
	    }
	}
	return 0;
}
