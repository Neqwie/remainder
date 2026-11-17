#include <bits/stdc++.h>
#include "Stack_list.h"
#include "Stack_arr.h"

using namespace std;


int main() {

    int t = 1e7;
    
    //test1
    /*
    for (int k = 0; k <= t; k += 1e5) {
    bck_fwd_list n_stack1 = bck_fwd_list();
    auto t1_start = chrono::high_resolution_clock::now();
    for (int i = 0; i < k; i++) {
        n_stack1.push(rand());
    }
    for (int i = 0; i < k; i++) {
        n_stack1.pop();
    }
    auto t1_end = chrono::high_resolution_clock::now();
    auto t1 = chrono::duration_cast<std::chrono::microseconds>(t1_end - t1_start);
    cout << t1.count() << " mcs | " << t1.count() / 1000000.0 << "s\n";
    }


    
    //test2
    for (int k = 0; k <= t; k += 1e5) {
    bck_fwd_list n_stack2 = bck_fwd_list();
    auto t2_start = chrono::high_resolution_clock::now();
    
    for (int i = 0; i < k; i++) {
        if (i % 10 <= 6) {
            n_stack2.push(rand());
        } else {
            n_stack2.pop();
        }
    }

    auto t2_end = chrono::high_resolution_clock::now();

    auto t2 = chrono::duration_cast<std::chrono::microseconds>(t2_end - t2_start);

    cout << t2.count() << " mcs | " << t2.count() / 1000000.0 << "s\n";
    }
    //-----------------//

    
    //test1
    for (int k = 0; k <= t; k += 1e5) {
    Stack_arr n_stack3;
    auto t3_start = chrono::high_resolution_clock::now();
    for (int i = 0; i < k; i++) {
        n_stack3.push_beck(rand());
    }
    for (int i = 0; i < k; i++) {
        n_stack3.pop_beck();
    }
    auto t3_end = chrono::high_resolution_clock::now();
    auto t3 = chrono::duration_cast<std::chrono::microseconds>(t3_end - t3_start);
    cout << t3.count() << " mcs | " << t3.count() / 1000000.0 << "s\n";
    }*/

    
    //test2
    for (int k = 0; k <= t; k += 1e5) {
    Stack_arr n_stack4;
    auto t4_start = chrono::high_resolution_clock::now();

    for (int i = 0; i < k; i++) {
        if (i % 10 <= 6) {
            n_stack4.push_beck(rand());
        } else {
            n_stack4.pop_beck();
        }
    }

    auto t4_end = chrono::high_resolution_clock::now();

    auto t4 = chrono::duration_cast<std::chrono::microseconds>(t4_end - t4_start);

    cout << t4.count() << " mcs | " << t4.count() / 1000000.0 << "s\n";
    }
    
    
    return 0;
}