///   ***   ---            In the name of ALLAH        |||   ---   ***   ///
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES printf("YES\n");
#define NO printf("NO\n");

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

const int mx = 2e5+123;
int a[mx];
ll sum[mx];

void solve(){

    string s;
    cin>>s;

    int f=0;

    string P = s;

    reverse(P.begin(), P.end());

    int f1=0;

    if (s == P) {

        f1=1;
    }

    for(int i=0; i<s.length(); i++){

        if(s[i]!='A' && s[i]!='H' && s[i]!='I' && s[i]!='M' && s[i]!='O' && s[i]!='T' && s[i]!='U' && s[i]!='V' && s[i]!='W' && s[i]!='Y' && s[i]!='X'){
            f=1;
            break;
        }
    }

    if(f1 &&  !f)YES
    else NO

}

int main()
{
    optimize();

    solve();

    return 0;
}

