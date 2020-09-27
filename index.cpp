#include <bits/stdc++.h>

using namespace std;

int main()
{

    // PAIRS
    pair<int, int> p = {1, 3};
    //cout << p.first << p.second;

    //VECTORS
    vector<int> v(5, 20);

    v.push_back(30);
    v.push_back(1);
    v.push_back(5);
    v.push_back(305);

    vector<int> v2(v);

    sort(v2.begin(), v2.end());

    for (int x : v2)
    {
        cout << x << " ";
    }

    vector<int>::iterator it = v2.begin();

    cout << "\n"
         << "it ::: " << *(it + 7);

    vector<int>::iterator it2 = v2.end();

    cout << "\n"
         << "it2 ::: " << *(it2 - *(it + 3));

    vector<int>::reverse_iterator it3 = v2.rbegin();

    vector<int>::reverse_iterator it4 = v2.rend();

    cout << "\n"
         << "it3 ::: " << *(it3);

    cout << "\n"
         << "it4 ::: " << *(it4);

    cout << "Back ::: " << v2.back();

    // Printing Vectors

    for (auto it = v.begin(); it != v2.end(); it++)
    {
        cout << "FOR LOOP VALUES ::: " << *(it) << "\n";
    }

    for (auto it : v2)
    {
        cout << "FOR LOOP VALUES ::: " << it << "\n";
    }

    for (int i = 0; i < v2.size(); i++)
    {
        cout << "FOR LOOP VALUES ::: " << v2[i] << "\n";
    }
    cout << "first element before erase :::: " << v2[0] << "\n";

    v2.erase(it);

    cout << "first element after erase :::: " << v2[0] << "\n";

    v2.insert(it, 4);

    cout << "first element after insert:::: " << v2[0] << "\n";

    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7};

    cout << "4 value  ::: " << *(v5.begin() + 4) << "6 value :: " << *(v5.begin() + 7);
    v5.erase(v5.begin() + 4, v5.begin() + 7);

    cout << "final value of v5 : ::: : " << v5.back() << "\n";

    v5.insert(v5.begin() + 1, 2, 20);
    v5.insert(v5.end() - 1, 200);
    for (auto it : v5)
    {
        cout << "FOR LOOP VALUES of v5::: " << it << "\n";
    }

    cout << "SIZE ::: " << v5.size();

    v5.clear();
    cout << "SIZE AFTER CLEAR::: " << v5.size();

    cout << "EMPTY OR NOT :::" << v5.empty();

    vector<pair<int, int>> ab;

    ab.push_back({1, 2});
    ab.push_back({1, 34});
    ab.push_back({4, 6});
    ab.push_back({7, 56});

    for (auto it = ab.begin(); it != ab.end(); it++)
    {

        cout << it->first << it->second << "\n";
    }

    // LIST :

    // Example program

    list<int> ls;
    ls.push_back(23);
    ls.push_front(34);
    ls.push_front(39);
    ls.push_front(334);
    ls.push_front(434);
    ls.push_front(7834);
    ls.push_front(634);
    ls.push_front(934);

    cout << *ls.begin() << "\n";
    cout << *ls.end() << "\n";

    list<int>::iterator it10 = ls.begin();
    list<int>::iterator it11 = ls.end();
    list<int>::reverse_iterator it12 = ls.rbegin();
    list<int>::reverse_iterator it13 = ls.rend();

    ls.sort();

    for (int x : ls)
    {

        cout << x << "\n";
    }

    cout << *it10 << "\n";
    cout << *it11 << "\n";

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << "\n";
    }

    // deque

    deque<int> dq;
    dq.push_front(1);
    dq.push_front(190);
    dq.push_front(123);
    dq.push_front(1944);
    dq.push_front(1345);
    dq.push_front(90);

    sort(dq.begin(), dq.end());

    for (int x : dq)
    {
        cout << x << "\n";
    }

    deque<int>::iterator dq1 = dq.begin();
    deque<int>::iterator dq2 = dq.end();

    if (dq.front() == *dq.begin())
    {
        cout << "same to same :: " << dq[0] << "\n";
    }

    // STACK -- LIFO

    stack<int> st;

    st.push(20);
    st.push(22);
    st.push(23);
    st.push(26);
    st.push(27);
    st.push(30);

    cout << st.top(); // 30

    st.pop(); //removes top most element

    cout << st.top(); //27

    // QUEUE - FIFO

    queue<int> qu;

    qu.push(30);
    qu.push(35);
    qu.push(39);
    qu.push(67);

    cout << qu.back() << " " << qu.front();

    qu.front() += 7;
    qu.back() += 9;

    cout << qu.back() << " " << qu.front();

    // PRIORITY QUEUES

    // descending
    priority_queue<int> pq(2, 10);

    pq.push(20);
    pq.push(13);
    pq.push(14);
    pq.push(8);
    pq.push(567);
    pq.push(909);

    while (!pq.empty())
    {
        cout << pq.top() << "\n";
        pq.pop();
    }

    // ascending
    priority_queue<int, vector<int>, greater<int>> pqmin;

    pqmin.push(45);
    pqmin.push(465);
    pqmin.push(34);
    pqmin.push(12);
    pqmin.push(1);

    while (!pqmin.empty())
    {
        cout << pqmin.top() << "\n";
        pqmin.pop();
    }

    // SET

    set<int> sta;

    sta.insert(1);
    sta.insert(20);
    sta.insert(333);
    sta.insert(456);
    sta.insert(15);

    auto it = sta.find(15);
    auto it2 = sta.find(10);
    //if value is not there in set it will point to st.end()

    for (auto x : sta)
    {
        cout << x << "\n";
    }

    set<int> st1;

    st1.insert(10);
    st1.insert(2);
    st1.insert(3);
    st1.insert(4);
    st1.insert(1);

    for (auto x : st1)
    {
        cout << x << "\n";
    }

    auto it3 = st1.upper_bound(0);
    auto it4 = st1.lower_bound(11);

    cout << "end ::: " << *(it4)-1 << "\n";

    cout << *it3 << "\n"
         << *it4;

    // MULTI SET

    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(134);
    ms.insert(156);
    ms.insert(567);
    ms.insert(77);
    ms.insert(1);

    cout << "count of 10 ::: " << ms.count(10) << "\n";

    ms.erase(ms.find(10));

    for (auto x : ms)
    {
        cout << x << "\n";
    }

    //unordered_set

    unordered_set<int> ust;
    ust.insert(10);
    ust.insert(10);
    ust.insert(10);
    ust.insert(134);
    ust.insert(156);
    ust.insert(567);

    for (auto x : ust)
    {
        cout << x << "\n";
    }

    cout << ust.count(10);

    // MAP

    map<int, int> mp;
    map<int, pair<int, string>> mpp, mpp1;

    mpp[12] = {1, "one"};
    mpp.insert({2, {11, "eleven"}});

    mp.insert({4, 14});
    mp.insert({2, 54});
    mp.insert({1, 25});

    for (auto m : mp)
    {
        cout << m.first << " " << m.second << "\n";
    }
    for (auto m : mpp)
    {
        cout << m.first << " " << m.second.first << m.second.second << "\n";
    }

    mpp1.insert(mpp.begin(), mpp.end());

    for (auto m : mpp1)
    {
        cout << m.first << " " << m.second.first << m.second.second << "\n";
    }

    for (auto itr = mpp1.begin(); itr != mpp1.end(); ++itr)
    {
        cout << itr->first
             << itr->second.first << itr->second.second << '\n';
    }
}