#include <bits/stdc++.h>
using namespace std;

bool decre(int x, int y)
{
    return (x>y);
}

int main()
{
    vector<int> a = {11,2,3,14};
    cout<<a[2]<<endl;

    int n = 100;
    vector<int> aa(n,0); // initialize a vector of size n with all elements zero


    sort(a.begin(),a.end()); //O(Nlog(N))
    for (int x:a)
    {
        cout<<x<<" ";
    }cout<<endl;

    //use comparator function as argument to sort in decreasing order
    sort(a.begin(),a.end(),decre); //O(Nlog(N))
    //This can also be used to sort in decreasing order
    sort(a.begin(),a.end(),greater<int>()); //O(Nlog(N))

    for (int x:a)
    {
        cout<<x<<" ";
    }cout<<endl;


    // vector should be sorted in increasing order to use this
    sort(a.begin(),a.end()); //O(Nlog(N))
    
    bool ispresent = binary_search(a.begin(),a.end(),3);// true (returns 1)
    // O(log(N))
    cout<<ispresent<<endl;// 1

    ispresent = binary_search(a.begin(),a.end(),10);// false (returns 0)
    // O(log(N))
    cout<<ispresent<<endl;// 0


    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(123);
    // 2,3,11,14,100,100,100,100,100,123


    // works efficiently on sorted vector
    vector<int>::iterator it1 = lower_bound(a.begin(),a.end(),100);
    // returns iterator of first number in vector >= given argument

    auto it2 = upper_bound(a.begin(),a.end(),100);
    // returns iterator of first number in vector > given argument
    // return iterator of a.end() if no number > given aug is present

    cout<<*it1<<" "<<*it2<<endl;
    cout<< it2 - it1 <<endl; // 5 (frequency of the number, 100)


    for (int x:a) //original vector
    {
        cout<<x<<" ";
    }cout<<endl;

    for (int x:a) // values changed while being passed by value
    {
        x++;
        cout<<x<<" ";
    }cout<<endl;

    for (int x:a) // original vector to show values not changed
    {
        cout<<x<<" ";
    }cout<<endl;

    for (int &x:a) // values changed while being passed by refrence
    {
        x++;
        cout<<x<<" ";
    }cout<<endl;

    for (int x:a) // original vector to show values are changed
    {
        cout<<x<<" ";
    }cout<<endl;

    vector<int> v;
    v.push_back(2); // [2]
    v.push_back(3); // [2, 3]
    v.push_back(7); // [2, 3, 7]
    v.push_back(5); // [2, 3, 7, 5]
    v[1] = 4; // sets element at index 1 to 4 -> [2, 4, 7, 5]
    v.erase(v.begin() + 1); // removes element at index 1 -> [2, 7, 5]
    // this remove method is O(n); to be avoided
    v.push_back(8); // [2, 7, 5, 8]
    v.erase(v.end()-1); // [2, 7, 5]
    // here, we remove the element from the end of the list; this is O(1).
    v.push_back(4); // [2, 7, 5, 4]
    v.push_back(4); // [2, 7, 5, 4, 4]
    v.push_back(9); // [2, 7, 5, 4, 4, 9]
    cout << v[2]; // 5
    v.erase(v.begin(), v.begin()+3); // [4, 4, 9]
    // this erases the first three elements; O(n)

} 