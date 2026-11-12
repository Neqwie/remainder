class Stack_arr {
private:
    int *arr;
    int size;
    int capacity;

public:

    Stack_arr(int capacity_t = 10) {
        size = 0;
        capacity = capacity_t;
        arr = new int[capacity];

        for (int i = 0; i < capacity; i++) {
            arr[i] = 0;
        }
    }

    ~Stack_arr() {
        delete[] arr;
    }

    Stack_arr(const Stack_arr &tmp) {
        size = tmp.size;
        capacity = tmp.capacity;
        
        arr = new int[capacity];

        for (int i = 0; i < size; i++) {
            arr[i] = tmp.arr[i];
        }
    }

    void push_beck(int x) {
        if (size + 1 > capacity) {
            int *tmp = new int[size];
            for (int i = 0; i < size; i++) {
                tmp[i] = arr[i];
            }
            capacity *= 2;
            if (arr != nullptr) {
                delete[] arr;
            }

            arr = new int[capacity];
            for (int i = 0; i < capacity; i++) {
                if (i < size) {
                    arr[i] = tmp[i];
                } else if (i == size) {
                    arr[i] = x;
                } else {
                    arr[i] = 0;
                }
            }
            delete[] tmp;
            size++;

        } else {
            arr[size] = x;
            size++;
        }
    }

    void pop_beck() {
        if (size != 0) {
            arr[size - 1] = 0;
            size--;
        }
    }

    int top() {
        return arr[size - 1];
    }







};