#define flash ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
// using vi = vector<int>;
#define pb push_back
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

void tower_of_hanoi(int n, int start, int destination, int helper)
{
    if (n==1)
    {
        cout<<"moved "<<n<<" disk from "<<start<<" to "<<destination<<endl;
        return;
    }
    tower_of_hanoi(n-1, start, helper, destination);
    cout<<"moved "<<n<<" disk from "<<start<<" to "<<destination<<endl;
    tower_of_hanoi(n-1, helper, destination, start);
    return;
}

void solve()
{
}

int main()
{
    flash;
    // ll t;
    // cin>>t;
    // while (t-->0)
    // {
    //     solve();
    // }
    int n;
    cin>>n;
    tower_of_hanoi(n, 1, 3, 2);
}