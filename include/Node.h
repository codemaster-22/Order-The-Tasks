#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    int indegree;
    vector<int> V;
    Node(int x,int d);
};
