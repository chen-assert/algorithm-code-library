#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<queue>
#include<time.h>
#include<stack>
#include<map>
#include<cctype>
//#include"segment tree.h"
//#include<windows.h>
#define range(i, s, e) for (int i = s; i < int(e); i++)
#define range0(i, e) for (int i = 0; i < int(e); i++)
#define input_int(n) int n;scanf("%d",&n);
#define INF 0x3f3f3f3f
typedef unsigned long long ull;
using namespace std;
int parent[500010];
int visited[500010];
int head[500010];
int qhead[500010];
int ans[500010];
int rank_[500010];
struct NODE {
	int to;
	int last;
}node[1000010];
struct QUERY {
	int to;
	int last;
}search_[1000010];
;
int find(int i) {
	if (parent[i] == i)return i;
	else return parent[i] = find(parent[i]);
}
void merge(int a1, int a2) {
	parent[a1] = parent[a2];
}
void add(int a, int b, int t) {//添加道路信息
	node[t].last = head[a];
	node[t].to = b;
	head[a] = t;
}
void qadd(int a, int b, int t) {//添加询问信息
	search_[t].last = qhead[a];
	search_[t].to = b;
	qhead[a] = t;
}
void tarjan(int u, NODE *node, QUERY *search, int from) {
	//merge和find为并查集合并函数和查找函数 
	for (int v = head[u]; v != 0; v = node[v].last) {	                //访问所有u子节点v
		if (node[v].to == from)continue;
		tarjan(node[v].to, node, search, u);                    //继续往下遍历
		merge(node[v].to, u);                                //合并v到u上
		visited[node[v].to] = 1;                        //标记v已被访问过
	}
	for (int e = qhead[u]; e != 0; e = search_[e].last) {				//访问所有和u有询问关系的e
		if (visited[search_[e].to] == 1) {
			ans[e / 2] = find(search_[e].to);		//u, e的最近公共祖先为find(e);
		}
	}
}
int find_rank(int to,int from,int now_rank) {//预查询各节点rank
	rank_[to] = now_rank;
	for (int v = head[to]; v != 0; v = node[v].last) {	              
		if (node[v].to == from)continue;
		                
	}
}
int main() {
	input_int(n);
	input_int(q);
	for (int i = 2; i <= n; i++) {
		int t;
		scanf("%d", &t);
		add(t, i, i * 2 );
		add(i, t, i * 2 + 1);
	}
	find_rank(1,1,1);
		range0(i, q) {
		
	}
}