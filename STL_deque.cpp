#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    dq.emplace_front(6);
    dq.emplace_back(7);
    dq.pop_back();       // removes 2
    dq.pop_front();   
     for (auto i : dq)
        cout << i << " ";
    cout << endl;
      // accessing the ith element from a deque
    cout << dq[1] << " " << dq.at(1) << endl;
    // get front and back elements
    cout << "Front and back elements are "
    cout << dq.front() << " and " << dq.back() << endl;

   // to check if our deques is empty or not
    cout << "Is the deque empty? " << dq.empty() << endl;

   
    
    cout << "First and last element using pointers" << endl
         << *dq.begin() << " " << *(dq.end() - 1) << endl;

    // size of the deque
    cout << "The size of deque is " << dq.size() << endl;

    // deleting all elements of deque or selection of elements
    dq.erase(dq.begin() + 2, dq.end());

    // delete all
    dq.erase(dq.begin(), dq.end());
    cout << "\nAfter deleting all elements" << endl;

    // has all vector functionalities inherited
    // deque can access front elements directly.

    return 0;

}
