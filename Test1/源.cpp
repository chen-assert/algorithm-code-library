#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<limits.h>
#include<time.h>
#include<iostream>
#include<functional>
#include<vector>
#include<queue>
//#include<windows.h>
#define range(i, s, e) for (int i = (s); i < int(e); i++)
#define range0(i, e) for (int i = 0; i < int(e); i++)
#define input_int(n) int n;scanf("%d",&n);
#define input_int2(n,m) int n;int m;scanf("%d %d",&n,&m);
#define remax(max_record,refresh_number) max_record=std::max(max_record,refresh_number)
#define remin(min_record,refresh_number) min_record=std::min(min_record,refresh_number)
#define INF 0x3f3f3f3f
#define INF2 INT_MAX
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
inline void read(int &x) {//only read int
	static char c;
	for (c = getchar(); !('0' <= c&&c <= '9'); c = getchar());
	for (x = 0; '0' <= c&&c <= '9'; x = x * 10 + c - 48, c = getchar());
}
struct point {
	int x;
	int y;
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	point() {

	}
};
int main() {
	int n, m;
	read(n);
	read(m);
	int **array = new int *[n + 1];
	for (int i = 0; i <= n; i++) {
		array[n] = new int[m + 1];
	}
	for (int i = 1; i < +n; i++) {
		for (int o = 1; o < +m; o++) {
			scanf("%d", &array[i][o]);
		}
	}
	point start, end;
	scanf("%d %d %d %d", &start.x,&start.y,&end.x,&end.y);
	char direction;
	scanf("%c", direction);

}