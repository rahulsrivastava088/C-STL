#define flash ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
// #define vi vector<int>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define mp make_pair
#define sz(x) (int)(x).size()
#define mod 1000007
#define stprec(n) std::cout << std::setprecision(n) << std::fixed;
#define frn(n) for(int i = 0; i < n; i++)
#define fr(a,b) for(int i = a; i <= b; i++)
#include <bits/stdc++.h>
using namespace std;

void dbg(ll x) {
	cerr << "debug value " << x << endl; 
}

void fact_multiply(vector<int> &v, int n)
{
    int carry = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int d = v[i]*n + carry;
        v[i] = d%10;
        carry = d/10;
    }
    while (carry!=0)
    {
        v.push_back(carry % 10);
        carry/=10;
    }
}

void fact(int n)
{
    vector <int> v = {1};
    for (int i=2;i<=n;i++)
    {
        fact_multiply(v,i);
    }
    for (int i = v.size()-1; i>=0; i--)
    {
        cout<<v[i];
    }
    cout<<endl;
}

ll sod (ll n1)
{
    ll s=0;
    while (n1!=0)
    {
        int d = n1%10;
        s+=d;
        n1/=10;
    }
    return s;
}

void insert(vector<int> &v, int temp)
{
    if (v.size()==0 || v[v.size()-1]<=temp)
    {
        v.pb(temp);
        return;
    }
    int t = v[v.size()-1];
    v.pob();
    insert(v, temp);
    v.pb(t);
}

void sortVector(vector<int> &v)
{
    if (v.size()==1)
    return;
    int temp = v[v.size()-1];
    v.pob();
    sortVector(v);
    insert(v, temp);
}

void solve()
{
    vector<int> v;
    int n;
    cin>>n;
    while(n-->0)
    {
        int x;cin>>x;
        v.pb(x);
    }
    sortVector(v);
    n = v.size();
    frn(n)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    flash;
    ll t;
    cin>>t;
    while (t-->0)
    {
        solve();
    }
}