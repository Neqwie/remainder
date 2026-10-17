#include <bits/stdc++.h>
#include "Stack_list.h"

using namespace std;


int main() {


    //test1
    bck_fwd_list n_stack1 = bck_fwd_list();
    auto t1_start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 1e7; i++) {
        n_stack1.push(rand());
    }

    for (int i = 0; i < 1e7; i++) {
        n_stack1.pop();
    }

    auto t1_end = chrono::high_resolution_clock::now();

    auto t1 = chrono::duration_cast<std::chrono::milliseconds>(t1_end - t1_start);

    cout << t1.count() << " ms | " << t1.count() / 1000.0 << "s\n";


    //test2
    bck_fwd_list n_stack2 = bck_fwd_list();
    auto t2_start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 1e7; i++) {
        if (i % 10 <= 6) {
            n_stack2.push(rand());
        } else {
            n_stack2.pop();
        }
    }

    auto t2_end = chrono::high_resolution_clock::now();

    auto t2 = chrono::duration_cast<std::chrono::milliseconds>(t2_end - t2_start);

    cout << t2.count() << " ms | " << t2.count() / 1000.0 << "s\n";

    
    
    return 0;
}
