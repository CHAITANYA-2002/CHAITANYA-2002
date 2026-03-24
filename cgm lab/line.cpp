
#include <bits/stdc++.h>
#include <graphics.h>
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


int main(int argc, char const *argv[])
{
	// gm is Graphics mode which is a computer display
	// mode that generates image using pixels.
	// DETECT is a macro defined in "graphics.h" header file
	int gd = DETECT, gm;

	// initgraph initializes the graphics system
	// by loading a graphics driver from disk
	initgraph(&gd, &gm, " C:/MinGW/lib");

	// line for x1, y1, x2, y2
	line(150, 150, 450, 150);

	

	getch();

	// closegraph function closes the graphics
	// mode and deallocates all memory allocated
	// by graphics system .
	closegraph();

    return 0;
}



