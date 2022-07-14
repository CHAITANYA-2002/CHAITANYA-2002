#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define inf 1000000000000000001;
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
const int mod = 998244353;

int permute(int A[], int P[], int n)
{
	
	for (int i = 0; i < n; i++) {
		int next = i;

	
		while (P[next] >= 0) {

			
			swap(A[i], A[P[next]]);
			int temp = P[next];

		
			P[next] -= n;
			next = temp;
		}
	}
}

// Driver code
int main()
{
	int A[] = { 6, 2, 5, 4 };
	int P[] = { 3, 0, 2, 1 };
	int n = sizeof(A) / sizeof(int);

	permute(A, P, n);

	
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";

	return 0;
}
