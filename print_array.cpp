#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    for(int val:vec) 
    {
      cout << val << endl;
    }

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vec.push_back(5);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    cout << vec[2] << endl;

    cout << vec.at(2) << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    vec.pop_back();
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    




    
}